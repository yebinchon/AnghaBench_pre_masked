
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_12__ {TYPE_1__ std; TYPE_5__* time; } ;
typedef TYPE_2__ php_date_obj ;
struct TYPE_13__ {scalar_t__ tz_info; scalar_t__ tz_abbr; } ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static zend_object *FUNC_5(zend_object *VAR_0)
{
 php_date_obj *VAR_1 = FUNC_1(VAR_0);
 php_date_obj *VAR_2 = FUNC_1(FUNC_0(VAR_1->std.ce));

 FUNC_4(&VAR_2->std, &VAR_1->std);
 if (!VAR_1->time) {
  return &VAR_2->std;
 }


 VAR_2->time = FUNC_3();
 *VAR_2->time = *VAR_1->time;
 if (VAR_1->time->tz_abbr) {
  VAR_2->time->tz_abbr = FUNC_2(VAR_1->time->tz_abbr);
 }
 if (VAR_1->time->tz_info) {
  VAR_2->time->tz_info = VAR_1->time->tz_info;
 }

 return &VAR_2->std;
}
