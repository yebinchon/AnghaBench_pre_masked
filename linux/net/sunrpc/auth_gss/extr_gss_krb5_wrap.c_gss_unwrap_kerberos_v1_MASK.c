
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u32 ;
struct xdr_netobj {int len; char* data; } ;
struct xdr_buf {scalar_t__ len; TYPE_2__* head; } ;
struct krb5_ctx {scalar_t__ enctype; unsigned char* cksum; scalar_t__ endtime; TYPE_1__* gk5e; struct crypto_sync_skcipher* enc; scalar_t__ initiate; int mech_used; } ;
struct crypto_sync_skcipher {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int cksumdata ;
struct TYPE_4__ {void* iov_base; int iov_len; } ;
struct TYPE_3__ {int conflen; int signalg; int sealalg; int cksumlength; scalar_t__ keyed_cksum; int encrypt_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct crypto_sync_skcipher* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 int FUNC_3 (struct crypto_sync_skcipher*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int*,unsigned char**,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct crypto_sync_skcipher*,struct xdr_buf*,int) ;
 scalar_t__ FUNC_8 (struct xdr_buf*,int) ;
 scalar_t__ FUNC_9 (struct krb5_ctx*,unsigned char*,unsigned char*,int*,scalar_t__*) ;
 int FUNC_10 (struct krb5_ctx*,struct crypto_sync_skcipher*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct krb5_ctx*,unsigned char*,int,struct xdr_buf*,int,unsigned char*,int ,struct xdr_netobj*) ;
 scalar_t__ FUNC_12 (char*,unsigned char*,int) ;
 int FUNC_13 (void*,void*,int) ;

__attribute__((used)) static u32
FUNC_14(struct krb5_ctx *VAR_10, int VAR_11, struct xdr_buf *VAR_12)
{
 int VAR_13;
 int VAR_14;
 char VAR_15[VAR_1];
 struct xdr_netobj VAR_16 = {.len = sizeof(VAR_15),
         .data = VAR_15};
 s32 VAR_17;
 int VAR_18;
 s32 VAR_19;
 unsigned char *VAR_20;
 int VAR_21;
 void *VAR_22, *VAR_23;
 int VAR_24;
 int VAR_25;
 u32 VAR_26 = VAR_10->gk5e->conflen;
 int VAR_27;
 u8 *VAR_28;

 FUNC_4("RPC:       gss_unwrap_kerberos\n");

 VAR_20 = (u8 *)VAR_12->head[0].iov_base + VAR_11;
 if (FUNC_5(&VAR_10->mech_used, &VAR_21, &VAR_20,
     VAR_12->len - VAR_11))
  return VAR_6;

 if ((VAR_20[0] != ((VAR_8 >> 8) & 0xff)) ||
     (VAR_20[1] != (VAR_8 & 0xff)))
  return VAR_6;





 VAR_13 = VAR_20[2] + (VAR_20[3] << 8);
 if (VAR_13 != VAR_10->gk5e->signalg)
  return VAR_6;

 VAR_14 = VAR_20[4] + (VAR_20[5] << 8);
 if (VAR_14 != VAR_10->gk5e->sealalg)
  return VAR_6;

 if ((VAR_20[6] != 0xff) || (VAR_20[7] != 0xff))
  return VAR_6;





 VAR_27 = VAR_20 + (VAR_2 + VAR_10->gk5e->cksumlength) -
     (unsigned char *)VAR_12->head[0].iov_base;




 if (FUNC_9(VAR_10, VAR_20 + VAR_2,
        VAR_20 + 8, &VAR_18, &VAR_19))
  return VAR_3;

 if ((VAR_10->initiate && VAR_18 != 0xff) ||
     (!VAR_10->initiate && VAR_18 != 0))
  return VAR_3;

 if (VAR_10->enctype == VAR_0) {
  struct crypto_sync_skcipher *VAR_29;
  int VAR_30;

  VAR_29 = FUNC_1(VAR_10->gk5e->encrypt_name,
          0, 0);
  if (FUNC_0(VAR_29))
   return VAR_7;

  FUNC_10(VAR_10, VAR_29, VAR_19);

  VAR_30 = FUNC_7(VAR_29, VAR_12, VAR_27);
  FUNC_2(VAR_29);
  if (VAR_30)
   return VAR_6;
 } else {
  if (FUNC_7(VAR_10->enc, VAR_12, VAR_27))
   return VAR_6;
 }

 if (VAR_10->gk5e->keyed_cksum)
  VAR_28 = VAR_10->cksum;
 else
  VAR_28 = ((void*)0);

 if (FUNC_11(VAR_10, VAR_20, 8, VAR_12, VAR_27,
     VAR_28, VAR_9, &VAR_16))
  return VAR_7;

 if (FUNC_12(VAR_16.data, VAR_20 + VAR_2,
      VAR_10->gk5e->cksumlength))
  return VAR_3;



 VAR_17 = FUNC_6();

 if (VAR_17 > VAR_10->endtime)
  return VAR_5;






 VAR_25 = FUNC_3(VAR_10->enc);
 VAR_22 = VAR_20 + (VAR_2 + VAR_10->gk5e->cksumlength) +
     VAR_26;
 VAR_23 = VAR_12->head[0].iov_base + VAR_11;
 VAR_24 = (VAR_12->head[0].iov_base + VAR_12->head[0].iov_len) - VAR_22;
 FUNC_13(VAR_23, VAR_22, VAR_24);
 VAR_12->head[0].iov_len -= (VAR_22 - VAR_23);
 VAR_12->len -= (VAR_22 - VAR_23);

 if (FUNC_8(VAR_12, VAR_25))
  return VAR_6;

 return VAR_4;
}
