
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* W; unsigned int* H; } ;
typedef TYPE_1__ R_SHA_CTX ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(R_SHA_CTX *VAR_0) {
 int VAR_1;
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 for (VAR_1 = 16; VAR_1 <= 79; VAR_1++) {
  VAR_0->W[VAR_1] =
   FUNC_0 (VAR_0->W[VAR_1 - 3] ^ VAR_0->W[VAR_1 - 8] ^ VAR_0->W[VAR_1 - 14] ^ VAR_0->W[VAR_1 - 16], 1);
 }

 VAR_2 = VAR_0->H[0];
 VAR_3 = VAR_0->H[1];
 VAR_4 = VAR_0->H[2];
 VAR_5 = VAR_0->H[3];
 VAR_6 = VAR_0->H[4];

 for (VAR_1 = 0; VAR_1 <= 19; VAR_1++) {
  VAR_7 = FUNC_0 (VAR_2, 5) + (((VAR_4 ^ VAR_5) & VAR_3) ^ VAR_5) + VAR_6 + VAR_0->W[VAR_1] + 0x5a827999;
  VAR_6 = VAR_5; VAR_5 = VAR_4; VAR_4 = FUNC_0 (VAR_3, 30); VAR_3 = VAR_2; VAR_2 = VAR_7;
 }
 for (VAR_1 = 20; VAR_1 <= 39; VAR_1++) {
  VAR_7 = FUNC_0 (VAR_2, 5) + (VAR_3 ^ VAR_4 ^ VAR_5) + VAR_6 + VAR_0->W[VAR_1] + 0x6ed9eba1;
  VAR_6 = VAR_5; VAR_5 = VAR_4; VAR_4 = FUNC_0 (VAR_3, 30); VAR_3 = VAR_2; VAR_2 = VAR_7;
 }
 for (VAR_1 = 40; VAR_1 <= 59; VAR_1++) {
  VAR_7 = FUNC_0 (VAR_2, 5) + ((VAR_3 & VAR_4) | (VAR_5 & (VAR_3 | VAR_4))) + VAR_6 + VAR_0->W[VAR_1] + 0x8f1bbcdc;
  VAR_6 = VAR_5; VAR_5 = VAR_4; VAR_4 = FUNC_0 (VAR_3, 30); VAR_3 = VAR_2; VAR_2 = VAR_7;
 }
 for (VAR_1 = 60; VAR_1 <= 79; VAR_1++) {
  VAR_7 = FUNC_0 (VAR_2, 5) + (VAR_3 ^ VAR_4 ^ VAR_5) + VAR_6 + VAR_0->W[VAR_1] + 0xca62c1d6;
  VAR_6 = VAR_5; VAR_5 = VAR_4; VAR_4 = FUNC_0 (VAR_3, 30); VAR_3 = VAR_2; VAR_2 = VAR_7;
 }

 VAR_0->H[0] += VAR_2;
 VAR_0->H[1] += VAR_3;
 VAR_0->H[2] += VAR_4;
 VAR_0->H[3] += VAR_5;
 VAR_0->H[4] += VAR_6;
}
