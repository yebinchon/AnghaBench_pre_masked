
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {TYPE_1__* branch_stack; } ;
struct hist_entry_iter {struct branch_info* priv; int total; scalar_t__ curr; struct perf_sample* sample; } ;
struct branch_info {int dummy; } ;
struct addr_location {int dummy; } ;
struct TYPE_2__ {int nr; } ;


 int VAR_0 ;
 struct branch_info* FUNC_0 (struct perf_sample*,struct addr_location*) ;

__attribute__((used)) static int
FUNC_1(struct hist_entry_iter *VAR_1, struct addr_location *VAR_2)
{
 struct branch_info *VAR_3;
 struct perf_sample *VAR_4 = VAR_1->sample;

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->curr = 0;
 VAR_1->total = VAR_4->branch_stack->nr;

 VAR_1->priv = VAR_3;
 return 0;
}
