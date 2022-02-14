
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int* LPWSTR ;
typedef int* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (int*) ;
 int* FUNC_4 (int*,int*) ;

BOOL FUNC_5(LPCWSTR VAR_2, LPCWSTR VAR_3, LPWSTR *VAR_4)
{
 BOOL VAR_5 = VAR_0;
 DWORD VAR_6, VAR_7, VAR_8;
 LPWSTR VAR_9, VAR_10, VAR_11, VAR_12;
 VAR_6 = (DWORD) FUNC_3(VAR_3) * sizeof(wchar_t);
 VAR_7 = VAR_6 + 3 * sizeof(wchar_t);
 VAR_8 = VAR_6 + 4 * sizeof(wchar_t);
 if((VAR_9 = (LPWSTR) FUNC_0(VAR_1, VAR_7)))
 {
  if((VAR_10 = (LPWSTR) FUNC_0(VAR_1, VAR_8)))
  {
   VAR_9[0] = VAR_10[0] = L'<';
   VAR_10[1] = L'/';
   VAR_9[VAR_7 / sizeof(wchar_t) - 2] = VAR_10[VAR_8 / sizeof(wchar_t) - 2] = L'>';
   FUNC_2(VAR_9 + 1, VAR_3, VAR_6);
   FUNC_2(VAR_10 + 2, VAR_3, VAR_6);
   if((VAR_11 = FUNC_4(VAR_2, VAR_9)))
   {
    VAR_11 += VAR_7 / sizeof(wchar_t) - 1;
    if((VAR_12 = FUNC_4(VAR_11, VAR_10)))
    {
     if((VAR_5 = (VAR_11 <= VAR_12)))
     {
      VAR_6 = (DWORD) (VAR_12 - VAR_11) * sizeof(wchar_t);
      if(((*VAR_4) = (LPWSTR) FUNC_0(VAR_1, VAR_6 + sizeof(wchar_t))))
      {
       FUNC_2(*VAR_4, VAR_11, VAR_6);
      }
     }
    }
   }
   FUNC_1(VAR_10);
  }
  FUNC_1(VAR_9);
 }
 return VAR_5;
}
