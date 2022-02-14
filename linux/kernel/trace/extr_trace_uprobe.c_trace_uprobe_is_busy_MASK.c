
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_uprobe {int tp; } ;
struct dyn_event {int dummy; } ;


 struct trace_uprobe* FUNC_0 (struct dyn_event*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct dyn_event *VAR_0)
{
 struct trace_uprobe *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_1->tp);
}
