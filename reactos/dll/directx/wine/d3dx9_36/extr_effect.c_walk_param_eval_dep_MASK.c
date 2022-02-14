
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int walk_parameter_dep_func ;
struct d3dx_parameter {int dummy; } ;
struct TYPE_4__ {unsigned int input_count; struct d3dx_parameter** inputs_param; } ;
struct TYPE_5__ {TYPE_1__ inputs; } ;
struct TYPE_6__ {unsigned int input_count; struct d3dx_parameter** inputs_param; } ;
struct d3dx_param_eval {TYPE_2__ pres; TYPE_3__ shader_inputs; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct d3dx_parameter*,int ,void*) ;

__attribute__((used)) static BOOL FUNC_1(struct d3dx_param_eval *VAR_2, walk_parameter_dep_func VAR_3,
        void *VAR_4)
{
    struct d3dx_parameter **VAR_5;
    unsigned int VAR_6, VAR_7;

    if (!VAR_2)
        return VAR_0;

    VAR_5 = VAR_2->shader_inputs.inputs_param;
    VAR_7 = VAR_2->shader_inputs.input_count;
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        if (FUNC_0(VAR_5[VAR_6], VAR_3, VAR_4))
            return VAR_1;
    }

    VAR_5 = VAR_2->pres.inputs.inputs_param;
    VAR_7 = VAR_2->pres.inputs.input_count;
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        if (FUNC_0(VAR_5[VAR_6], VAR_3, VAR_4))
            return VAR_1;
    }
    return VAR_0;
}
