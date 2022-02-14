
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int FUNC_0 (int const*) ;
 char* FUNC_1 (int const*) ;
 char* FUNC_2 (char const*,char) ;
 int * FUNC_3 (char const*,int,int ) ;

zend_string *FUNC_4(const zend_string* VAR_0) {
 const char *VAR_1, *VAR_2;

 if (!VAR_0 || FUNC_0(VAR_0) < 3) {

  return ((void*)0);
 }

 VAR_1 = FUNC_1(VAR_0) + 1;
 VAR_2 = FUNC_2(VAR_1, '$');
 if (!VAR_2) {

  return ((void*)0);
 }

 return FUNC_3(VAR_1, VAR_2 - VAR_1, 0);
}
