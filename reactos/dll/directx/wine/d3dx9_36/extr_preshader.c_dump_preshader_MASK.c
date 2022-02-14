
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* table_sizes; double** tables; } ;
struct d3dx_preshader {unsigned int ins_count; int * ins; TYPE_1__ regs; int inputs; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct d3dx_preshader *VAR_1)
{
    unsigned int VAR_2, VAR_3 = VAR_1->regs.table_sizes[VAR_0] * 4;
    const double *VAR_4 = VAR_1->regs.tables[VAR_0];

    if (VAR_3)
        FUNC_0("// Immediates:\n");
    for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
    {
        if (!(VAR_2 % 4))
            FUNC_0("// ");
        FUNC_0("%.8e", VAR_4[VAR_2]);
        if (VAR_2 % 4 == 3)
            FUNC_0("\n");
        else
            FUNC_0(", ");
    }
    FUNC_0("// Preshader registers:\n");
    FUNC_2(&VAR_1->inputs);
    FUNC_0("preshader\n");
    for (VAR_2 = 0; VAR_2 < VAR_1->ins_count; ++VAR_2)
        FUNC_1(&VAR_1->regs, &VAR_1->ins[VAR_2]);
}
