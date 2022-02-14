
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_subsystem_dir {int list; int entry; int nr_events; } ;


 int FUNC_0 (struct trace_subsystem_dir*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct trace_subsystem_dir *VAR_0)
{
 if (!VAR_0)
  return;

 if (!--VAR_0->nr_events) {
  FUNC_2(VAR_0->entry);
  FUNC_1(&VAR_0->list);
  FUNC_0(VAR_0);
 }
}
