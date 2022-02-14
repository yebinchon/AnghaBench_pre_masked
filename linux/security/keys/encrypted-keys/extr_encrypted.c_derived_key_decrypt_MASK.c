
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct encrypted_key_payload {int decrypted_datalen; int iv; int * decrypted_data; int * encrypted_data; } ;
struct crypto_skcipher {int dummy; } ;
typedef int iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*) ;
 int VAR_3 ;
 int FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct encrypted_key_payload*) ;
 int FUNC_6 (struct encrypted_key_payload*,unsigned int) ;
 struct skcipher_request* FUNC_7 (int const*,unsigned int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int ,int) ;
 unsigned int FUNC_11 (int,int ) ;
 int FUNC_12 (struct scatterlist*,int) ;
 int FUNC_13 (struct scatterlist*,int *,int) ;
 int FUNC_14 (struct skcipher_request*) ;
 int FUNC_15 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_16(struct encrypted_key_payload *VAR_4,
          const u8 *VAR_5,
          unsigned int VAR_6)
{
 struct scatterlist VAR_7[1];
 struct scatterlist VAR_8[2];
 struct crypto_skcipher *VAR_9;
 struct skcipher_request *VAR_10;
 unsigned int VAR_11;
 u8 VAR_12[VAR_0];
 u8 *VAR_13;
 int VAR_14;


 VAR_13 = FUNC_9(VAR_0, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_11 = FUNC_11(VAR_4->decrypted_datalen, VAR_3);
 VAR_10 = FUNC_7(VAR_5, VAR_6);
 VAR_14 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10))
  goto out;
 FUNC_6(VAR_4, VAR_11);

 FUNC_12(VAR_7, 1);
 FUNC_12(VAR_8, 2);
 FUNC_13(VAR_7, VAR_4->encrypted_data, VAR_11);
 FUNC_13(&VAR_8[0], VAR_4->decrypted_data,
     VAR_4->decrypted_datalen);
 FUNC_13(&VAR_8[1], VAR_13, VAR_0);

 FUNC_10(VAR_12, VAR_4->iv, sizeof(VAR_12));
 FUNC_15(VAR_10, VAR_7, VAR_8, VAR_11, VAR_12);
 VAR_14 = FUNC_3(VAR_10);
 VAR_9 = FUNC_4(VAR_10);
 FUNC_14(VAR_10);
 FUNC_2(VAR_9);
 if (VAR_14 < 0)
  goto out;
 FUNC_5(VAR_4);
out:
 FUNC_8(VAR_13);
 return VAR_14;
}
