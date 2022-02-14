
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 int VAR_2 ;

BOOL FUNC_2(LPWSTR *VAR_3, LPCWSTR VAR_4, size_t VAR_5)
{
 BOOL VAR_6 = VAR_0;
 if(VAR_4 && VAR_3 && VAR_5)
 {
  VAR_5 = (VAR_5 + 1) * sizeof(wchar_t);
  if((*VAR_3 = (LPWSTR) FUNC_0(VAR_1, VAR_5)))
  {
   FUNC_1(*VAR_3, VAR_4, VAR_5);
   VAR_6 = VAR_2;
  }
 }
 return VAR_6;
}
