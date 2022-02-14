
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int len; } ;
struct decryptor_desc {int frags; scalar_t__ fraglen; scalar_t__ fragno; int req; int iv; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xdr_buf*,int,int,int ,struct decryptor_desc*) ;

int
FUNC_9(struct crypto_sync_skcipher *VAR_2, struct xdr_buf *VAR_3,
      int VAR_4)
{
 int VAR_5;
 struct decryptor_desc VAR_6;
 FUNC_1(VAR_1, VAR_2);


 FUNC_0((VAR_3->len - VAR_4) % FUNC_2(VAR_2) != 0);

 FUNC_6(VAR_1, VAR_2);
 FUNC_5(VAR_1, 0, ((void*)0), ((void*)0));

 FUNC_3(VAR_6.iv, 0, sizeof(VAR_6.iv));
 VAR_6.req = VAR_1;
 VAR_6.fragno = 0;
 VAR_6.fraglen = 0;

 FUNC_4(VAR_6.frags, 4);

 VAR_5 = FUNC_8(VAR_3, VAR_4, VAR_3->len - VAR_4, VAR_0, &VAR_6);
 FUNC_7(VAR_1);
 return VAR_5;
}
