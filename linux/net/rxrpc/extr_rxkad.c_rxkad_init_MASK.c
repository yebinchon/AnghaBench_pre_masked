
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct crypto_sync_skcipher {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 int FUNC_1 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* VAR_2 ;
 struct skcipher_request* VAR_3 ;
 struct skcipher_request* FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct crypto_sync_skcipher *VAR_4;
 struct skcipher_request *VAR_5;



 VAR_4 = FUNC_2("pcbc(fcrypt)", 0, 0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(&VAR_4->base, VAR_1);
 if (!VAR_5)
  goto nomem_tfm;

 VAR_3 = VAR_5;
 VAR_2 = VAR_4;
 return 0;

nomem_tfm:
 FUNC_3(VAR_4);
 return -VAR_0;
}
