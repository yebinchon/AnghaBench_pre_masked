
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct php_com_iterator {scalar_t__ key; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0, zval *VAR_1)
{
 struct php_com_iterator *VAR_2 = (struct php_com_iterator*)FUNC_2(VAR_0->data);

 if (VAR_2->key == (zend_ulong)-1) {
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1, VAR_2->key);
 }
}
