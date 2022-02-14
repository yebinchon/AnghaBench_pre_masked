
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int zend_function ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int **,int *,int const*) ;

__attribute__((used)) static zend_function *FUNC_3(zend_object **VAR_2, zend_string *VAR_3, const zval *VAR_4)
{
 if (FUNC_0(VAR_3) == sizeof("open") - 1
   && (FUNC_1(VAR_3)[0] == 'o' || FUNC_1(VAR_3)[0] == 'O')
   && (FUNC_1(VAR_3)[1] == 'p' || FUNC_1(VAR_3)[1] == 'P')
   && (FUNC_1(VAR_3)[2] == 'e' || FUNC_1(VAR_3)[2] == 'E')
   && (FUNC_1(VAR_3)[3] == 'n' || FUNC_1(VAR_3)[3] == 'N')) {
  return (zend_function*)&VAR_0;
 } else if (FUNC_0(VAR_3) == sizeof("xml") - 1
   && (FUNC_1(VAR_3)[0] == 'x' || FUNC_1(VAR_3)[0] == 'X')
   && (FUNC_1(VAR_3)[1] == 'm' || FUNC_1(VAR_3)[1] == 'M')
   && (FUNC_1(VAR_3)[2] == 'l' || FUNC_1(VAR_3)[2] == 'L')) {
  return (zend_function*)&VAR_1;
 }
 return FUNC_2(VAR_2, VAR_3, VAR_4);;
}
