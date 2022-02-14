
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
 int FUNC_10 (int*) ;
 int* FUNC_11 (int const*,size_t,int ) ;
 int FUNC_12 (int*,int*,int) ;
 int FUNC_13 (struct scatterlist*,int*,size_t) ;
 struct skcipher_request* FUNC_14 (struct crypto_skcipher*,int ) ;
 int FUNC_15 (struct skcipher_request*) ;
 int FUNC_16 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,size_t,int*) ;

__attribute__((used)) static int FUNC_17(const u8 *VAR_4, size_t VAR_5,
      const u8 *VAR_6, size_t VAR_7,
      size_t VAR_8, const u8 *VAR_9[],
      size_t VAR_10[], u8 *VAR_11)
{
 u8 VAR_12[VAR_0];
 struct crypto_shash *VAR_13;
 struct crypto_skcipher *VAR_14;
 struct skcipher_request *VAR_15;
 int VAR_16;
 struct scatterlist VAR_17[1], VAR_18[1];
 u8 *VAR_19;

 VAR_5 /= 2;

 VAR_9[VAR_8] = VAR_6;
 VAR_10[VAR_8] = VAR_7;
 VAR_8++;



 VAR_13 = FUNC_3("cmac(aes)", 0, 0);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_16 = FUNC_7(VAR_13, VAR_4, VAR_5);
 if (!VAR_16)
  VAR_16 = FUNC_2(VAR_13, VAR_8, VAR_9, VAR_10, VAR_12);
 FUNC_5(VAR_13);
 if (VAR_16)
  return VAR_16;




 VAR_19 = FUNC_11(VAR_6, VAR_7, VAR_3);
 if (!VAR_19)
  return -VAR_2;


 FUNC_12(VAR_11, VAR_12, VAR_0);




 VAR_12[8] &= 0x7f;
 VAR_12[12] &= 0x7f;



 VAR_14 = FUNC_4("ctr(aes)", 0, VAR_1);
 if (FUNC_0(VAR_14)) {
  FUNC_10(VAR_19);
  return FUNC_1(VAR_14);
 }

 VAR_16 = FUNC_9(VAR_14, VAR_4 + VAR_5, VAR_5);
 if (VAR_16)
  goto fail;

 VAR_15 = FUNC_14(VAR_14, VAR_3);
 if (!VAR_15) {
  VAR_16 = -VAR_2;
  goto fail;
 }

 FUNC_13(VAR_17, VAR_19, VAR_7);
 FUNC_13(VAR_18, VAR_11 + VAR_0, VAR_7);
 FUNC_16(VAR_15, VAR_17, VAR_18, VAR_7, VAR_12);
 VAR_16 = FUNC_8(VAR_15);
 FUNC_15(VAR_15);
fail:
 FUNC_10(VAR_19);
 FUNC_6(VAR_14);
 return VAR_16;
}
