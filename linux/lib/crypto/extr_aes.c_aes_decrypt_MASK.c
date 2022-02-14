
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_aes_ctx {int* key_dec; int key_length; } ;


 int* VAR_0 ;
 int FUNC_0 (int const*) ;
 int const FUNC_1 (int const) ;
 int const FUNC_2 (int*,int) ;
 int FUNC_3 (int const,int *) ;

void FUNC_4(const struct crypto_aes_ctx *VAR_1, u8 *VAR_2, const u8 *VAR_3)
{
 const u32 *VAR_4 = VAR_1->key_dec + 4;
 int VAR_5 = 6 + VAR_1->key_length / 4;
 u32 VAR_6[4], VAR_7[4];
 int VAR_8;

 VAR_6[0] = VAR_1->key_dec[0] ^ FUNC_0(VAR_3);
 VAR_6[1] = VAR_1->key_dec[1] ^ FUNC_0(VAR_3 + 4);
 VAR_6[2] = VAR_1->key_dec[2] ^ FUNC_0(VAR_3 + 8);
 VAR_6[3] = VAR_1->key_dec[3] ^ FUNC_0(VAR_3 + 12);







 VAR_6[0] ^= VAR_0[ 0] ^ VAR_0[ 64] ^ VAR_0[129] ^ VAR_0[200];
 VAR_6[1] ^= VAR_0[16] ^ VAR_0[ 83] ^ VAR_0[150] ^ VAR_0[212];
 VAR_6[2] ^= VAR_0[32] ^ VAR_0[ 96] ^ VAR_0[160] ^ VAR_0[236];
 VAR_6[3] ^= VAR_0[48] ^ VAR_0[112] ^ VAR_0[187] ^ VAR_0[247];

 for (VAR_8 = 0;; VAR_8 += 2, VAR_4 += 8) {
  VAR_7[0] = FUNC_1(FUNC_2(VAR_6, 0)) ^ VAR_4[0];
  VAR_7[1] = FUNC_1(FUNC_2(VAR_6, 1)) ^ VAR_4[1];
  VAR_7[2] = FUNC_1(FUNC_2(VAR_6, 2)) ^ VAR_4[2];
  VAR_7[3] = FUNC_1(FUNC_2(VAR_6, 3)) ^ VAR_4[3];

  if (VAR_8 == VAR_5 - 2)
   break;

  VAR_6[0] = FUNC_1(FUNC_2(VAR_7, 0)) ^ VAR_4[4];
  VAR_6[1] = FUNC_1(FUNC_2(VAR_7, 1)) ^ VAR_4[5];
  VAR_6[2] = FUNC_1(FUNC_2(VAR_7, 2)) ^ VAR_4[6];
  VAR_6[3] = FUNC_1(FUNC_2(VAR_7, 3)) ^ VAR_4[7];
 }

 FUNC_3(FUNC_2(VAR_7, 0) ^ VAR_4[4], VAR_2);
 FUNC_3(FUNC_2(VAR_7, 1) ^ VAR_4[5], VAR_2 + 4);
 FUNC_3(FUNC_2(VAR_7, 2) ^ VAR_4[6], VAR_2 + 8);
 FUNC_3(FUNC_2(VAR_7, 3) ^ VAR_4[7], VAR_2 + 12);
}
