
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int nr_args; scalar_t__ event; int * args; } ;


 int FUNC_0 (struct trace_probe*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct trace_probe *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_args; VAR_1++)
  FUNC_1(&VAR_0->args[VAR_1]);

 if (VAR_0->event)
  FUNC_0(VAR_0);
}
