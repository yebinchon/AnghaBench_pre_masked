
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_events_map {struct pmu_event* table; } ;
struct pmu_event {char const* pmu; scalar_t__ metric_name; scalar_t__ metric_expr; scalar_t__ perpkg; scalar_t__ unit; scalar_t__ topic; scalar_t__ long_desc; scalar_t__ event; scalar_t__ desc; scalar_t__ name; scalar_t__ metric_group; } ;
struct perf_pmu {char* name; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,int *,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 struct pmu_events_map* FUNC_2 (struct perf_pmu*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6(struct list_head *VAR_0, struct perf_pmu *VAR_1)
{
 int VAR_2;
 struct pmu_events_map *VAR_3;
 const char *VAR_4 = VAR_1->name;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return;




 VAR_2 = 0;
 while (1) {
  const char *VAR_5 = FUNC_1(VAR_4) ? VAR_4 : "cpu";
  struct pmu_event *VAR_6 = &VAR_3->table[VAR_2++];
  const char *VAR_7 = VAR_6->pmu ? VAR_6->pmu : VAR_5;

  if (!VAR_6->name) {
   if (VAR_6->metric_group || VAR_6->metric_name)
    continue;
   break;
  }

  if (FUNC_3(VAR_4) &&
      FUNC_4(VAR_7, VAR_4))
   goto new_alias;

  if (FUNC_5(VAR_7, VAR_4))
   continue;

new_alias:

  FUNC_0(VAR_0, ((void*)0), (char *)VAR_6->name,
    (char *)VAR_6->desc, (char *)VAR_6->event,
    (char *)VAR_6->long_desc, (char *)VAR_6->topic,
    (char *)VAR_6->unit, (char *)VAR_6->perpkg,
    (char *)VAR_6->metric_expr,
    (char *)VAR_6->metric_name);
 }
}
