
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {TYPE_1__* branch_info; } ;
typedef int int64_t ;
struct TYPE_2__ {void* srcline_from; int from; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 if (!VAR_0->branch_info->srcline_from)
  VAR_0->branch_info->srcline_from = FUNC_0(&VAR_0->branch_info->from);

 if (!VAR_1->branch_info->srcline_from)
  VAR_1->branch_info->srcline_from = FUNC_0(&VAR_1->branch_info->from);

 return FUNC_1(VAR_1->branch_info->srcline_from, VAR_0->branch_info->srcline_from);
}
