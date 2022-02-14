
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int FILE ;


 int * FUNC_0 (int *,char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 int * FUNC_6 (char const*) ;

FILE* FUNC_7(const char* VAR_3)
{
 FILE* VAR_4 = ((void*)0);
 wchar_t *VAR_5 = ((void*)0);
 const char* VAR_6 = ".tmp";

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (VAR_2 != VAR_1) {
  FUNC_1(VAR_2);
 }
 if (FUNC_2(VAR_6, &VAR_3[FUNC_4(VAR_3)-4]) == 0) {
  VAR_2 = VAR_1;
 } else {
  VAR_2 = FUNC_3(VAR_3);
 }
 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_0, VAR_3);
  goto out;
 }
 VAR_4 = FUNC_0(VAR_5, L"rb");
 if (VAR_4 == ((void*)0)) {
  FUNC_5("localization: could not open '%s'\n", VAR_3);
 }

out:
 FUNC_1(VAR_5);
 return VAR_4;
}
