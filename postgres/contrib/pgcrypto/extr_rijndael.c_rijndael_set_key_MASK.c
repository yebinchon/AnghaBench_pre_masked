
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u4byte ;
struct TYPE_4__ {int* e_key; int* d_key; int decrypt; int k_len; } ;
typedef TYPE_1__ rijndael_ctx ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;

rijndael_ctx *
FUNC_6(rijndael_ctx *VAR_1, const u4byte *VAR_2, const u4byte VAR_3,
     int VAR_4)
{
 u4byte VAR_5,
    VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;
 u4byte *VAR_10 = VAR_1->e_key;
 u4byte *VAR_11 = VAR_1->d_key;

 VAR_1->decrypt = !VAR_4;

 if (!VAR_0)
  FUNC_0();

 VAR_1->k_len = (VAR_3 + 31) / 32;

 VAR_10[0] = FUNC_2(VAR_2[0]);
 VAR_10[1] = FUNC_2(VAR_2[1]);
 VAR_10[2] = FUNC_2(VAR_2[2]);
 VAR_10[3] = FUNC_2(VAR_2[3]);

 switch (VAR_1->k_len)
 {
  case 4:
   VAR_6 = VAR_10[3];
   for (VAR_5 = 0; VAR_5 < 10; ++VAR_5)
    FUNC_3(VAR_5);
   break;

  case 6:
   VAR_10[4] = FUNC_2(VAR_2[4]);
   VAR_6 = VAR_10[5] = FUNC_2(VAR_2[5]);
   for (VAR_5 = 0; VAR_5 < 8; ++VAR_5)
    FUNC_4(VAR_5);
   break;

  case 8:
   VAR_10[4] = FUNC_2(VAR_2[4]);
   VAR_10[5] = FUNC_2(VAR_2[5]);
   VAR_10[6] = FUNC_2(VAR_2[6]);
   VAR_6 = VAR_10[7] = FUNC_2(VAR_2[7]);
   for (VAR_5 = 0; VAR_5 < 7; ++VAR_5)
    FUNC_5(VAR_5);
   break;
 }

 if (!VAR_4)
 {
  VAR_11[0] = VAR_10[0];
  VAR_11[1] = VAR_10[1];
  VAR_11[2] = VAR_10[2];
  VAR_11[3] = VAR_10[3];

  for (VAR_5 = 4; VAR_5 < 4 * VAR_1->k_len + 24; ++VAR_5)
   FUNC_1(VAR_11[VAR_5], VAR_10[VAR_5]);
 }

 return VAR_1;
}
