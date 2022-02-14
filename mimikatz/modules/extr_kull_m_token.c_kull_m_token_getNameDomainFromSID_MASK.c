
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int SID_NAME_USE ;
typedef int * PWSTR ;
typedef int * PSID_NAME_USE ;
typedef int PSID ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int*,int *,int*,int *) ;

BOOL FUNC_4(PSID VAR_3, PWSTR * VAR_4, PWSTR * VAR_5, PSID_NAME_USE VAR_6, LPCWSTR VAR_7)
{
 BOOL VAR_8 = VAR_1;
 SID_NAME_USE VAR_9;
 PSID_NAME_USE VAR_10 = VAR_6 ? VAR_6 : &VAR_9;
 DWORD VAR_11 = 0, VAR_12 = 0;

 if(!FUNC_3(VAR_7, VAR_3, ((void*)0), &VAR_11, ((void*)0), &VAR_12, VAR_10) && (FUNC_0() == VAR_0))
 {
  if((*VAR_4 = (PWSTR) FUNC_1(VAR_2, VAR_11 * sizeof(wchar_t))))
  {
   if((*VAR_5 = (PWSTR) FUNC_1(VAR_2, VAR_12 * sizeof(wchar_t))))
   {
    VAR_8 = FUNC_3(VAR_7, VAR_3, *VAR_4, &VAR_11, *VAR_5, &VAR_12, VAR_10);
    if(!VAR_8)
     *VAR_5 = (PWSTR) FUNC_2(*VAR_5);
   }
   if(!VAR_8)
    *VAR_4 = (PWSTR) FUNC_2(*VAR_4);
  }
 }
 return VAR_8;
}
