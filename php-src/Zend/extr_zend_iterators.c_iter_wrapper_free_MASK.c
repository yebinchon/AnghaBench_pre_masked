
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* funcs; } ;
typedef TYPE_2__ zend_object_iterator ;
typedef int zend_object ;
struct TYPE_4__ {int (* dtor ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(zend_object *VAR_0)
{
 zend_object_iterator *VAR_1 = (zend_object_iterator*)VAR_0;
 VAR_1->funcs->dtor(VAR_1);
}
