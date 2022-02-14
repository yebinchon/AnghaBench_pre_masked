
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_11__ {int have_relative; scalar_t__ sse; scalar_t__ sse_uptodate; int relative; } ;
typedef TYPE_3__ timelib_time ;
struct TYPE_12__ {scalar_t__ recurrences; TYPE_2__* end; TYPE_3__* current; int * interval; int include_start_date; } ;
typedef TYPE_4__ php_period_obj ;
struct TYPE_9__ {int data; } ;
struct TYPE_13__ {scalar_t__ current_index; TYPE_1__ intern; } ;
typedef TYPE_5__ date_period_it ;
struct TYPE_10__ {scalar_t__ sse; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(zend_object_iterator *VAR_2)
{
 date_period_it *VAR_3 = (date_period_it *)VAR_2;
 php_period_obj *VAR_4 = FUNC_0(&VAR_3->intern.data);
 timelib_time *VAR_5 = VAR_4->current;


 if (!VAR_4->include_start_date || VAR_3->current_index > 0) {
  VAR_5->have_relative = 1;
  VAR_5->relative = *VAR_4->interval;
  VAR_5->sse_uptodate = 0;
  FUNC_2(VAR_5, ((void*)0));
  FUNC_1(VAR_5);
 }

 if (VAR_4->end) {
  return VAR_4->current->sse < VAR_4->end->sse ? VAR_1 : VAR_0;
 } else {
  return (VAR_3->current_index < VAR_4->recurrences) ? VAR_1 : VAR_0;
 }
}
