
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct seg6_hmac_info {int slen; int secret; int alg_id; } ;
struct seg6_hmac_algo {int shashs; int tfms; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct seg6_hmac_algo* FUNC_0 (int ) ;
 int FUNC_1 (struct shash_desc*,char const*,int ,int *) ;
 int FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 (struct crypto_shash*,int ,int ) ;
 int FUNC_4 (char*,int,...) ;
 void** FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct seg6_hmac_info *VAR_2, const char *VAR_3, u8 VAR_4,
       u8 *VAR_5, int VAR_6)
{
 struct seg6_hmac_algo *VAR_7;
 struct crypto_shash *VAR_8;
 struct shash_desc *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_0(VAR_2->alg_id);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = *FUNC_5(VAR_7->tfms);

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 > VAR_6) {
  FUNC_4("sr-ipv6: __do_hmac: digest size too big (%d / %d)\n",
    VAR_11, VAR_6);
  return -VAR_1;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_2->secret, VAR_2->slen);
 if (VAR_10 < 0) {
  FUNC_4("sr-ipv6: crypto_shash_setkey failed: err %d\n", VAR_10);
  goto failed;
 }

 VAR_9 = *FUNC_5(VAR_7->shashs);
 VAR_9->tfm = VAR_8;

 VAR_10 = FUNC_1(VAR_9, VAR_3, VAR_4, VAR_5);
 if (VAR_10 < 0) {
  FUNC_4("sr-ipv6: crypto_shash_digest failed: err %d\n", VAR_10);
  goto failed;
 }

 return VAR_11;

failed:
 return VAR_10;
}
