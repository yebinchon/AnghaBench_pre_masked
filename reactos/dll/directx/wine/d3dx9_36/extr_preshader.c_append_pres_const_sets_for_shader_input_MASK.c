
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_preshader {unsigned int ins_count; struct d3dx_pres_ins* ins; } ;
struct d3dx_pres_reg {scalar_t__ table; int offset; } ;
struct TYPE_2__ {struct d3dx_pres_reg reg; } ;
struct d3dx_pres_ins {TYPE_1__ output; } ;
struct d3dx_const_tab {int dummy; } ;
struct d3dx_const_param_eval_output {int register_count; scalar_t__ table; int element_count; int constant_class; int register_index; int * member_0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct d3dx_const_tab*,struct d3dx_const_param_eval_output*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct d3dx_const_tab *VAR_2,
        struct d3dx_preshader *VAR_3)
{
    unsigned int VAR_4;
    struct d3dx_const_param_eval_output VAR_5 = {((void*)0)};

    for (VAR_4 = 0; VAR_4 < VAR_3->ins_count; ++VAR_4)
    {
        const struct d3dx_pres_ins *VAR_6 = &VAR_3->ins[VAR_4];
        const struct d3dx_pres_reg *VAR_7 = &VAR_6->output.reg;

        if (VAR_7->table == VAR_1)
            continue;

        VAR_5.register_index = FUNC_1(VAR_7->table, VAR_7->offset);
        VAR_5.register_count = 1;
        VAR_5.table = VAR_7->table;
        VAR_5.constant_class = VAR_0;
        VAR_5.element_count = 1;
        FUNC_0(VAR_2, &VAR_5);
    }
}
