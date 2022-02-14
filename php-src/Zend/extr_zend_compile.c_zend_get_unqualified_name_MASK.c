
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int zend_bool ;


 int FUNC_0 (int const*) ;
 char const* FUNC_1 (int const*) ;
 char* FUNC_2 (char const*,char,int) ;

__attribute__((used)) static zend_bool FUNC_3(const zend_string *VAR_0, const char **VAR_1, size_t *VAR_2)
{
 const char *VAR_3 = FUNC_2(FUNC_1(VAR_0), '\\', FUNC_0(VAR_0));
 if (VAR_3 != ((void*)0)) {
  *VAR_1 = VAR_3 + 1;
  *VAR_2 = FUNC_1(VAR_0) + FUNC_0(VAR_0) - *VAR_1;
  return 1;
 }

 return 0;
}
