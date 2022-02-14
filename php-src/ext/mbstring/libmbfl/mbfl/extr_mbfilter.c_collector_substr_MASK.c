
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct collector_substr_data {scalar_t__ output; scalar_t__ stop; scalar_t__ start; TYPE_1__* next_filter; } ;
struct TYPE_2__ {int (* filter_function ) (int,TYPE_1__*) ;} ;


 int FUNC_0 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, void* VAR_1)
{
 struct collector_substr_data *VAR_2 = (struct collector_substr_data*)VAR_1;

 if (VAR_2->output >= VAR_2->stop) {
  return -1;
 }

 if (VAR_2->output >= VAR_2->start) {
  (*VAR_2->next_filter->filter_function)(VAR_0, VAR_2->next_filter);
 }

 VAR_2->output++;

 return VAR_0;
}
