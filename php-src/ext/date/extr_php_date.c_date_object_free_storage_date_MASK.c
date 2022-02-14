
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int std; scalar_t__ time; } ;
typedef TYPE_1__ php_date_obj ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(zend_object *VAR_0)
{
 php_date_obj *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->time) {
  FUNC_1(VAR_1->time);
 }

 FUNC_2(&VAR_1->std);
}
