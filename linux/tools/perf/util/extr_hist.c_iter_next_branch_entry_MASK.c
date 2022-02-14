
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry_iter {int curr; int total; struct branch_info* priv; } ;
struct TYPE_2__ {int addr; int sym; int map; } ;
struct branch_info {TYPE_1__ to; } ;
struct addr_location {int addr; int sym; int map; } ;



__attribute__((used)) static int
FUNC_0(struct hist_entry_iter *VAR_0, struct addr_location *VAR_1)
{
 struct branch_info *VAR_2 = VAR_0->priv;
 int VAR_3 = VAR_0->curr;

 if (VAR_2 == ((void*)0))
  return 0;

 if (VAR_0->curr >= VAR_0->total)
  return 0;

 VAR_1->map = VAR_2[VAR_3].to.map;
 VAR_1->sym = VAR_2[VAR_3].to.sym;
 VAR_1->addr = VAR_2[VAR_3].to.addr;
 return 1;
}
