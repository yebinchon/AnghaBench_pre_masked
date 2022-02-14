
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_4__ {TYPE_1__* object; scalar_t__ current_index; } ;
typedef TYPE_2__ date_period_it ;
struct TYPE_3__ {int start; scalar_t__ current; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(zend_object_iterator *VAR_0)
{
 date_period_it *VAR_1 = (date_period_it *)VAR_0;

 VAR_1->current_index = 0;
 if (VAR_1->object->current) {
  FUNC_2(VAR_1->object->current);
 }
 if (!VAR_1->object->start) {
  FUNC_3(((void*)0), "DatePeriod has not been initialized correctly");
  return;
 }
 VAR_1->object->current = FUNC_1(VAR_1->object->start);
 FUNC_0(VAR_0);
}
