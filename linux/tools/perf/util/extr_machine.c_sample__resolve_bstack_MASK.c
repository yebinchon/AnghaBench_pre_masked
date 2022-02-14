
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {struct branch_stack* branch_stack; } ;
struct branch_stack {unsigned int nr; TYPE_1__* entries; } ;
struct branch_info {int flags; int from; int to; } ;
struct addr_location {int thread; } ;
struct TYPE_2__ {int flags; int from; int to; } ;


 struct branch_info* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ,int *,int ) ;

struct branch_info *FUNC_2(struct perf_sample *VAR_0,
        struct addr_location *VAR_1)
{
 unsigned int VAR_2;
 const struct branch_stack *VAR_3 = VAR_0->branch_stack;
 struct branch_info *VAR_4 = FUNC_0(VAR_3->nr, sizeof(struct branch_info));

 if (!VAR_4)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_3->nr; VAR_2++) {
  FUNC_1(VAR_1->thread, &VAR_4[VAR_2].to, VAR_3->entries[VAR_2].to);
  FUNC_1(VAR_1->thread, &VAR_4[VAR_2].from, VAR_3->entries[VAR_2].from);
  VAR_4[VAR_2].flags = VAR_3->entries[VAR_2].flags;
 }
 return VAR_4;
}
