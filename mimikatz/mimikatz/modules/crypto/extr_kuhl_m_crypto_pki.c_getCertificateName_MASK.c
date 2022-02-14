
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * PWSTR ;
typedef int PCERT_NAME_BLOB ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;

PWSTR FUNC_3(PCERT_NAME_BLOB VAR_3)
{
 PWSTR VAR_4 = ((void*)0);
 DWORD VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_0, ((void*)0), 0);
 if(VAR_5)
 {
  if((VAR_4 = (PWSTR) FUNC_1(VAR_1, VAR_5 * sizeof(wchar_t))))
  {
   if(!FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4, VAR_5))
    VAR_4 = (PWSTR) FUNC_2(VAR_4);
  }
 }
 return VAR_4;
}
