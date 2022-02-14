
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

__attribute__((used)) static zend_string* FUNC_3(zval *VAR_1, size_t VAR_2, HashTable *VAR_3) {
 if (VAR_3 && FUNC_2(VAR_3, "salt", sizeof("salt") - 1)) {
  FUNC_0(((void*)0), VAR_0, "The 'salt' option is no longer supported. The provided salt has been been ignored");
 }

 return FUNC_1(VAR_2);
}
