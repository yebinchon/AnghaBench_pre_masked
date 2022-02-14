
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_cache_entry {int pev; int spev; int tevlist; int node; } ;
struct perf_probe_event {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct perf_probe_event*) ;
 int FUNC_2 (struct probe_cache_entry*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct perf_probe_event*) ;
 struct probe_cache_entry* FUNC_5 (int) ;
 int FUNC_6 (struct probe_cache_entry**) ;

__attribute__((used)) static struct probe_cache_entry *
FUNC_7(struct perf_probe_event *VAR_0)
{
 struct probe_cache_entry *VAR_1 = FUNC_5(sizeof(*VAR_1));

 if (VAR_1) {
  FUNC_0(&VAR_1->node);
  VAR_1->tevlist = FUNC_3(((void*)0), ((void*)0));
  if (!VAR_1->tevlist)
   FUNC_6(&VAR_1);
  else if (VAR_0) {
   VAR_1->spev = FUNC_4(VAR_0);
   if (!VAR_1->spev ||
       FUNC_1(&VAR_1->pev, VAR_0) < 0) {
    FUNC_2(VAR_1);
    return ((void*)0);
   }
  }
 }

 return VAR_1;
}
