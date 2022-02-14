
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_skcipher* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct crypto_skcipher*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct crypto_skcipher *VAR_4;

 VAR_4 = FUNC_2(VAR_1, 0, VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_6("encrypted_key: failed to alloc_cipher (%ld)\n",
         FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }
 VAR_3 = FUNC_5(VAR_4);
 VAR_2 = FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 return 0;
}
