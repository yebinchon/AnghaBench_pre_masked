
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct php_com_iterator {int zdata; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static zval* FUNC_1(zend_object_iterator *VAR_0)
{
 struct php_com_iterator *VAR_1 = (struct php_com_iterator*)FUNC_0(VAR_0->data);

 return &VAR_1->zdata;
}
