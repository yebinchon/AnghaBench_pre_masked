
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
typedef struct crypto_skcipher crypto_shash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,size_t,int const**,size_t*,int*) ;
 struct crypto_skcipher* FUNC_3 (char*,int ,int ) ;
 struct crypto_skcipher* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (struct crypto_skcipher*) ;
 int FUNC_7 (struct crypto_skcipher*,int const*,size_t) ;
 int FUNC_8 (struct skcipher_request*) ;
 int FUNC_9 (struct crypto_skcipher*,int const*,size_t) ;
 scalar_t__ FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int*,int const*,int) ;
 int FUNC_12 (struct scatterlist*,int const*,size_t) ;
 struct skcipher_request* FUNC_13 (struct crypto_skcipher*,int ) ;
 int FUNC_14 (struct skcipher_request*) ;
 int FUNC_15 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,size_t,int*) ;

__attribute__((used)) static int FUNC_16(const u8 *VAR_5, size_t VAR_6,
      const u8 *VAR_7, size_t VAR_8,
      size_t VAR_9, const u8 *VAR_10[], size_t VAR_11[],
      u8 *VAR_12)
{
 struct crypto_shash *VAR_13;
 struct crypto_skcipher *VAR_14;
 struct skcipher_request *VAR_15;
 struct scatterlist VAR_16[1], VAR_17[1];
 size_t VAR_18;
 int VAR_19;
 u8 VAR_20[VAR_0], VAR_21[VAR_0];
 u8 VAR_22[VAR_0];

 VAR_18 = VAR_8 - VAR_0;
 VAR_6 /= 2;
 VAR_10[VAR_9] = VAR_12;
 VAR_11[VAR_9] = VAR_18;
 VAR_9++;

 FUNC_11(VAR_21, VAR_7, VAR_0);
 FUNC_11(VAR_20, VAR_7, VAR_0);




 VAR_21[8] &= 0x7f;
 VAR_21[12] &= 0x7f;



 VAR_14 = FUNC_4("ctr(aes)", 0, VAR_1);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_19 = FUNC_9(VAR_14, VAR_5 + VAR_6, VAR_6);
 if (VAR_19) {
  FUNC_6(VAR_14);
  return VAR_19;
 }

 VAR_15 = FUNC_13(VAR_14, VAR_4);
 if (!VAR_15) {
  FUNC_6(VAR_14);
  return -VAR_3;
 }

 FUNC_12(VAR_16, VAR_7 + VAR_0, VAR_18);
 FUNC_12(VAR_17, VAR_12, VAR_18);
 FUNC_15(VAR_15, VAR_16, VAR_17, VAR_18, VAR_21);
 VAR_19 = FUNC_8(VAR_15);
 FUNC_14(VAR_15);
 FUNC_6(VAR_14);
 if (VAR_19)
  return VAR_19;



 VAR_13 = FUNC_3("cmac(aes)", 0, 0);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_19 = FUNC_7(VAR_13, VAR_5, VAR_6);
 if (!VAR_19)
  VAR_19 = FUNC_2(VAR_13, VAR_9, VAR_10, VAR_11, VAR_22);
 FUNC_5(VAR_13);
 if (VAR_19)
  return VAR_19;
 if (FUNC_10(VAR_22, VAR_20, VAR_0) != 0)
  return -VAR_2;
 return 0;
}
