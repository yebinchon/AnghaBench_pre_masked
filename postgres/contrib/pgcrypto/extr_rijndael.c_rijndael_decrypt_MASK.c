
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u4byte ;
struct TYPE_3__ {int k_len; int* e_key; int* d_key; } ;
typedef TYPE_1__ rijndael_ctx ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int const) ;

void
FUNC_3(rijndael_ctx *VAR_0, const u4byte *VAR_1, u4byte *VAR_2)
{
 u4byte VAR_3[4],
    VAR_4[4],
      *VAR_5;
 u4byte VAR_6 = VAR_0->k_len;
 u4byte *VAR_7 = VAR_0->e_key;
 u4byte *VAR_8 = VAR_0->d_key;

 VAR_3[0] = FUNC_2(VAR_1[0]) ^ VAR_7[4 * VAR_6 + 24];
 VAR_3[1] = FUNC_2(VAR_1[1]) ^ VAR_7[4 * VAR_6 + 25];
 VAR_3[2] = FUNC_2(VAR_1[2]) ^ VAR_7[4 * VAR_6 + 26];
 VAR_3[3] = FUNC_2(VAR_1[3]) ^ VAR_7[4 * VAR_6 + 27];

 VAR_5 = VAR_8 + 4 * (VAR_6 + 5);

 if (VAR_6 > 6)
 {
  FUNC_1(VAR_4, VAR_3, VAR_5);
  FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 if (VAR_6 > 4)
 {
  FUNC_1(VAR_4, VAR_3, VAR_5);
  FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 FUNC_1(VAR_4, VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_4, VAR_5);

 VAR_2[0] = FUNC_2(VAR_3[0]);
 VAR_2[1] = FUNC_2(VAR_3[1]);
 VAR_2[2] = FUNC_2(VAR_3[2]);
 VAR_2[3] = FUNC_2(VAR_3[3]);
}
