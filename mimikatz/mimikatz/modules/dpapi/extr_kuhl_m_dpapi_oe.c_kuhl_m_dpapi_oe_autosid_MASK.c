
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PSID ;
typedef int LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char*,int ) ;
 int* FUNC_6 (int*,int) ;

BOOL FUNC_7(LPCWSTR VAR_1, LPWSTR * VAR_2)
{
 BOOL VAR_3 = VAR_0;
 wchar_t *VAR_4, *VAR_5;
 PSID VAR_6;
 if(VAR_1 && (VAR_4 = FUNC_3(VAR_1)))
 {
  if((VAR_5 = FUNC_6(VAR_4, L'\\')))
  {
   *VAR_5 = L'\0';
   if((VAR_5 = FUNC_6(VAR_4, L'\\')))
   {
    if(FUNC_1(++VAR_5, &VAR_6))
    {
     if((VAR_3 = FUNC_0(VAR_6, VAR_2)))
     {
      FUNC_5(L"Auto SID from path seems to be: %s\n", *VAR_2);
     }
     FUNC_2(VAR_6);
    }
   }
  }
  FUNC_4(VAR_4);
 }
 return VAR_3;
}
