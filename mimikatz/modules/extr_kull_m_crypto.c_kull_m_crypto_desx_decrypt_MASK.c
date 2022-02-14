
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PVOID ;
typedef int * PULONGLONG ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LPCVOID ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__,int*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int,int ,int *,int *) ;

BOOL FUNC_4(HCRYPTPROV VAR_2, LPCVOID VAR_3, LPCVOID VAR_4, PVOID VAR_5)
{
 BOOL VAR_6 = VAR_1;
 HCRYPTKEY VAR_7;
 DWORD VAR_8 = 8;
 FUNC_2(VAR_5, VAR_4, 8);
 if(FUNC_3(VAR_2, VAR_0, VAR_3, 8, 0, &VAR_7, ((void*)0)))
 {
  *(PULONGLONG) VAR_5 ^= *(PULONGLONG) ((PBYTE) VAR_3 + 16);
  if((VAR_6 = FUNC_0(VAR_7, 0, VAR_1, 0, (PBYTE) VAR_5, &VAR_8)))
   *(PULONGLONG) VAR_5 ^= *(PULONGLONG) ((PBYTE) VAR_3 + 8);
  FUNC_1(VAR_7);
 }
 return VAR_6;
}
