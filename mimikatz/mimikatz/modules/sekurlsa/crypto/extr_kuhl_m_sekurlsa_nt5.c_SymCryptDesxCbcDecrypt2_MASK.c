
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int SIZE_T ;
typedef int * PULONGLONG ;
typedef int PCSYMCRYPT_NT5_DESX_EXPANDED_KEY ;
typedef int * PBYTE ;
typedef int * LPCBYTE ;
typedef int BYTE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int *,int *) ;

VOID FUNC_2(PCSYMCRYPT_NT5_DESX_EXPANDED_KEY VAR_0, PBYTE VAR_1, LPCBYTE VAR_2, PBYTE VAR_3, SIZE_T VAR_4)
{
 LPCBYTE VAR_5;
 BYTE VAR_6[8];
 for(VAR_5 = &VAR_2[VAR_4 & ~7]; VAR_2 < VAR_5; VAR_3 += 8, VAR_2 += 8)
 {
  FUNC_0(VAR_6, VAR_2, 8);
  FUNC_1(VAR_0, VAR_2, VAR_3);
  *(PULONGLONG) VAR_3 ^= *(PULONGLONG) VAR_1;
  FUNC_0(VAR_1, VAR_6, 8);
 }
}
