
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_object_iterator ;
struct php_pdo_iterator {int fetch_ahead; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static zval *FUNC_1(zend_object_iterator *VAR_0)
{
 struct php_pdo_iterator *VAR_1 = (struct php_pdo_iterator*)VAR_0;


 if (FUNC_0(VAR_1->fetch_ahead)) {
  return ((void*)0);
 }

 return &VAR_1->fetch_ahead;
}
