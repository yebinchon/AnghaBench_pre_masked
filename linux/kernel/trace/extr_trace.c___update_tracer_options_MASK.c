
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer {struct tracer* next; } ;
struct trace_array {int dummy; } ;


 int FUNC_0 (struct trace_array*,struct tracer*) ;
 struct tracer* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct trace_array *VAR_1)
{
 struct tracer *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  FUNC_0(VAR_1, VAR_2);
}
