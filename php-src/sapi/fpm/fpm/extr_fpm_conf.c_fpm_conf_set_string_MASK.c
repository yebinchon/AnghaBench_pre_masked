
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(zval *VAR_0, void **VAR_1, intptr_t VAR_2)
{
 char **VAR_3 = (char **) ((char *) *VAR_1 + VAR_2);

 if (!VAR_3) {
  return "internal error: NULL value";
 }


 if (*VAR_3) {
  FUNC_2(*VAR_3);
 }

 *VAR_3 = FUNC_3(FUNC_0(VAR_0));
 if (!*VAR_3) {
  return "fpm_conf_set_string(): strdup() failed";
 }
 if (FUNC_1(VAR_3) == -1) {
  return "Can't use '$pool' when the pool is not defined";
 }

 return ((void*)0);
}
