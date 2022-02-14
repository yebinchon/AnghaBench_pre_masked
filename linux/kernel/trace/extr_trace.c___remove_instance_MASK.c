
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int nr_topts; struct trace_array* name; int tracing_cpumask; struct trace_array* topts; int dir; int list; TYPE_1__* current_trace; scalar_t__ ref; } ;
struct TYPE_2__ {scalar_t__ ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (struct trace_array*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct trace_array*) ;
 int FUNC_4 (struct trace_array*) ;
 int FUNC_5 (struct trace_array*) ;
 int FUNC_6 (struct trace_array*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct trace_array*,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct trace_array*) ;

__attribute__((used)) static int FUNC_11(struct trace_array *VAR_3)
{
 int VAR_4;

 if (VAR_3->ref || (VAR_3->current_trace && VAR_3->current_trace->ref))
  return -VAR_0;

 FUNC_7(&VAR_3->list);


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if ((1 << VAR_4) & VAR_2)
   FUNC_8(VAR_3, 1 << VAR_4, 0);
 }

 FUNC_10(VAR_3);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_9(VAR_3->dir);
 FUNC_3(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_topts; VAR_4++) {
  FUNC_6(VAR_3->topts[VAR_4].topts);
 }
 FUNC_6(VAR_3->topts);

 FUNC_2(VAR_3->tracing_cpumask);
 FUNC_6(VAR_3->name);
 FUNC_6(VAR_3);
 VAR_3 = ((void*)0);

 return 0;
}
