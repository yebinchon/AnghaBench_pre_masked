
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef int UINT16 ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;

void FUNC_0(UINT8 *VAR_2, UINT8 *VAR_3)
{
  UINT16 VAR_4, VAR_5;
  for (VAR_4=0;VAR_4<16;VAR_4++)
    VAR_2[VAR_4] = VAR_3[VAR_4];
  for (VAR_4=1;VAR_4<11;VAR_4++){
    VAR_5 = VAR_2[VAR_4*16 - 4];
    VAR_2[VAR_4*16 + 0] = VAR_1[VAR_2[VAR_4*16 - 3]]^VAR_2[(VAR_4-1)*16 + 0]^VAR_0[VAR_4];
    VAR_2[VAR_4*16 + 1] = VAR_1[VAR_2[VAR_4*16 - 2]]^VAR_2[(VAR_4-1)*16 + 1];
    VAR_2[VAR_4*16 + 2] = VAR_1[VAR_2[VAR_4*16 - 1]]^VAR_2[(VAR_4-1)*16 + 2];
    VAR_2[VAR_4*16 + 3] = VAR_1[VAR_5 ]^VAR_2[(VAR_4-1)*16 + 3];
    VAR_2[VAR_4*16 + 4] = VAR_2[(VAR_4-1)*16 + 4]^VAR_2[VAR_4*16 + 0];
    VAR_2[VAR_4*16 + 5] = VAR_2[(VAR_4-1)*16 + 5]^VAR_2[VAR_4*16 + 1];
    VAR_2[VAR_4*16 + 6] = VAR_2[(VAR_4-1)*16 + 6]^VAR_2[VAR_4*16 + 2];
    VAR_2[VAR_4*16 + 7] = VAR_2[(VAR_4-1)*16 + 7]^VAR_2[VAR_4*16 + 3];
    VAR_2[VAR_4*16 + 8] = VAR_2[(VAR_4-1)*16 + 8]^VAR_2[VAR_4*16 + 4];
    VAR_2[VAR_4*16 + 9] = VAR_2[(VAR_4-1)*16 + 9]^VAR_2[VAR_4*16 + 5];
    VAR_2[VAR_4*16 +10] = VAR_2[(VAR_4-1)*16 +10]^VAR_2[VAR_4*16 + 6];
    VAR_2[VAR_4*16 +11] = VAR_2[(VAR_4-1)*16 +11]^VAR_2[VAR_4*16 + 7];
    VAR_2[VAR_4*16 +12] = VAR_2[(VAR_4-1)*16 +12]^VAR_2[VAR_4*16 + 8];
    VAR_2[VAR_4*16 +13] = VAR_2[(VAR_4-1)*16 +13]^VAR_2[VAR_4*16 + 9];
    VAR_2[VAR_4*16 +14] = VAR_2[(VAR_4-1)*16 +14]^VAR_2[VAR_4*16 +10];
    VAR_2[VAR_4*16 +15] = VAR_2[(VAR_4-1)*16 +15]^VAR_2[VAR_4*16 +11];
  }

}
