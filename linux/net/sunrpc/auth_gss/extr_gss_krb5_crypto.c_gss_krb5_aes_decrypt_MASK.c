
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {int len; int * data; } ;
struct xdr_buf {scalar_t__ len; } ;
struct krb5_ctx {TYPE_1__* gk5e; int * initiator_integ; struct crypto_sync_skcipher* initiator_enc_aux; struct crypto_sync_skcipher* initiator_enc; int * acceptor_integ; struct crypto_sync_skcipher* acceptor_enc_aux; struct crypto_sync_skcipher* acceptor_enc; scalar_t__ initiate; } ;
struct decryptor_desc {int iv; int frags; int req; scalar_t__ fraglen; scalar_t__ fragno; } ;
struct crypto_sync_skcipher {int dummy; } ;
typedef int our_hmac ;
struct TYPE_2__ {scalar_t__ cksumlength; scalar_t__ conflen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,struct crypto_sync_skcipher*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct crypto_sync_skcipher*,struct xdr_buf*,int,int ,int *,int ) ;
 scalar_t__ FUNC_4 (struct krb5_ctx*,int *,int ,struct xdr_buf*,int ,int *,unsigned int,struct xdr_netobj*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct xdr_buf*,int,int *,int) ;
 int VAR_7 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,int *,int *) ;
 int FUNC_9 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct xdr_buf*,struct xdr_buf*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (struct xdr_buf*,int ,int,int ,struct decryptor_desc*) ;

u32
FUNC_13(struct krb5_ctx *VAR_8, u32 VAR_9, struct xdr_buf *VAR_10,
       u32 *VAR_11, u32 *VAR_12)
{
 struct xdr_buf VAR_13;
 u32 VAR_14 = 0;
 u8 *VAR_15;
 struct crypto_sync_skcipher *VAR_16, *VAR_17;
 struct xdr_netobj VAR_18;
 u8 VAR_19[VAR_0];
 u8 VAR_20[VAR_0];
 int VAR_21, VAR_22, VAR_23;
 struct decryptor_desc VAR_24;
 unsigned int VAR_25;

 if (VAR_8->initiate) {
  VAR_16 = VAR_8->acceptor_enc;
  VAR_17 = VAR_8->acceptor_enc_aux;
  VAR_15 = VAR_8->acceptor_integ;
  VAR_25 = VAR_4;
 } else {
  VAR_16 = VAR_8->initiator_enc;
  VAR_17 = VAR_8->initiator_enc_aux;
  VAR_15 = VAR_8->initiator_integ;
  VAR_25 = VAR_5;
 }
 VAR_22 = FUNC_2(VAR_16);



 FUNC_11(VAR_10, &VAR_13, VAR_9 + VAR_1,
        (VAR_10->len - VAR_9 - VAR_1 -
         VAR_8->gk5e->cksumlength));

 VAR_21 = (VAR_13.len + VAR_22 - 1) / VAR_22;

 VAR_23 = 0;
 if (VAR_21 > 2)
  VAR_23 = (VAR_21 - 2) * VAR_22;

 FUNC_5(VAR_24.iv, 0, sizeof(VAR_24.iv));

 if (VAR_23) {
  FUNC_0(VAR_7, VAR_17);

  VAR_24.fragno = 0;
  VAR_24.fraglen = 0;
  VAR_24.req = VAR_7;

  FUNC_9(VAR_7, VAR_17);
  FUNC_8(VAR_7, 0, ((void*)0), ((void*)0));

  FUNC_7(VAR_24.frags, 4);

  VAR_14 = FUNC_12(&VAR_13, 0, VAR_23, VAR_6, &VAR_24);
  FUNC_10(VAR_7);
  if (VAR_14)
   goto out_err;
 }


 VAR_14 = FUNC_3(VAR_16, &VAR_13, VAR_23, VAR_24.iv, ((void*)0), 0);
 if (VAR_14)
  goto out_err;



 VAR_18.len = sizeof(VAR_19);
 VAR_18.data = VAR_19;

 VAR_14 = FUNC_4(VAR_8, ((void*)0), 0, &VAR_13, 0,
          VAR_15, VAR_25, &VAR_18);
 if (VAR_14)
  goto out_err;


 VAR_14 = FUNC_6(VAR_10, VAR_10->len - VAR_8->gk5e->cksumlength,
          VAR_20, VAR_8->gk5e->cksumlength);
 if (VAR_14)
  goto out_err;

 if (FUNC_1(VAR_20, VAR_19, VAR_8->gk5e->cksumlength) != 0) {
  VAR_14 = VAR_2;
  goto out_err;
 }
 *VAR_11 = VAR_8->gk5e->conflen;
 *VAR_12 = VAR_8->gk5e->cksumlength;
out_err:
 if (VAR_14 && VAR_14 != VAR_2)
  VAR_14 = VAR_3;
 return VAR_14;
}
