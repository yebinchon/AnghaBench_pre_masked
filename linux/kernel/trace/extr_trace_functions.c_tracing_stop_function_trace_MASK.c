
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int ops; scalar_t__ function_enabled; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct trace_array *VAR_0)
{
 VAR_0->function_enabled = 0;
 FUNC_0(VAR_0->ops);
}
