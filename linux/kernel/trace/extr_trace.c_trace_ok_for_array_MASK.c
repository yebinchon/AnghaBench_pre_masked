
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer {scalar_t__ allow_instances; } ;
struct trace_array {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct tracer *VAR_1, struct trace_array *VAR_2)
{
 return (VAR_2->flags & VAR_0) || VAR_1->allow_instances;
}
