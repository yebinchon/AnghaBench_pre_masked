
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int offset; int table; } ;
struct TYPE_6__ {scalar_t__ table; } ;
struct TYPE_8__ {unsigned int opcode; unsigned int input_count; TYPE_2__ reg; scalar_t__ func_all_comps; TYPE_1__ index_reg; int mnem; } ;
struct d3dx_pres_ins {unsigned int component_count; int scalar_op; unsigned int op; TYPE_3__ output; TYPE_3__* inputs; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 unsigned int* FUNC_4 (unsigned int*,unsigned int,TYPE_3__*) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static unsigned int *FUNC_5(unsigned int *VAR_6, unsigned int VAR_7, struct d3dx_pres_ins *VAR_8)
{
    unsigned int VAR_9, VAR_10;
    unsigned int VAR_11;
    unsigned int VAR_12;

    if (VAR_7 < 2)
    {
        FUNC_2("Byte code buffer ends unexpectedly.\n");
        return ((void*)0);
    }

    VAR_10 = *VAR_6++;
    VAR_9 = (VAR_10 & VAR_1) >> VAR_2;
    VAR_8->component_count = VAR_10 & VAR_0;
    VAR_8->scalar_op = !!(VAR_10 & VAR_4);

    if (VAR_8->component_count < 1 || VAR_8->component_count > 4)
    {
        FUNC_1("Unsupported number of components %u.\n", VAR_8->component_count);
        return ((void*)0);
    }
    VAR_11 = *VAR_6++;
    VAR_7 -= 2;
    for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); ++VAR_12)
        if (VAR_9 == VAR_5[VAR_12].opcode && VAR_11 == VAR_5[VAR_12].input_count)
            break;
    if (VAR_12 == FUNC_0(VAR_5))
    {
        FUNC_1("Unknown opcode %#x, input_count %u, raw %#x.\n", VAR_9, VAR_11, VAR_10);
        return ((void*)0);
    }
    VAR_8->op = VAR_12;
    if (VAR_11 > FUNC_0(VAR_8->inputs))
    {
        FUNC_1("Actual input args count %u exceeds inputs array size, instruction %s.\n", VAR_11,
                VAR_5[VAR_12].mnem);
        return ((void*)0);
    }
    for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12)
    {
        unsigned int *VAR_13;

        VAR_13 = FUNC_4(VAR_6, VAR_7, &VAR_8->inputs[VAR_12]);
        if (!VAR_13)
            return ((void*)0);
        VAR_7 -= VAR_13 - VAR_6;
        VAR_6 = VAR_13;
    }
    VAR_6 = FUNC_4(VAR_6, VAR_7, &VAR_8->output);
    if (VAR_8->output.index_reg.table != VAR_3)
    {
        FUNC_1("Relative addressing in output register not supported.\n");
        return ((void*)0);
    }
    if (FUNC_3(VAR_8->output.reg.table, VAR_8->output.reg.offset
            + (VAR_5[VAR_8->op].func_all_comps ? 0 : VAR_8->component_count - 1))
            != FUNC_3(VAR_8->output.reg.table, VAR_8->output.reg.offset))
    {
        FUNC_1("Instructions outputting multiple registers are not supported.\n");
        return ((void*)0);
    }
    return VAR_6;
}
