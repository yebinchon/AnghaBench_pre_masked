
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {int level; TYPE_1__* branch_info; } ;
struct addr_map_symbol {int addr; int sym; int map; } ;
struct TYPE_2__ {struct addr_map_symbol to; } ;


 int FUNC_0 (int ,int ,int ,int ,char*,size_t,unsigned int) ;
 int FUNC_1 (char*,size_t,char*,unsigned int,unsigned int,char*) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_0, char *VAR_1,
           size_t VAR_2, unsigned int VAR_3)
{
 if (VAR_0->branch_info) {
  struct addr_map_symbol *VAR_4 = &VAR_0->branch_info->to;

  return FUNC_0(VAR_4->map, VAR_4->sym, VAR_4->addr,
       VAR_0->level, VAR_1, VAR_2, VAR_3);
 }

 return FUNC_1(VAR_1, VAR_2, "%-*.*s", VAR_3, VAR_3, "N/A");
}
