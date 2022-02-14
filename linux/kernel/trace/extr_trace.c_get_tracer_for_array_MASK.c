
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer {struct tracer* next; } ;
struct trace_array {int dummy; } ;


 int FUNC_0 (struct tracer*,struct trace_array*) ;

__attribute__((used)) static struct tracer *
FUNC_1(struct trace_array *VAR_0, struct tracer *VAR_1)
{
 while (VAR_1 && !FUNC_0(VAR_1, VAR_0))
  VAR_1 = VAR_1->next;

 return VAR_1;
}
