
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_5__ {int key; } ;
typedef TYPE_2__ php_com_saproxy_iter ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0, zval *VAR_1)
{
 php_com_saproxy_iter *VAR_2 = (php_com_saproxy_iter*)FUNC_2(VAR_0->data);

 if (VAR_2->key == -1) {
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1, VAR_2->key);
 }
}
