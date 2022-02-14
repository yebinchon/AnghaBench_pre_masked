
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ zend_llist_element ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ zend_extension ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const zend_llist_element **VAR_0, const zend_llist_element **VAR_1)
{
 zend_extension *VAR_2 = (zend_extension*)(*VAR_0)->data;
 zend_extension *VAR_3 = (zend_extension*)(*VAR_1)->data;
 return FUNC_0(VAR_2->name, VAR_3->name);
}
