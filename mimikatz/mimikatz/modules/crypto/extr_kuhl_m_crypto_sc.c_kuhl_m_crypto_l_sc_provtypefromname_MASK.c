
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,int *,int ,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

DWORD FUNC_6(LPCWSTR VAR_2)
{
 DWORD VAR_3 = 0, VAR_4, VAR_5, VAR_6 = 0;
 wchar_t * VAR_7;
 for(VAR_6 = 0, VAR_3 = 0; !VAR_3 && FUNC_0(VAR_6, ((void*)0), 0, &VAR_4, ((void*)0), &VAR_5); VAR_6++)
 {
  if((VAR_7 = (wchar_t *) FUNC_2(VAR_1, VAR_5)))
  {
   if(FUNC_0(VAR_6, ((void*)0), 0, &VAR_4, VAR_7, &VAR_5))
    if(FUNC_5(VAR_2, VAR_7) == 0)
     VAR_3 = VAR_4;
   FUNC_3(VAR_7);
  }
 }
 if(!VAR_3 && FUNC_1() != VAR_0)
  FUNC_4(L"CryptEnumProviders");
 return VAR_4;
}
