
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ SHA256_CTX ;
typedef int BYTE ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int* VAR_0 ;

void FUNC_6(SHA256_CTX *VAR_1, const BYTE VAR_2[])
{
 WORD VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15[64];

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < 16; ++VAR_11, VAR_12 += 4)
  VAR_15[VAR_11] = (VAR_2[VAR_12] << 24) | (VAR_2[VAR_12 + 1] << 16) | (VAR_2[VAR_12 + 2] << 8) | (VAR_2[VAR_12 + 3]);
 for ( ; VAR_11 < 64; ++VAR_11)
  VAR_15[VAR_11] = FUNC_5(VAR_15[VAR_11 - 2]) + VAR_15[VAR_11 - 7] + FUNC_4(VAR_15[VAR_11 - 15]) + VAR_15[VAR_11 - 16];

 VAR_3 = VAR_1->state[0];
 VAR_4 = VAR_1->state[1];
 VAR_5 = VAR_1->state[2];
 VAR_6 = VAR_1->state[3];
 VAR_7 = VAR_1->state[4];
 VAR_8 = VAR_1->state[5];
 VAR_9 = VAR_1->state[6];
 VAR_10 = VAR_1->state[7];

 for (VAR_11 = 0; VAR_11 < 64; ++VAR_11) {
  VAR_13 = VAR_10 + FUNC_2(VAR_7) + FUNC_0(VAR_7,VAR_8,VAR_9) + VAR_0[VAR_11] + VAR_15[VAR_11];
  VAR_14 = FUNC_1(VAR_3) + FUNC_3(VAR_3,VAR_4,VAR_5);
  VAR_10 = VAR_9;
  VAR_9 = VAR_8;
  VAR_8 = VAR_7;
  VAR_7 = VAR_6 + VAR_13;
  VAR_6 = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = VAR_3;
  VAR_3 = VAR_13 + VAR_14;
 }

 VAR_1->state[0] += VAR_3;
 VAR_1->state[1] += VAR_4;
 VAR_1->state[2] += VAR_5;
 VAR_1->state[3] += VAR_6;
 VAR_1->state[4] += VAR_7;
 VAR_1->state[5] += VAR_8;
 VAR_1->state[6] += VAR_9;
 VAR_1->state[7] += VAR_10;
}
