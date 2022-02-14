
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct encrypted_key_payload {unsigned int decrypted_datalen; int iv; int encrypted_data; int decrypted_data; } ;
struct crypto_skcipher {int dummy; } ;
typedef int iv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct encrypted_key_payload*) ;
 int FUNC_7 (struct encrypted_key_payload*,unsigned int) ;
 struct skcipher_request* FUNC_8 (int const*,unsigned int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (char*,int) ;
 unsigned int FUNC_11 (unsigned int,int ) ;
 int FUNC_12 (struct scatterlist*,int) ;
 int FUNC_13 (struct scatterlist*,int ,unsigned int) ;
 int FUNC_14 (struct scatterlist*,int ,int,int ) ;
 int FUNC_15 (struct skcipher_request*) ;
 int FUNC_16 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_17(struct encrypted_key_payload *VAR_2,
          const u8 *VAR_3,
          unsigned int VAR_4)
{
 struct scatterlist VAR_5[2];
 struct scatterlist VAR_6[1];
 struct crypto_skcipher *VAR_7;
 struct skcipher_request *VAR_8;
 unsigned int VAR_9;
 u8 VAR_10[VAR_0];
 int VAR_11;

 VAR_9 = FUNC_11(VAR_2->decrypted_datalen, VAR_1);

 VAR_8 = FUNC_8(VAR_3, VAR_4);
 VAR_11 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_8))
  goto out;
 FUNC_6(VAR_2);

 FUNC_12(VAR_5, 2);
 FUNC_13(&VAR_5[0], VAR_2->decrypted_data,
     VAR_2->decrypted_datalen);
 FUNC_14(&VAR_5[1], FUNC_2(0), VAR_0, 0);

 FUNC_12(VAR_6, 1);
 FUNC_13(VAR_6, VAR_2->encrypted_data, VAR_9);

 FUNC_9(VAR_10, VAR_2->iv, sizeof(VAR_10));
 FUNC_16(VAR_8, VAR_5, VAR_6, VAR_9, VAR_10);
 VAR_11 = FUNC_4(VAR_8);
 VAR_7 = FUNC_5(VAR_8);
 FUNC_15(VAR_8);
 FUNC_3(VAR_7);
 if (VAR_11 < 0)
  FUNC_10("encrypted_key: failed to encrypt (%d)\n", VAR_11);
 else
  FUNC_7(VAR_2, VAR_9);
out:
 return VAR_11;
}
