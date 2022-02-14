
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct pmu_events_map {struct pmu_event* table; } ;
struct pmu_event {int unit; scalar_t__ metric_expr; scalar_t__ metric_name; scalar_t__ metric_group; int name; } ;
struct list_head {int dummy; } ;
struct egroup {char const** ids; int idnum; int nd; int metric_unit; scalar_t__ metric_expr; scalar_t__ metric_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,char const***,int*) ;
 int FUNC_1 (int *,struct list_head*) ;
 struct egroup* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,char const*) ;
 struct pmu_events_map* FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*,...) ;
 int FUNC_6 (struct strbuf*,char*,...) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, struct strbuf *VAR_3,
       struct list_head *VAR_4)
{
 struct pmu_events_map *VAR_5 = FUNC_4(((void*)0));
 struct pmu_event *VAR_6;
 int VAR_7 = -VAR_0;
 int VAR_8, VAR_9;

 if (!VAR_5)
  return 0;

 for (VAR_8 = 0; ; VAR_8++) {
  VAR_6 = &VAR_5->table[VAR_8];

  if (!VAR_6->name && !VAR_6->metric_group && !VAR_6->metric_name)
   break;
  if (!VAR_6->metric_expr)
   continue;
  if (FUNC_3(VAR_6->metric_group, VAR_2) ||
      FUNC_3(VAR_6->metric_name, VAR_2)) {
   const char **VAR_10;
   int VAR_11;
   struct egroup *VAR_12;
   bool VAR_13 = 0;

   FUNC_5("metric expr %s for %s\n", VAR_6->metric_expr, VAR_6->metric_name);

   if (FUNC_0(VAR_6->metric_expr,
          ((void*)0), &VAR_10, &VAR_11) < 0)
    continue;
   if (VAR_3->len > 0)
    FUNC_6(VAR_3, ",");
   for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
    FUNC_5("found event %s\n", VAR_10[VAR_9]);





    if (!FUNC_7(VAR_10[VAR_9], "duration_time")) {
     if (VAR_9 > 0)
      FUNC_6(VAR_3, "}:W,");
     FUNC_6(VAR_3, "duration_time");
     VAR_13 = 1;
     continue;
    }
    FUNC_6(VAR_3, "%s%s",
     VAR_9 == 0 || VAR_13 ? "{" : ",",
     VAR_10[VAR_9]);
    VAR_13 = 0;
   }
   if (!VAR_13)
    FUNC_6(VAR_3, "}:W");

   VAR_12 = FUNC_2(sizeof(struct egroup));
   if (!VAR_12) {
    VAR_7 = -VAR_1;
    break;
   }
   VAR_12->ids = VAR_10;
   VAR_12->idnum = VAR_11;
   VAR_12->metric_name = VAR_6->metric_name;
   VAR_12->metric_expr = VAR_6->metric_expr;
   VAR_12->metric_unit = VAR_6->unit;
   FUNC_1(&VAR_12->nd, VAR_4);
   VAR_7 = 0;
  }
 }
 return VAR_7;
}
