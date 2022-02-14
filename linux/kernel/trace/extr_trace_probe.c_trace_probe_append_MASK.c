
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_probe {int list; int event; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct trace_probe*) ;
 int FUNC_4 (struct trace_probe*) ;

int FUNC_5(struct trace_probe *VAR_1, struct trace_probe *VAR_2)
{
 if (FUNC_3(VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_1->list);
 FUNC_2(VAR_1->event);

 VAR_1->event = VAR_2->event;
 FUNC_0(&VAR_1->list, FUNC_4(VAR_2));

 return 0;
}
