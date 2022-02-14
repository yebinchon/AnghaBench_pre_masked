
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int * event; int list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct trace_probe*) ;

void FUNC_4(struct trace_probe *VAR_0)
{
 FUNC_0(&VAR_0->list);
 if (FUNC_1(FUNC_3(VAR_0)))
  FUNC_2(VAR_0->event);
 VAR_0->event = ((void*)0);
}
