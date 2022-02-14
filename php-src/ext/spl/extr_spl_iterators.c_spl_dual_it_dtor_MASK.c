
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_5__ {scalar_t__ iterator; } ;
struct TYPE_6__ {TYPE_1__ inner; } ;
typedef TYPE_2__ spl_dual_it_object ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 spl_dual_it_object *VAR_1 = FUNC_1(VAR_0);


 FUNC_3(VAR_0);

 FUNC_0(VAR_1);

 if (VAR_1->inner.iterator) {
  FUNC_2(VAR_1->inner.iterator);
 }
}
