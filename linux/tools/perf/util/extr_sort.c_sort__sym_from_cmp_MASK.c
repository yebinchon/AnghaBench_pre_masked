
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hist_entry {TYPE_1__* branch_info; } ;
struct addr_map_symbol {int sym; int addr; } ;
typedef int int64_t ;
struct TYPE_3__ {struct addr_map_symbol from; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int64_t
FUNC_3(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 struct addr_map_symbol *VAR_2 = &VAR_0->branch_info->from;
 struct addr_map_symbol *VAR_3 = &VAR_1->branch_info->from;

 if (!VAR_0->branch_info || !VAR_1->branch_info)
  return FUNC_2(VAR_0->branch_info, VAR_1->branch_info);

 VAR_2 = &VAR_0->branch_info->from;
 VAR_3 = &VAR_1->branch_info->from;

 if (!VAR_2->sym && !VAR_3->sym)
  return FUNC_0(VAR_2->addr, VAR_3->addr);

 return FUNC_1(VAR_2->sym, VAR_3->sym);
}
