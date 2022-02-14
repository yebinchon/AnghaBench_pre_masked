
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int* trace_flags_index; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct trace_array *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->trace_flags_index[VAR_2] = VAR_2;
}
