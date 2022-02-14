
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * LPWSTR ;
typedef int DWORD ;
typedef int COMPUTER_NAME_FORMAT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

BOOL FUNC_5(BOOL VAR_5, LPWSTR *VAR_6)
{
 BOOL VAR_7 = VAR_3;
 COMPUTER_NAME_FORMAT VAR_8 = VAR_5 ? VAR_0 : VAR_1;
 DWORD VAR_9 = 0;
 if(!FUNC_0(VAR_8, ((void*)0), &VAR_9) && (FUNC_1() == VAR_2))
 {
  if((*VAR_6 = (wchar_t *) FUNC_2(VAR_4, VAR_9 * sizeof(wchar_t))))
  {
   if(!(VAR_7 = FUNC_0(VAR_8, *VAR_6, &VAR_9)))
   {
    FUNC_4(L"GetComputerNameEx(data)");
    FUNC_3(*VAR_6);
   }
  }
 }
 else FUNC_4(L"GetComputerNameEx(init)");
 return VAR_7;
}
