
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int php_conv_err_t ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (int,int) ;
 int * FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int **) ;

__attribute__((used)) static php_conv_err_t FUNC_7(const HashTable *VAR_2, char **VAR_3, size_t *VAR_4, char *VAR_5, size_t VAR_6, int VAR_7)
{
 zval *VAR_8;

 *VAR_3 = ((void*)0);
 *VAR_4 = 0;

 if ((VAR_8 = FUNC_4((HashTable *)VAR_2, VAR_5, VAR_6-1)) != ((void*)0)) {
  zend_string *VAR_9;
  zend_string *VAR_10 = FUNC_6(VAR_8, &VAR_9);

  *VAR_3 = FUNC_3(FUNC_0(VAR_10) + 1, VAR_7);
  *VAR_4 = FUNC_0(VAR_10);
  FUNC_2(*VAR_3, FUNC_1(VAR_10), FUNC_0(VAR_10) + 1);
  FUNC_5(VAR_9);
 } else {
  return VAR_0;
 }
 return VAR_1;
}
