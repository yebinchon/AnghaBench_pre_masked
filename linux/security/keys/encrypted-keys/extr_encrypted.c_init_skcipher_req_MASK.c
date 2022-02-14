
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skcipher_request* FUNC_0 (struct crypto_skcipher*) ;
 struct skcipher_request* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 int VAR_3 ;
 struct crypto_skcipher* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (struct crypto_skcipher*,int const*,unsigned int) ;
 int FUNC_7 (char*,int,...) ;
 struct skcipher_request* FUNC_8 (struct crypto_skcipher*,int ) ;
 int FUNC_9 (struct skcipher_request*,int ,int *,int *) ;

__attribute__((used)) static struct skcipher_request *FUNC_10(const u8 *VAR_4,
        unsigned int VAR_5)
{
 struct skcipher_request *VAR_6;
 struct crypto_skcipher *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_3, 0, VAR_0);
 if (FUNC_2(VAR_7)) {
  FUNC_7("encrypted_key: failed to load %s transform (%ld)\n",
         VAR_3, FUNC_3(VAR_7));
  return FUNC_0(VAR_7);
 }

 VAR_8 = FUNC_6(VAR_7, VAR_4, VAR_5);
 if (VAR_8 < 0) {
  FUNC_7("encrypted_key: failed to setkey (%d)\n", VAR_8);
  FUNC_5(VAR_7);
  return FUNC_1(VAR_8);
 }

 VAR_6 = FUNC_8(VAR_7, VAR_2);
 if (!VAR_6) {
  FUNC_7("encrypted_key: failed to allocate request for %s\n",
         VAR_3);
  FUNC_5(VAR_7);
  return FUNC_1(-VAR_1);
 }

 FUNC_9(VAR_6, 0, ((void*)0), ((void*)0));
 return VAR_6;
}
