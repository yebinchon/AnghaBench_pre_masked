
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_events_map {struct pmu_event* table; } ;
struct pmu_event {char const* name; int * event; scalar_t__ desc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int*) ;

__attribute__((used)) static const char *FUNC_2(int VAR_0, int VAR_1, struct pmu_events_map *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = FUNC_0(VAR_0) + VAR_1;

 if (VAR_2) {
  struct pmu_event *VAR_6 = VAR_2->table;

  for (; VAR_6->name || VAR_6->event || VAR_6->desc; ++VAR_6) {
   if (VAR_6->name == ((void*)0) || VAR_6->event == ((void*)0))
    continue;
   VAR_3 = FUNC_1(VAR_6->event, "event=%x", &VAR_4);
   if (VAR_3 == 1 && VAR_4 == VAR_5)
    return VAR_6->name;
  }
 }
 return ((void*)0);
}
