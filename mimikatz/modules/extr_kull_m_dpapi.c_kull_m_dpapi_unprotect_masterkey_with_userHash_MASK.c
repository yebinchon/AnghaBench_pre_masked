
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PVOID ;
typedef int PKULL_M_DPAPI_MASTERKEY ;
typedef int PCWSTR ;
typedef int LPCVOID ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,int,int *,int) ;
 int FUNC_1 (int ,int *,int,int *,int*) ;
 scalar_t__ FUNC_2 (int ) ;

BOOL FUNC_3(PKULL_M_DPAPI_MASTERKEY VAR_3, LPCVOID VAR_4, DWORD VAR_5, PCWSTR VAR_6, PVOID *VAR_7, DWORD *VAR_8)
{
 BOOL VAR_9 = VAR_1;
 BYTE VAR_10[VAR_2];

 if(FUNC_0(VAR_0, VAR_4, VAR_5, VAR_6, (DWORD) (FUNC_2(VAR_6) + 1) * sizeof(wchar_t), VAR_10, VAR_2))
  VAR_9 = FUNC_1(VAR_3, VAR_10, VAR_2, VAR_7, VAR_8);
 return VAR_9;
}
