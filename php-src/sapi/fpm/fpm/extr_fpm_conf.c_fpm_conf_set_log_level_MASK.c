
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(zval *VAR_5, void **VAR_6, intptr_t VAR_7)
{
 char *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;

 if (!FUNC_1(VAR_8, "debug")) {
  VAR_9 = VAR_1;
 } else if (!FUNC_1(VAR_8, "notice")) {
  VAR_9 = VAR_3;
 } else if (!FUNC_1(VAR_8, "warning") || !FUNC_1(VAR_8, "warn")) {
  VAR_9 = VAR_4;
 } else if (!FUNC_1(VAR_8, "error")) {
  VAR_9 = VAR_2;
 } else if (!FUNC_1(VAR_8, "alert")) {
  VAR_9 = VAR_0;
 } else {
  return "invalid value for 'log_level'";
 }

 * (int *) ((char *) *VAR_6 + VAR_7) = VAR_9;
 return ((void*)0);
}
