
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int std; int interval; scalar_t__ end; scalar_t__ current; scalar_t__ start; } ;
typedef TYPE_1__ php_period_obj ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(zend_object *VAR_0)
{
 php_period_obj *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->start) {
  FUNC_2(VAR_1->start);
 }

 if (VAR_1->current) {
  FUNC_2(VAR_1->current);
 }

 if (VAR_1->end) {
  FUNC_2(VAR_1->end);
 }

 FUNC_1(VAR_1->interval);
 FUNC_3(&VAR_1->std);
}
