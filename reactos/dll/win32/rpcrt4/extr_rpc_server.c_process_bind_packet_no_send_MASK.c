
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ ULONG ;
struct TYPE_25__ {int BufferLength; TYPE_3__* Buffer; } ;
struct TYPE_19__ {int SyntaxGUID; } ;
struct TYPE_24__ {scalar_t__ MaxTransmissionSize; int Endpoint; TYPE_13__* server_binding; int NetworkOptions; int NetworkAddr; TYPE_11__ ActiveInterface; } ;
struct TYPE_23__ {size_t num_syntaxes; TYPE_11__ abstract_syntax; int * transfer_syntaxes; } ;
struct TYPE_22__ {unsigned int num_elements; scalar_t__ max_tsize; int assoc_gid; } ;
struct TYPE_21__ {int transfer_syntax; int reason; void* result; } ;
struct TYPE_20__ {TYPE_10__* Assoc; } ;
struct TYPE_18__ {int assoc_group_id; } ;
typedef int RpcServerInterface ;
typedef TYPE_1__ RpcResult ;
typedef int RpcPktHdr ;
typedef TYPE_2__ RpcPktBindHdr ;
typedef TYPE_3__ RpcContextElement ;
typedef TYPE_4__ RpcConnection ;
typedef int RpcAuthVerifier ;
typedef scalar_t__ RPC_STATUS ;
typedef TYPE_5__ RPC_MESSAGE ;


 int FUNC_0 (char*,int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int * FUNC_4 (int ,int ,int ,int ,int ,unsigned int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_13__**,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ,int *,scalar_t__,unsigned char**,scalar_t__*) ;
 int * FUNC_7 (int *,TYPE_11__*,int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int ,TYPE_10__**) ;
 int FUNC_10 (char*,...) ;
 int VAR_12 ;
 int FUNC_11 (int *,scalar_t__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (TYPE_4__*) ;

__attribute__((used)) static RPC_STATUS FUNC_15(
    RpcConnection *VAR_13, RpcPktBindHdr *VAR_14, RPC_MESSAGE *VAR_15,
    unsigned char *VAR_16, ULONG VAR_17, RpcPktHdr **VAR_18,
    unsigned char **VAR_19, ULONG *VAR_20)
{
  RPC_STATUS VAR_21;
  RpcContextElement *VAR_22;
  unsigned int VAR_23;
  RpcResult *VAR_24;


  for (VAR_23 = 0, VAR_22 = VAR_15->Buffer;
       VAR_23 < VAR_14->num_elements;
       VAR_23++, VAR_22 = (RpcContextElement *)&VAR_22->transfer_syntaxes[VAR_22->num_syntaxes])
  {
      if (((char *)VAR_22 - (char *)VAR_15->Buffer) > VAR_15->BufferLength ||
          ((char *)&VAR_22->transfer_syntaxes[VAR_22->num_syntaxes] - (char *)VAR_15->Buffer) > VAR_15->BufferLength)
      {
          FUNC_0("inconsistent data in packet - packet length %d, num elements %d\n",
              VAR_15->BufferLength, VAR_14->num_elements);
          return VAR_9;
      }
  }

  if (VAR_14->max_tsize < VAR_8 ||
      !FUNC_11(&VAR_13->ActiveInterface.SyntaxGUID, &VAR_21) ||
      VAR_13->server_binding)
  {
    FUNC_10("packet size less than min size, or active interface syntax guid non-null\n");

    return VAR_9;
  }

  VAR_24 = FUNC_2(FUNC_1(), 0,
                      VAR_14->num_elements * sizeof(*VAR_24));
  if (!VAR_24)
    return VAR_11;

  for (VAR_23 = 0, VAR_22 = (RpcContextElement *)VAR_15->Buffer;
       VAR_23 < VAR_14->num_elements;
       VAR_23++, VAR_22 = (RpcContextElement *)&VAR_22->transfer_syntaxes[VAR_22->num_syntaxes])
  {
      RpcServerInterface* VAR_25 = ((void*)0);
      unsigned int VAR_26;

      for (VAR_26 = 0; !VAR_25 && VAR_26 < VAR_22->num_syntaxes; VAR_26++)
      {
          VAR_25 = FUNC_7(((void*)0), &VAR_22->abstract_syntax,
                                      &VAR_22->transfer_syntaxes[VAR_26], VAR_0);
          if (VAR_25)
              break;
      }
      if (VAR_25)
      {
          FUNC_8(VAR_25);
          FUNC_10("accepting bind request on connection %p for %s\n", VAR_13,
                FUNC_12(&VAR_22->abstract_syntax.SyntaxGUID));
          VAR_24[VAR_23].result = VAR_5;
          VAR_24[VAR_23].reason = VAR_3;
          VAR_24[VAR_23].transfer_syntax = VAR_22->transfer_syntaxes[VAR_26];



          VAR_13->ActiveInterface = VAR_22->abstract_syntax;
      }
      else if ((VAR_25 = FUNC_7(((void*)0), &VAR_22->abstract_syntax,
                                            ((void*)0), VAR_0)) != ((void*)0))
      {
          FUNC_8(VAR_25);
          FUNC_10("not accepting bind request on connection %p for %s - no transfer syntaxes supported\n",
                VAR_13, FUNC_12(&VAR_22->abstract_syntax.SyntaxGUID));
          VAR_24[VAR_23].result = VAR_6;
          VAR_24[VAR_23].reason = VAR_4;
          FUNC_13(&VAR_24[VAR_23].transfer_syntax, 0, sizeof(VAR_24[VAR_23].transfer_syntax));
      }
      else
      {
          FUNC_10("not accepting bind request on connection %p for %s - abstract syntax not supported\n",
                VAR_13, FUNC_12(&VAR_22->abstract_syntax.SyntaxGUID));
          VAR_24[VAR_23].result = VAR_6;
          VAR_24[VAR_23].reason = VAR_2;
          FUNC_13(&VAR_24[VAR_23].transfer_syntax, 0, sizeof(VAR_24[VAR_23].transfer_syntax));
      }
  }


  VAR_21 = FUNC_5(&VAR_13->server_binding, VAR_13);
  if (VAR_21 != VAR_10)
  {
      FUNC_3(FUNC_1(), 0, VAR_24);
      return VAR_21;
  }

  VAR_21 = FUNC_9(FUNC_14(VAR_13),
                                         VAR_13->NetworkAddr, VAR_13->Endpoint,
                                         VAR_13->NetworkOptions,
                                         VAR_14->assoc_gid,
                                         &VAR_13->server_binding->Assoc);
  if (VAR_21 != VAR_10)
  {
      FUNC_3(FUNC_1(), 0, VAR_24);
      return VAR_21;
  }

  if (VAR_17)
  {
      VAR_21 = FUNC_6(VAR_13, VAR_12,
                                           (RpcAuthVerifier *)VAR_16,
                                           VAR_17, VAR_19,
                                           VAR_20);
      if (VAR_21 != VAR_10)
      {
          FUNC_3(FUNC_1(), 0, VAR_24);
          return VAR_21;
      }
  }

  *VAR_18 = FUNC_4(VAR_1,
                                            VAR_7,
                                            VAR_7,
                                            VAR_13->server_binding->Assoc->assoc_group_id,
                                            VAR_13->Endpoint, VAR_14->num_elements,
                                            VAR_24);
  FUNC_3(FUNC_1(), 0, VAR_24);

  if (*VAR_18)
      VAR_13->MaxTransmissionSize = VAR_14->max_tsize;
  else
      VAR_21 = VAR_11;

  return VAR_21;
}
