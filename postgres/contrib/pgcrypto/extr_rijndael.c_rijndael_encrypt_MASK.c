
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u4byte ;
struct TYPE_3__ {int k_len; int* e_key; } ;
typedef TYPE_1__ rijndael_ctx ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int const) ;

void
FUNC_3(rijndael_ctx *VAR_0, const u4byte *VAR_1, u4byte *VAR_2)
{
 u4byte VAR_3 = VAR_0->k_len;
 u4byte *VAR_4 = VAR_0->e_key;
 u4byte VAR_5[4],
    VAR_6[4],
      *VAR_7;

 VAR_5[0] = FUNC_2(VAR_1[0]) ^ VAR_4[0];
 VAR_5[1] = FUNC_2(VAR_1[1]) ^ VAR_4[1];
 VAR_5[2] = FUNC_2(VAR_1[2]) ^ VAR_4[2];
 VAR_5[3] = FUNC_2(VAR_1[3]) ^ VAR_4[3];

 VAR_7 = VAR_4 + 4;

 if (VAR_3 > 6)
 {
  FUNC_1(VAR_6, VAR_5, VAR_7);
  FUNC_1(VAR_5, VAR_6, VAR_7);
 }

 if (VAR_3 > 4)
 {
  FUNC_1(VAR_6, VAR_5, VAR_7);
  FUNC_1(VAR_5, VAR_6, VAR_7);
 }

 FUNC_1(VAR_6, VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_5, VAR_7);
 FUNC_0(VAR_5, VAR_6, VAR_7);

 VAR_2[0] = FUNC_2(VAR_5[0]);
 VAR_2[1] = FUNC_2(VAR_5[1]);
 VAR_2[2] = FUNC_2(VAR_5[2]);
 VAR_2[3] = FUNC_2(VAR_5[3]);
}
