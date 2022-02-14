
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_18__ {int ptype; scalar_t__ frag_len; scalar_t__ auth_len; unsigned short flags; } ;
struct TYPE_17__ {scalar_t__ BufferLength; int * Buffer; } ;
struct TYPE_15__ {scalar_t__ alloc_hint; } ;
struct TYPE_14__ {scalar_t__ alloc_hint; } ;
struct TYPE_16__ {TYPE_7__ common; TYPE_2__ request; TYPE_1__ response; } ;
typedef TYPE_3__ RpcPktHdr ;
typedef int RpcConnection ;
typedef int RpcAuthVerifier ;
typedef scalar_t__ RPC_STATUS ;
typedef TYPE_4__* PRPC_MESSAGE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 unsigned char* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,void*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;


 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_3__**,void**) ;
 unsigned int FUNC_10 (TYPE_7__*) ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,unsigned int,...) ;
 int FUNC_13 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int ,TYPE_3__*,scalar_t__,unsigned char*,scalar_t__,int *,unsigned char*,unsigned int) ;

RPC_STATUS FUNC_17(RpcConnection *VAR_8, RpcPktHdr **VAR_9,
                                  PRPC_MESSAGE VAR_10,
                                  unsigned char **VAR_11,
                                  ULONG *VAR_12)
{
  RPC_STATUS VAR_13;
  DWORD VAR_14;
  unsigned short VAR_15;
  ULONG VAR_16;
  ULONG VAR_17;
  ULONG VAR_18 = 0;
  unsigned char *VAR_19 = ((void*)0);
  RpcPktHdr *VAR_20 = ((void*)0);
  void *VAR_21 = ((void*)0);

  *VAR_9 = ((void*)0);
  VAR_10->Buffer = ((void*)0);
  if (VAR_11) *VAR_11 = ((void*)0);
  if (VAR_12) *VAR_12 = 0;

  FUNC_11("(%p, %p, %p, %p)\n", VAR_8, VAR_9, VAR_10, VAR_11);

  FUNC_8(VAR_8);

  VAR_13 = FUNC_9(VAR_8, VAR_9, &VAR_21);
  if (VAR_13 != VAR_3) goto fail;

  VAR_14 = FUNC_7(*VAR_9);


  switch ((*VAR_9)->common.ptype) {
  case 128:
    VAR_10->BufferLength = (*VAR_9)->response.alloc_hint;
    break;
  case 129:
    VAR_10->BufferLength = (*VAR_9)->request.alloc_hint;
    break;
  default:
    VAR_10->BufferLength = (*VAR_9)->common.frag_len - VAR_14 - FUNC_10(&(*VAR_9)->common);
  }

  FUNC_11("buffer length = %u\n", VAR_10->BufferLength);

  VAR_10->Buffer = FUNC_3(VAR_10->BufferLength);
  if (!VAR_10->Buffer)
  {
    VAR_13 = VAR_0;
    goto fail;
  }

  VAR_15 = VAR_1;
  VAR_18 = (*VAR_9)->common.auth_len;
  if (VAR_18) {
    VAR_19 = FUNC_1(FUNC_0(), 0, FUNC_10(&(*VAR_9)->common));
    if (!VAR_19) {
      VAR_13 = VAR_4;
      goto fail;
    }
  }
  VAR_20 = *VAR_9;
  VAR_17 = 0;
  while (VAR_7)
  {
    unsigned int VAR_22 = FUNC_10(&VAR_20->common);



    if ((VAR_20->common.frag_len < VAR_14) ||
        (VAR_20->common.frag_len - VAR_14 < VAR_22)) {
      FUNC_12("frag_len %d too small for hdr_length %d and auth_len %d\n",
        VAR_20->common.frag_len, VAR_14, VAR_20->common.auth_len);
      VAR_13 = VAR_5;
      goto fail;
    }

    if (VAR_20->common.auth_len != VAR_18) {
      FUNC_12("auth_len header field changed from %d to %d\n",
        VAR_18, VAR_20->common.auth_len);
      VAR_13 = VAR_5;
      goto fail;
    }

    if ((VAR_20->common.flags & VAR_1) != VAR_15) {
      FUNC_11("invalid packet flags\n");
      VAR_13 = VAR_5;
      goto fail;
    }

    VAR_16 = VAR_20->common.frag_len - VAR_14 - VAR_22;
    if (VAR_16 + VAR_17 > VAR_10->BufferLength) {
      FUNC_11("allocation hint exceeded, new buffer length = %d\n",
        VAR_16 + VAR_17);
      VAR_10->BufferLength = VAR_16 + VAR_17;
      VAR_13 = FUNC_5(VAR_10);
      if (VAR_13 != VAR_3) goto fail;
    }

    FUNC_13((unsigned char *)VAR_10->Buffer + VAR_17, VAR_21, VAR_16);

    if (VAR_22) {
      if (VAR_22 < sizeof(RpcAuthVerifier) ||
          VAR_22 > FUNC_10(&(*VAR_9)->common)) {
        FUNC_12("bad auth verifier length %d\n", VAR_22);
        VAR_13 = VAR_5;
        goto fail;
      }






      FUNC_13(VAR_19, (unsigned char *)VAR_21 + VAR_16, VAR_22);



      if (!FUNC_14(*VAR_9) && FUNC_15(VAR_8))
      {
        VAR_13 = FUNC_16(VAR_8, VAR_6,
            VAR_20, VAR_14,
            (unsigned char *)VAR_10->Buffer + VAR_17, VAR_16,
            (RpcAuthVerifier *)VAR_19,
            VAR_19 + sizeof(RpcAuthVerifier),
            VAR_22 - sizeof(RpcAuthVerifier));
        if (VAR_13 != VAR_3) goto fail;
      }
    }

    VAR_17 += VAR_16;
    if (!(VAR_20->common.flags & VAR_2)) {
      FUNC_11("next header\n");

      if (*VAR_9 != VAR_20)
      {
          FUNC_6(VAR_20);
          VAR_20 = ((void*)0);
      }
      FUNC_2(FUNC_0(), 0, VAR_21);
      VAR_21 = ((void*)0);

      VAR_13 = FUNC_9(VAR_8, &VAR_20, &VAR_21);
      if (VAR_13 != VAR_3) goto fail;

      VAR_15 = 0;
    } else {
      break;
    }
  }
  VAR_10->BufferLength = VAR_17;


  VAR_13 = VAR_3;

fail:
  FUNC_8(((void*)0));
  if (VAR_20 != *VAR_9)
    FUNC_6(VAR_20);
  if (VAR_13 != VAR_3) {
    FUNC_4(VAR_10->Buffer);
    VAR_10->Buffer = ((void*)0);
    FUNC_6(*VAR_9);
    *VAR_9 = ((void*)0);
  }
  if (VAR_11 && VAR_13 == VAR_3) {
    *VAR_12 = VAR_18;
    *VAR_11 = VAR_19;
  }
  else
    FUNC_2(FUNC_0(), 0, VAR_19);
  FUNC_2(FUNC_0(), 0, VAR_21);
  return VAR_13;
}
