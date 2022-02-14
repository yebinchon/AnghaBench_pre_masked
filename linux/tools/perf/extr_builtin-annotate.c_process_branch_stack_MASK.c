
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int dummy; } ;
struct branch_stack {int nr; } ;
struct addr_map_symbol {int dummy; } ;
struct branch_info {struct addr_map_symbol to; int flags; int from; } ;
struct addr_location {int dummy; } ;


 int FUNC_0 (struct branch_info*) ;
 int FUNC_1 (struct addr_map_symbol*,int *,int *) ;
 struct branch_info* FUNC_2 (struct perf_sample*,struct addr_location*) ;

__attribute__((used)) static void FUNC_3(struct branch_stack *VAR_0, struct addr_location *VAR_1,
     struct perf_sample *VAR_2)
{
 struct addr_map_symbol *VAR_3 = ((void*)0);
 struct branch_info *VAR_4;
 int VAR_5;

 if (!VAR_0 || !VAR_0->nr)
  return;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_4)
  return;

 for (VAR_5 = VAR_0->nr - 1; VAR_5 >= 0; VAR_5--) {



  if (VAR_3)
   FUNC_1(VAR_3, &VAR_4[VAR_5].from, &VAR_4[VAR_5].flags);
  VAR_3 = &VAR_4[VAR_5].to;
 }

 FUNC_0(VAR_4);
}
