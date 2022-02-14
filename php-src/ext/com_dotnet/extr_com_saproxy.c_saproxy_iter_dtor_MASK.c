
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_6__ {struct TYPE_6__* indices; int proxy_obj; } ;
typedef TYPE_2__ php_com_saproxy_iter ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0)
{
 php_com_saproxy_iter *VAR_1 = (php_com_saproxy_iter*)FUNC_0(VAR_0->data);

 FUNC_2(&VAR_1->proxy_obj);

 FUNC_1(VAR_1->indices);
 FUNC_1(VAR_1);
}
