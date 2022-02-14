
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 scalar_t__ FUNC_5 (struct crypto_shash*) ;
 int FUNC_6 (struct shash_desc*,char*,int ,int *) ;
 int FUNC_7 (struct crypto_shash*,int *,int ) ;
 int FUNC_8 (struct shash_desc*) ;
 struct shash_desc* FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_10(u8 *VAR_3, u8 VAR_4, char *VAR_5, u8 VAR_6, u8 *VAR_7)
{
 struct crypto_shash *VAR_8;
 struct shash_desc *VAR_9;
 int VAR_10;

 if (!VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_3("hmac(sha256)", 0, 0);
 if (FUNC_1(VAR_8)) {
  FUNC_0("crypto_alloc_ahash failed: err %ld", FUNC_2(VAR_8));
  return FUNC_2(VAR_8);
 }

 VAR_10 = FUNC_7(VAR_8, VAR_3, VAR_4);
 if (VAR_10) {
  FUNC_0("crypto_ahash_setkey failed: err %d", VAR_10);
  goto failed;
 }

 VAR_9 = FUNC_9(sizeof(*VAR_9) + FUNC_5(VAR_8),
   VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto failed;
 }

 VAR_9->tfm = VAR_8;

 VAR_10 = FUNC_6(VAR_9, VAR_5, VAR_6, VAR_7);

 FUNC_8(VAR_9);

failed:
 FUNC_4(VAR_8);
 return VAR_10;
}
