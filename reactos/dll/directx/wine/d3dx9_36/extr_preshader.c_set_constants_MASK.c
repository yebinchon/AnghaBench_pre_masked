
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_regstore {scalar_t__* tables; } ;
struct d3dx_parameter {unsigned int* data; int rows; int columns; int type; } ;
struct d3dx_const_tab {unsigned int const_set_count; struct d3dx_const_param_eval_output* const_set; int update_version; } ;
struct d3dx_const_param_eval_output {int table; unsigned int register_index; unsigned int register_count; scalar_t__ constant_class; unsigned int element_count; struct d3dx_parameter* param; scalar_t__ direct_copy; } ;
struct const_upload_info {unsigned int major_count; unsigned int minor; unsigned int major_stride; unsigned int major; unsigned int minor_remainder; scalar_t__ transpose; } ;
struct IDirect3DDevice9 {int dummy; } ;
typedef enum pres_value_type { ____Placeholder_pres_value_type } pres_value_type ;
typedef enum pres_reg_tables { ____Placeholder_pres_reg_tables } pres_reg_tables ;
typedef int ULONG64 ;
struct TYPE_2__ {int type; } ;
typedef int ID3DXEffectStateManager ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DXPARAMETER_TYPE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct d3dx_const_param_eval_output*,struct const_upload_info*) ;
 int FUNC_2 (int,unsigned int) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (struct d3dx_parameter*,int ) ;
 unsigned int FUNC_5 (int,int) ;
 int FUNC_6 (struct d3dx_regstore*,int,unsigned int,unsigned int*,int,int) ;
 int FUNC_7 (struct d3dx_regstore*,int,unsigned int*,unsigned int,int) ;
 int FUNC_8 (int *,struct IDirect3DDevice9*,int ,int,int *,unsigned int,unsigned int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static HRESULT FUNC_10(struct d3dx_regstore *VAR_5, struct d3dx_const_tab *VAR_6,
        ULONG64 VAR_7, ID3DXEffectStateManager *VAR_8, struct IDirect3DDevice9 *VAR_9,
        D3DXPARAMETER_TYPE VAR_10, BOOL VAR_11, BOOL VAR_12)
{
    unsigned int VAR_13;
    unsigned int VAR_14 = 0, VAR_15 = 0;
    enum pres_reg_tables VAR_16 = VAR_3;
    BOOL VAR_17 = VAR_8 || VAR_9;
    HRESULT VAR_18, VAR_19 = VAR_2;
    ULONG64 VAR_20 = VAR_6->update_version;

    for (VAR_13 = 0; VAR_13 < VAR_6->const_set_count; ++VAR_13)
    {
        struct d3dx_const_param_eval_output *VAR_21 = &VAR_6->const_set[VAR_13];
        enum pres_reg_tables VAR_22 = VAR_21->table;
        struct d3dx_parameter *VAR_23 = VAR_21->param;
        unsigned int VAR_24, VAR_25, VAR_26, VAR_27;
        struct const_upload_info VAR_28;
        unsigned int *VAR_29;
        enum pres_value_type VAR_30;

        if (!(VAR_23 && FUNC_4(VAR_23, VAR_20)))
            continue;

        VAR_29 = VAR_23->data;
        VAR_27 = FUNC_2(VAR_22, VAR_21->register_index);
        if (VAR_21->direct_copy)
        {
            FUNC_7(VAR_5, VAR_22, VAR_29, VAR_27,
                    FUNC_2(VAR_22, VAR_21->register_count));
            continue;
        }
        VAR_30 = FUNC_9(VAR_23->type);
        if (VAR_21->constant_class == VAR_0 || VAR_21->constant_class == VAR_1)
        {
            unsigned int VAR_31 = FUNC_5(VAR_23->rows, VAR_23->columns);

            if (VAR_31 >= FUNC_3(VAR_22))
            {
                FUNC_6(VAR_5, VAR_22, VAR_27, VAR_29,
                        VAR_31 * VAR_21->element_count, VAR_30);
            }
            else
            {
                for (VAR_24 = 0; VAR_24 < VAR_21->element_count; ++VAR_24)
                    FUNC_6(VAR_5, VAR_22, VAR_27 + FUNC_2(VAR_22, VAR_24),
                            &VAR_29[VAR_24 * VAR_31], VAR_31, VAR_30);
            }
            continue;
        }
        FUNC_1(VAR_21, &VAR_28);
        for (VAR_24 = 0; VAR_24 < VAR_21->element_count; ++VAR_24)
        {
            unsigned int *VAR_32 = (unsigned int *)VAR_5->tables[VAR_22] + VAR_27;



            if (VAR_28.transpose)
            {
                for (VAR_25 = 0; VAR_25 < VAR_28.major_count; ++VAR_25)
                    for (VAR_26 = 0; VAR_26 < VAR_28.minor; ++VAR_26)
                        VAR_32[VAR_25 * VAR_28.major_stride + VAR_26] = VAR_29[VAR_25 + VAR_26 * VAR_28.major];

                for (VAR_26 = 0; VAR_26 < VAR_28.minor_remainder; ++VAR_26)
                    VAR_32[VAR_25 * VAR_28.major_stride + VAR_26] = VAR_29[VAR_25 + VAR_26 * VAR_28.major];
            }
            else
            {
                for (VAR_25 = 0; VAR_25 < VAR_28.major_count; ++VAR_25)
                    for (VAR_26 = 0; VAR_26 < VAR_28.minor; ++VAR_26)
                        VAR_32[VAR_25 * VAR_28.major_stride + VAR_26] = VAR_29[VAR_25 * VAR_28.minor + VAR_26];
            }
            VAR_27 += FUNC_2(VAR_22, VAR_21->register_count);
            VAR_29 += VAR_23->rows * VAR_23->columns;
        }
        VAR_27 = FUNC_2(VAR_22, VAR_21->register_index);
        if (VAR_4[VAR_22].type != VAR_30)
            FUNC_6(VAR_5, VAR_22, VAR_27, (unsigned int *)VAR_5->tables[VAR_22] + VAR_27,
                    FUNC_2(VAR_22, VAR_21->register_count) * VAR_21->element_count, VAR_30);
    }
    VAR_6->update_version = VAR_7;
    if (!VAR_17)
        return VAR_2;

    for (VAR_13 = 0; VAR_13 < VAR_6->const_set_count; ++VAR_13)
    {
        struct d3dx_const_param_eval_output *VAR_33 = &VAR_6->const_set[VAR_13];

        if (VAR_11 || (VAR_33->param
                ? FUNC_4(VAR_33->param, VAR_20) : VAR_12))
        {
            enum pres_reg_tables VAR_34 = VAR_33->table;

            if (VAR_34 == VAR_16 && VAR_14 + VAR_15 == VAR_33->register_index)
            {
                VAR_15 += VAR_33->register_count * VAR_33->element_count;
            }
            else
            {
                if (VAR_15)
                {
                    if (FUNC_0(VAR_18 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_16,
                            (DWORD *)VAR_5->tables[VAR_16]
                            + FUNC_2(VAR_16, VAR_14), VAR_14, VAR_15)))
                        VAR_19 = VAR_18;
                }
                VAR_16 = VAR_34;
                VAR_14 = VAR_33->register_index;
                VAR_15 = VAR_33->register_count * VAR_33->element_count;
            }
        }
    }
    if (VAR_15)
    {
        if (FUNC_0(VAR_18 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_16,
                (DWORD *)VAR_5->tables[VAR_16]
                + FUNC_2(VAR_16, VAR_14), VAR_14, VAR_15)))
            VAR_19 = VAR_18;
    }
    return VAR_19;
}
