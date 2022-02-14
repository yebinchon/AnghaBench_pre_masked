
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ebt_table_info {struct ebt_entries** hook_entry; } ;
struct ebt_entry {scalar_t__ bitmask; } ;
struct ebt_entries {int dummy; } ;
struct TYPE_2__ {scalar_t__ n; struct ebt_entries* chaininfo; } ;
struct ebt_cl_stack {scalar_t__ hookmask; TYPE_1__ cs; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct ebt_entry *VAR_1, struct ebt_table_info *VAR_2,
        unsigned int *VAR_3, struct ebt_cl_stack *VAR_4)
{
 int VAR_5;


 if (VAR_1->bitmask)
  return 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->hook_entry[VAR_5] == (struct ebt_entries *)VAR_1)
   break;
 }

 if (VAR_5 != VAR_0)
  return 0;

 VAR_4[*VAR_3].cs.chaininfo = (struct ebt_entries *)VAR_1;

 VAR_4[*VAR_3].cs.n = 0;
 VAR_4[*VAR_3].hookmask = 0;

 (*VAR_3)++;
 return 0;
}
