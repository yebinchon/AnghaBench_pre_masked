
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int sha2 ;
typedef int * PVOID ;
typedef int PKULL_M_DPAPI_MASTERKEY ;
typedef int PCWSTR ;
typedef int * PBYTE ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;
typedef scalar_t__ ALG_ID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int,int *,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,int,int ,int,int,int *,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,int,int ,int **,int*) ;
 scalar_t__ FUNC_6 (int ) ;

BOOL FUNC_7(DWORD VAR_5, PKULL_M_DPAPI_MASTERKEY VAR_6, PCWSTR VAR_7, PCWSTR VAR_8, BOOL VAR_9, PVOID *VAR_10, DWORD *VAR_11)
{
 BOOL VAR_12 = VAR_3;
 ALG_ID VAR_13;
 DWORD VAR_14, VAR_15 = (DWORD) FUNC_6(VAR_8) * sizeof(wchar_t);
 PVOID VAR_16;
 BYTE VAR_17[32];

 VAR_13 = (VAR_5 & 4) ? VAR_1 : VAR_0;
 VAR_14 = FUNC_3(VAR_13);
 if((VAR_16 = FUNC_0(VAR_4, VAR_14)))
 {
  if(FUNC_2(VAR_13, VAR_7, (DWORD) FUNC_6(VAR_7) * sizeof(wchar_t), VAR_16, VAR_14))
  {
   if(VAR_9 && (VAR_13 == VAR_0))
    if(FUNC_4(VAR_2, VAR_16, VAR_14, VAR_8, VAR_15, 10000, VAR_17, sizeof(VAR_17), VAR_3))
     FUNC_4(VAR_2, VAR_17, sizeof(VAR_17), VAR_8, VAR_15, 1, (PBYTE) VAR_16, VAR_14, VAR_3);

   VAR_12 = FUNC_5(VAR_6, VAR_16, VAR_14, VAR_8, VAR_10, VAR_11);
  }
  FUNC_1(VAR_16);
 }
 return VAR_12;
}
