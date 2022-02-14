
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_const_param_eval_output {scalar_t__ table; int register_index; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct d3dx_const_param_eval_output *VAR_2 = VAR_0;
    const struct d3dx_const_param_eval_output *VAR_3 = VAR_1;

    if (VAR_2->table != VAR_3->table)
        return VAR_2->table - VAR_3->table;
    return VAR_2->register_index - VAR_3->register_index;
}
