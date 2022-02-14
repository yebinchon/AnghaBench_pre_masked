
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_5__ {scalar_t__ key; scalar_t__ imax; } ;
typedef TYPE_2__ php_com_saproxy_iter ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(zend_object_iterator *VAR_0)
{
 php_com_saproxy_iter *VAR_1 = (php_com_saproxy_iter*)FUNC_0(VAR_0->data);

 if (++VAR_1->key >= VAR_1->imax) {
  VAR_1->key = -1;
 }
}
