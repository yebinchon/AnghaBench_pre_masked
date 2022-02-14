
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef enum pdo_attribute_type { ____Placeholder_pdo_attribute_type } pdo_attribute_type ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static inline zend_string *FUNC_4(zval *VAR_0, enum pdo_attribute_type VAR_1, zend_string *VAR_2)
{
 zval *VAR_3;

 if (VAR_0 && (VAR_3 = FUNC_1(FUNC_0(VAR_0), VAR_1))) {
  return FUNC_3(VAR_3);
 }
 return VAR_2 ? FUNC_2(VAR_2) : ((void*)0);
}
