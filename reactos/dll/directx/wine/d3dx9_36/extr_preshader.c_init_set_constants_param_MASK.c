
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct d3dx_parameter {int element_count; unsigned int member_count; int rows; int columns; int bytes; int name; int type; int flags; int class; struct d3dx_parameter* members; } ;
struct d3dx_const_tab {unsigned int const_set_count; size_t* regset2table; } ;
struct d3dx_const_param_eval_output {int element_count; size_t table; int direct_copy; int register_count; int register_index; int constant_class; struct d3dx_parameter* param; } ;
struct const_upload_info {int count; scalar_t__ minor; scalar_t__ major_stride; scalar_t__ major_count; scalar_t__ major; scalar_t__ minor_remainder; int transpose; } ;
typedef enum pres_value_type { ____Placeholder_pres_value_type } pres_value_type ;
struct TYPE_5__ {int component_size; int type; } ;
struct TYPE_4__ {unsigned int Elements; unsigned int StructMembers; int RegisterSet; int RegisterCount; int RegisterIndex; int Class; int Bytes; int Columns; int Rows; int Name; } ;
typedef int ID3DXConstantTable ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;
typedef TYPE_1__ D3DXCONSTANT_DESC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct d3dx_const_tab*,struct d3dx_const_param_eval_output*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct d3dx_const_param_eval_output*,struct const_upload_info*) ;
 int FUNC_12 (int *,int ,TYPE_1__*,int *) ;
 int FUNC_13 (size_t,int ) ;
 int FUNC_14 (struct d3dx_const_tab*,struct d3dx_parameter*,unsigned int) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static HRESULT FUNC_16(struct d3dx_const_tab *VAR_8, ID3DXConstantTable *VAR_9,
        D3DXHANDLE VAR_10, struct d3dx_parameter *VAR_11)
{
    D3DXCONSTANT_DESC VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15;
    BOOL VAR_16;
    struct d3dx_const_param_eval_output VAR_17;
    struct const_upload_info VAR_18;
    enum pres_value_type VAR_19;
    HRESULT VAR_20;

    if (FUNC_2(FUNC_12(VAR_9, VAR_10, &VAR_12, ((void*)0))))
        return VAR_0;

    if (VAR_11->element_count)
    {
        VAR_14 = VAR_11->element_count;
        VAR_13 = VAR_12.Elements;
        VAR_16 = VAR_5;
    }
    else
    {
        if (VAR_12.Elements > 1)
        {
            FUNC_3("Unexpected number of constant elements %u.\n", VAR_12.Elements);
            return VAR_0;
        }
        VAR_14 = VAR_11->member_count;
        VAR_13 = VAR_12.StructMembers;
        VAR_16 = VAR_2;
    }
    if (VAR_13 != VAR_14)
    {
        FUNC_3("Number of elements or struct members differs between parameter (%u) and constant (%u).\n",
                VAR_14, VAR_13);
        return VAR_0;
    }
    if (VAR_13)
    {
        HRESULT VAR_21 = VAR_1;
        D3DXHANDLE VAR_22;
        unsigned int VAR_23 = VAR_8->const_set_count;

        for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15)
        {
            if (VAR_16)
                VAR_22 = FUNC_5(VAR_9, VAR_10, VAR_15);
            else
                VAR_22 = FUNC_4(VAR_9, VAR_10, VAR_15);
            if (!VAR_22)
            {
                FUNC_3("Could not get constant.\n");
                VAR_20 = VAR_0;
            }
            else
            {
                VAR_20 = FUNC_16(VAR_8, VAR_9, VAR_22, &VAR_11->members[VAR_15]);
            }
            if (FUNC_2(VAR_20))
                VAR_21 = VAR_20;
        }
        if (FUNC_2(VAR_21))
            return VAR_21;
        return FUNC_14(VAR_8, VAR_11, VAR_23);
    }

    FUNC_6("Constant %s, rows %u, columns %u, class %u, bytes %u.\n",
            FUNC_10(VAR_12.Name), VAR_12.Rows, VAR_12.Columns, VAR_12.Class, VAR_12.Bytes);
    FUNC_6("Parameter %s, rows %u, columns %u, class %u, flags %#x, bytes %u.\n",
            FUNC_10(VAR_11->name), VAR_11->rows, VAR_11->columns, VAR_11->class,
            VAR_11->flags, VAR_11->bytes);

    VAR_17.element_count = 1;
    VAR_17.param = VAR_11;
    VAR_17.constant_class = VAR_12.Class;
    if (VAR_12.RegisterSet >= FUNC_0(VAR_6))
    {
        FUNC_3("Unknown register set %u.\n", VAR_12.RegisterSet);
        return VAR_0;
    }
    VAR_17.register_index = VAR_12.RegisterIndex;
    VAR_17.table = VAR_8->regset2table[VAR_12.RegisterSet];
    if (VAR_17.table >= VAR_3)
    {
        FUNC_1("Unexpected register set %u.\n", VAR_12.RegisterSet);
        return VAR_0;
    }
    FUNC_9(VAR_7[VAR_17.table].component_size == sizeof(unsigned int));
    FUNC_9(VAR_11->bytes / (VAR_11->rows * VAR_11->columns) == sizeof(unsigned int));
    VAR_17.register_count = VAR_12.RegisterCount;
    VAR_19 = VAR_7[VAR_17.table].type;
    FUNC_11(&VAR_17, &VAR_18);
    if (!VAR_18.count)
    {
        FUNC_6("%s has zero count, skipping.\n", FUNC_10(VAR_11->name));
        return VAR_1;
    }

    if (FUNC_15(VAR_11->type) == VAR_4)
        return VAR_0;

    VAR_17.direct_copy = FUNC_15(VAR_11->type) == VAR_19
            && !VAR_18.transpose && VAR_18.minor == VAR_18.major_stride
            && VAR_18.count == FUNC_13(VAR_17.table, VAR_17.register_count)
            && VAR_18.count * sizeof(unsigned int) <= VAR_11->bytes;
    if (VAR_18.minor_remainder && !VAR_17.direct_copy && !VAR_18.transpose)
        FUNC_3("Incomplete last row for not transposed matrix which cannot be directly copied, parameter %s.\n",
                FUNC_10(VAR_11->name));

    if (VAR_18.major_count > VAR_18.major
            || (VAR_18.major_count == VAR_18.major && VAR_18.minor_remainder))
    {
        FUNC_7("Constant dimensions exceed parameter size.\n");
        return VAR_0;
    }

    if (FUNC_2(VAR_20 = FUNC_8(VAR_8, &VAR_17)))
        return VAR_20;

    return VAR_1;
}
