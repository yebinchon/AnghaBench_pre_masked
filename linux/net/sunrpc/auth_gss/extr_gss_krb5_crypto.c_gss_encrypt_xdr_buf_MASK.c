
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int len; } ;
struct page {int dummy; } ;
struct encryptor_desc {int pos; int outfrags; int infrags; scalar_t__ fraglen; scalar_t__ fragno; struct page** pages; struct xdr_buf* outbuf; int req; int iv; } ;
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
 int FUNC_8 (struct xdr_buf*,int,int,int ,struct encryptor_desc*) ;

int
FUNC_9(struct crypto_sync_skcipher *VAR_2, struct xdr_buf *VAR_3,
      int VAR_4, struct page **VAR_5)
{
 int VAR_6;
 struct encryptor_desc VAR_7;
 FUNC_1(VAR_1, VAR_2);

 FUNC_0((VAR_3->len - VAR_4) % FUNC_2(VAR_2) != 0);

 FUNC_6(VAR_1, VAR_2);
 FUNC_5(VAR_1, 0, ((void*)0), ((void*)0));

 FUNC_3(VAR_7.iv, 0, sizeof(VAR_7.iv));
 VAR_7.req = VAR_1;
 VAR_7.pos = VAR_4;
 VAR_7.outbuf = VAR_3;
 VAR_7.pages = VAR_5;
 VAR_7.fragno = 0;
 VAR_7.fraglen = 0;

 FUNC_4(VAR_7.infrags, 4);
 FUNC_4(VAR_7.outfrags, 4);

 VAR_6 = FUNC_8(VAR_3, VAR_4, VAR_3->len - VAR_4, VAR_0, &VAR_7);
 FUNC_7(VAR_1);
 return VAR_6;
}
