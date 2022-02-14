
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ it; } ;
struct TYPE_6__ {TYPE_2__ intern; } ;
typedef TYPE_3__ spl_fixedarray_it ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(zend_object_iterator *VAR_0)
{
 spl_fixedarray_it *VAR_1 = (spl_fixedarray_it *)VAR_0;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_1->intern.it.data);
}
