
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_sample {int dummy; } ;
struct branch_stack {int nr; TYPE_3__* entries; } ;
struct addr_map_symbol {int dummy; } ;
struct TYPE_4__ {int cycles; } ;
struct branch_info {struct addr_map_symbol to; TYPE_1__ flags; int from; } ;
struct addr_location {int dummy; } ;
struct TYPE_5__ {scalar_t__ cycles; } ;
struct TYPE_6__ {TYPE_2__ flags; } ;


 int FUNC_0 (int *,struct addr_map_symbol*,int ) ;
 int FUNC_1 (struct branch_info*) ;
 struct branch_info* FUNC_2 (struct perf_sample*,struct addr_location*) ;

void FUNC_3(struct branch_stack *VAR_0, struct addr_location *VAR_1,
     struct perf_sample *VAR_2, bool VAR_3)
{
 struct branch_info *VAR_4;


 if (VAR_0 && VAR_0->nr && VAR_0->entries[0].flags.cycles) {
  int VAR_5;

  VAR_4 = FUNC_2(VAR_2, VAR_1);
  if (VAR_4) {
   struct addr_map_symbol *VAR_6 = ((void*)0);
   for (VAR_5 = VAR_0->nr - 1; VAR_5 >= 0; VAR_5--) {
    FUNC_0(&VAR_4[VAR_5].from,
     VAR_3 ? ((void*)0) : VAR_6,
     VAR_4[VAR_5].flags.cycles);
    VAR_6 = &VAR_4[VAR_5].to;
   }
   FUNC_1(VAR_4);
  }
 }
}
