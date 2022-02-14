
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef scalar_t__ zend_long ;
typedef int php_conv_err_t ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*,size_t) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static php_conv_err_t FUNC_2(const HashTable *VAR_2, zend_ulong *VAR_3, char *VAR_4, size_t VAR_5)
{
 zval *VAR_6 = FUNC_0((HashTable *)VAR_2, VAR_4, VAR_5-1);
 if (VAR_6 != ((void*)0)) {
  zend_long VAR_7 = FUNC_1(VAR_6);

  if (VAR_7 < 0) {
   *VAR_3 = 0;
  } else {
   *VAR_3 = VAR_7;
  }
  return VAR_1;
 } else {
  *VAR_3 = 0;
  return VAR_0;
 }
}
