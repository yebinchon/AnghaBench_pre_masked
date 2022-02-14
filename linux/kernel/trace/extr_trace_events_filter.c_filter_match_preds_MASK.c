
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prog_entry {int when_to_branch; int target; struct filter_pred* pred; } ;
struct filter_pred {int (* fn ) (struct filter_pred*,void*) ;} ;
struct event_filter {int prog; } ;


 struct prog_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct filter_pred*,void*) ;

int FUNC_2(struct event_filter *VAR_0, void *VAR_1)
{
 struct prog_entry *VAR_2;
 int VAR_3;


 if (!VAR_0)
  return 1;


 VAR_2 = FUNC_0(VAR_0->prog);
 if (!VAR_2)
  return 1;

 for (VAR_3 = 0; VAR_2[VAR_3].pred; VAR_3++) {
  struct filter_pred *VAR_4 = VAR_2[VAR_3].pred;
  int VAR_5 = VAR_4->fn(VAR_4, VAR_1);
  if (VAR_5 == VAR_2[VAR_3].when_to_branch)
   VAR_3 = VAR_2[VAR_3].target;
 }
 return VAR_2[VAR_3].target;
}
