
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_20__ {unsigned int* table_sizes; } ;
struct TYPE_19__ {int regset2table; } ;
struct d3dx_preshader {int ins_count; TYPE_7__ regs; TYPE_10__* ins; TYPE_6__ inputs; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef enum pres_reg_tables { ____Placeholder_pres_reg_tables } pres_reg_tables ;
struct TYPE_21__ {unsigned int input_count; } ;
struct TYPE_17__ {int table; unsigned int offset; } ;
struct TYPE_18__ {TYPE_4__ reg; } ;
struct TYPE_15__ {scalar_t__ table; unsigned int offset; } ;
struct TYPE_14__ {int table; unsigned int offset; } ;
struct TYPE_16__ {TYPE_2__ index_reg; TYPE_1__ reg; } ;
struct TYPE_13__ {size_t op; int component_count; TYPE_5__ output; TYPE_3__* inputs; scalar_t__ scalar_op; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int,unsigned int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 TYPE_10__* FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (char*,unsigned int) ;
 int VAR_8 ;
 int FUNC_5 (char*,...) ;
 unsigned int* FUNC_6 (unsigned int*,unsigned int,int ,unsigned int*) ;
 int FUNC_7 (unsigned int*,TYPE_6__*,struct d3dx9_base_effect*,int *,int ,int *) ;
 unsigned int FUNC_8 (size_t) ;
 void* FUNC_9 (int,unsigned int) ;
 unsigned int* FUNC_10 (unsigned int*,unsigned int,TYPE_10__*) ;
 TYPE_9__* VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (TYPE_7__*,size_t) ;
 int FUNC_12 (TYPE_7__*,size_t,double*,int ,unsigned int) ;
 int FUNC_13 (unsigned int*,int,void*) ;
 int FUNC_14 (unsigned int*,TYPE_6__*) ;

__attribute__((used)) static HRESULT FUNC_15(struct d3dx_preshader *VAR_11, unsigned int *VAR_12, unsigned int VAR_13, struct d3dx9_base_effect *VAR_14)
{
    unsigned int *VAR_15;
    unsigned int VAR_16, VAR_17, VAR_18;
    double *VAR_19;
    HRESULT VAR_20;
    unsigned int VAR_21;
    unsigned int VAR_22;

    FUNC_4("Preshader version %#x.\n", *VAR_12 & 0xffff);

    if (!VAR_13)
    {
        FUNC_5("Unexpected end of byte code buffer.\n");
        return VAR_0;
    }

    VAR_15 = FUNC_6(VAR_12 + 1, VAR_13 - 1, VAR_3, &VAR_22);
    if (VAR_15)
    {
        VAR_18 = *VAR_15++;
        if (VAR_18 > (VAR_22 - 1) / (sizeof(double) / sizeof(unsigned int)))
        {
            FUNC_5("Byte code buffer ends unexpectedly.\n");
            return VAR_0;
        }
        VAR_19 = (double *)VAR_15;
    }
    else
    {
        VAR_18 = 0;
        VAR_19 = ((void*)0);
    }
    FUNC_4("%u double constants.\n", VAR_18);

    VAR_15 = FUNC_6(VAR_12 + 1, VAR_13 - 1, VAR_4, &VAR_22);
    if (!VAR_15)
    {
        FUNC_5("Could not find preshader code.\n");
        return VAR_1;
    }
    VAR_11->ins_count = *VAR_15++;
    --VAR_22;
    if (VAR_11->ins_count > VAR_8 / sizeof(*VAR_11->ins))
    {
        FUNC_5("Invalid instruction count %u.\n", VAR_11->ins_count);
        return VAR_0;
    }
    FUNC_4("%u instructions.\n", VAR_11->ins_count);
    VAR_11->ins = FUNC_3(FUNC_2(), VAR_5, sizeof(*VAR_11->ins) * VAR_11->ins_count);
    if (!VAR_11->ins)
        return VAR_2;
    for (VAR_16 = 0; VAR_16 < VAR_11->ins_count; ++VAR_16)
    {
        unsigned int *VAR_23;

        VAR_23 = FUNC_10(VAR_15, VAR_22, &VAR_11->ins[VAR_16]);
        if (!VAR_23)
            return VAR_0;
        VAR_22 -= VAR_23 - VAR_15;
        VAR_15 = VAR_23;
    }

    VAR_11->inputs.regset2table = VAR_10;

    VAR_21 = *VAR_12;
    *VAR_12 = 0xfffe0000;
    VAR_20 = FUNC_7(VAR_12, &VAR_11->inputs, VAR_14, ((void*)0), 0, ((void*)0));
    *VAR_12 = VAR_21;
    if (FUNC_0(VAR_20))
        return VAR_20;

    if (VAR_18 % FUNC_8(VAR_7))
    {
        FUNC_1("const_count %u is not a multiple of %u.\n", VAR_18,
                FUNC_8(VAR_7));
        return VAR_0;
    }
    VAR_11->regs.table_sizes[VAR_7] = FUNC_9(VAR_7, VAR_18);

    FUNC_14(VAR_11->regs.table_sizes, &VAR_11->inputs);
    for (VAR_16 = 0; VAR_16 < VAR_11->ins_count; ++VAR_16)
    {
        for (VAR_17 = 0; VAR_17 < VAR_9[VAR_11->ins[VAR_16].op].input_count; ++VAR_17)
        {
            enum pres_reg_tables VAR_24;
            unsigned int VAR_25;

            if (VAR_11->ins[VAR_16].inputs[VAR_17].index_reg.table == VAR_6)
            {
                unsigned int VAR_26 = VAR_11->ins[VAR_16].scalar_op && !VAR_17 ? 0
                        : VAR_11->ins[VAR_16].component_count - 1;

                VAR_24 = VAR_11->ins[VAR_16].inputs[VAR_17].reg.table;
                VAR_25 = FUNC_9(VAR_24, VAR_11->ins[VAR_16].inputs[VAR_17].reg.offset
                        + VAR_26);
            }
            else
            {
                VAR_24 = VAR_11->ins[VAR_16].inputs[VAR_17].index_reg.table;
                VAR_25 = FUNC_9(VAR_24, VAR_11->ins[VAR_16].inputs[VAR_17].index_reg.offset);
            }
            if (VAR_25 >= VAR_11->regs.table_sizes[VAR_24])
            {

                FUNC_1("Out of bounds register index, i %u, j %u, table %u, reg_idx %u, preshader parsing failed.\n",
                        VAR_16, VAR_17, VAR_24, VAR_25);
                return VAR_0;
            }
        }
        FUNC_13(VAR_11->regs.table_sizes, VAR_11->ins[VAR_16].output.reg.table,
                FUNC_9(VAR_11->ins[VAR_16].output.reg.table, VAR_11->ins[VAR_16].output.reg.offset));
    }
    if (FUNC_0(FUNC_11(&VAR_11->regs, VAR_7)))
        return VAR_2;
    FUNC_12(&VAR_11->regs, VAR_7, VAR_19, 0, VAR_18);

    return VAR_1;
}
