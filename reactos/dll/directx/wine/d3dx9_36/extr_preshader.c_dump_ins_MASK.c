
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_regstore {int dummy; } ;
struct d3dx_pres_ins {size_t op; int component_count; scalar_t__ scalar_op; int * inputs; int output; } ;
struct TYPE_2__ {unsigned int input_count; scalar_t__ func_all_comps; int mnem; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct d3dx_regstore*,int *,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct d3dx_regstore *VAR_1, const struct d3dx_pres_ins *VAR_2)
{
    unsigned int VAR_3;

    FUNC_0("%s ", VAR_0[VAR_2->op].mnem);
    FUNC_1(VAR_1, &VAR_2->output, VAR_0[VAR_2->op].func_all_comps ? 1 : VAR_2->component_count);
    for (VAR_3 = 0; VAR_3 < VAR_0[VAR_2->op].input_count; ++VAR_3)
    {
        FUNC_0(", ");
        FUNC_1(VAR_1, &VAR_2->inputs[VAR_3], VAR_2->scalar_op && !VAR_3 ? 1 : VAR_2->component_count);
    }
    FUNC_0("\n");
}
