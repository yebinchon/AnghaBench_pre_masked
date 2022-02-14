
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_10__ {scalar_t__ tz_info; scalar_t__ tz_abbr; } ;
typedef TYPE_2__ timelib_time ;
struct TYPE_11__ {int start_ce; TYPE_2__* current; } ;
typedef TYPE_3__ php_period_obj ;
struct TYPE_12__ {TYPE_2__* time; } ;
typedef TYPE_4__ php_date_obj ;
struct TYPE_9__ {int data; } ;
struct TYPE_13__ {int current; TYPE_1__ intern; } ;
typedef TYPE_5__ date_period_it ;


 TYPE_4__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 () ;

__attribute__((used)) static zval *FUNC_5(zend_object_iterator *VAR_0)
{
 date_period_it *VAR_1 = (date_period_it *)VAR_0;
 php_period_obj *VAR_2 = FUNC_1(&VAR_1->intern.data);
 timelib_time *VAR_3 = VAR_2->current;
 php_date_obj *VAR_4;


 FUNC_2(VAR_2->start_ce, &VAR_1->current);
 VAR_4 = FUNC_0(&VAR_1->current);
 VAR_4->time = FUNC_4();
 *VAR_4->time = *VAR_3;
 if (VAR_3->tz_abbr) {
  VAR_4->time->tz_abbr = FUNC_3(VAR_3->tz_abbr);
 }
 if (VAR_3->tz_info) {
  VAR_4->time->tz_info = VAR_3->tz_info;
 }

 return &VAR_1->current;
}
