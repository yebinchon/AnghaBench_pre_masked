
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_11__ {TYPE_1__ std; scalar_t__ interval; void* end; void* current; void* start; int start_ce; int include_start_date; int recurrences; int initialized; } ;
typedef TYPE_2__ php_period_obj ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static zend_object *FUNC_5(zend_object *VAR_0)
{
 php_period_obj *VAR_1 = FUNC_1(VAR_0);
 php_period_obj *VAR_2 = FUNC_1(FUNC_0(VAR_1->std.ce));

 FUNC_4(&VAR_2->std, &VAR_1->std);
 VAR_2->initialized = VAR_1->initialized;
 VAR_2->recurrences = VAR_1->recurrences;
 VAR_2->include_start_date = VAR_1->include_start_date;
 VAR_2->start_ce = VAR_1->start_ce;

 if (VAR_1->start) {
  VAR_2->start = FUNC_3(VAR_1->start);
 }
 if (VAR_1->current) {
  VAR_2->current = FUNC_3(VAR_1->current);
 }
 if (VAR_1->end) {
        VAR_2->end = FUNC_3(VAR_1->end);
    }
    if (VAR_1->interval) {
        VAR_2->interval = FUNC_2(VAR_1->interval);
    }
 return &VAR_2->std;
}
