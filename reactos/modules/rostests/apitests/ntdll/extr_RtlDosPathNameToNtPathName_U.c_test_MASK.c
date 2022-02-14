
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPCWSTR ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(const char* VAR_0, const char* VAR_1, const char* VAR_2)
{
 WCHAR VAR_3[512];
 WCHAR VAR_4[512];
 WCHAR VAR_5[512];
 LPCWSTR VAR_6 = 0;
 LPCWSTR VAR_7 = 0;
 FUNC_0(VAR_3, L"%S", VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_4, L"%S", VAR_1);
  VAR_6 = VAR_4;
 }
 if (VAR_2) {
  FUNC_0(VAR_5, L"%S", VAR_2);
  VAR_7 = VAR_5;
 }
 FUNC_1(VAR_3, VAR_6, VAR_7);
}
