
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_info {int input_count; double (* func ) (double*,unsigned int) ;scalar_t__ func_all_comps; } ;
struct d3dx_preshader {unsigned int ins_count; int regs; struct d3dx_pres_ins* ins; } ;
struct TYPE_2__ {int reg; } ;
struct d3dx_pres_ins {size_t op; int component_count; TYPE_1__ output; scalar_t__ scalar_op; int * inputs; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 double FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int *,int *,unsigned int,double) ;
 struct op_info* VAR_3 ;
 double FUNC_3 (double*,unsigned int) ;
 double FUNC_4 (double*,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_5(struct d3dx_preshader *VAR_4)
{
    unsigned int VAR_5, VAR_6, VAR_7;
    double VAR_8[VAR_0];
    double VAR_9;

    for (VAR_5 = 0; VAR_5 < VAR_4->ins_count; ++VAR_5)
    {
        const struct d3dx_pres_ins *VAR_10;
        const struct op_info *VAR_11;

        VAR_10 = &VAR_4->ins[VAR_5];
        VAR_11 = &VAR_3[VAR_10->op];
        if (VAR_11->func_all_comps)
        {
            if (VAR_11->input_count * VAR_10->component_count > VAR_0)
            {
                FUNC_0("Too many arguments (%u) for one instruction.\n", VAR_11->input_count * VAR_10->component_count);
                return VAR_2;
            }
            for (VAR_7 = 0; VAR_7 < VAR_11->input_count; ++VAR_7)
                for (VAR_6 = 0; VAR_6 < VAR_10->component_count; ++VAR_6)
                    VAR_8[VAR_7 * VAR_10->component_count + VAR_6] = FUNC_1(&VAR_4->regs, &VAR_10->inputs[VAR_7],
                            VAR_10->scalar_op && !VAR_7 ? 0 : VAR_6);
            VAR_9 = VAR_11->func(VAR_8, VAR_10->component_count);


            FUNC_2(&VAR_4->regs, &VAR_10->output.reg, 0, VAR_9);
        }
        else
        {
            for (VAR_6 = 0; VAR_6 < VAR_10->component_count; ++VAR_6)
            {
                for (VAR_7 = 0; VAR_7 < VAR_11->input_count; ++VAR_7)
                    VAR_8[VAR_7] = FUNC_1(&VAR_4->regs, &VAR_10->inputs[VAR_7], VAR_10->scalar_op && !VAR_7 ? 0 : VAR_6);
                VAR_9 = VAR_11->func(VAR_8, VAR_10->component_count);
                FUNC_2(&VAR_4->regs, &VAR_10->output.reg, VAR_6, VAR_9);
            }
        }
    }
    return VAR_1;
}
