
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_dimension {int taken; TYPE_1__* entry; } ;
struct perf_hpp_list {int need_collapse; } ;
struct TYPE_2__ {scalar_t__ se_collapse; } ;


 scalar_t__ FUNC_0 (struct sort_dimension*,struct perf_hpp_list*,int) ;

__attribute__((used)) static int FUNC_1(struct sort_dimension *VAR_0,
     struct perf_hpp_list *VAR_1,
     int VAR_2)
{
 if (VAR_0->taken)
  return 0;

 if (FUNC_0(VAR_0, VAR_1, VAR_2) < 0)
  return -1;

 if (VAR_0->entry->se_collapse)
  VAR_1->need_collapse = 1;

 VAR_0->taken = 1;

 return 0;
}
