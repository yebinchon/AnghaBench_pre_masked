
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_3__ {int immconst_data; } ;
struct wined3d_shader_register {unsigned int type; int data_type; TYPE_1__ u; int immconst_type; TYPE_2__* idx; } ;
typedef enum wined3d_sm4_register_type { ____Placeholder_wined3d_sm4_register_type } wined3d_sm4_register_type ;
typedef enum wined3d_sm4_immconst_type { ____Placeholder_wined3d_sm4_immconst_type } wined3d_sm4_immconst_type ;
typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_4__ {unsigned int offset; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,int const*,int const*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct wined3d_sm4_data*,struct wined3d_shader_register*) ;
 int FUNC_5 (int ,int const*,int) ;
 unsigned int* VAR_21 ;
 int FUNC_6 (struct wined3d_sm4_data*,int const**,int const*,int,TYPE_2__*) ;

__attribute__((used)) static BOOL FUNC_7(struct wined3d_sm4_data *VAR_22, const DWORD **VAR_23, const DWORD *VAR_24,
        enum wined3d_data_type VAR_25, struct wined3d_shader_register *VAR_26,
        enum wined3d_shader_src_modifier *VAR_27)
{
    enum wined3d_sm4_register_type VAR_28;
    DWORD VAR_29, VAR_30;

    if (*VAR_23 >= VAR_24)
    {
        FUNC_3("Invalid ptr %p >= end %p.\n", *VAR_23, VAR_24);
        return VAR_0;
    }
    VAR_29 = *(*VAR_23)++;

    VAR_28 = (VAR_29 & VAR_18) >> VAR_19;
    if (VAR_28 >= FUNC_0(VAR_21)
            || VAR_21[VAR_28] == ~0u)
    {
        FUNC_2("Unhandled register type %#x.\n", VAR_28);
        VAR_26->type = VAR_2;
    }
    else
    {
        VAR_26->type = VAR_21[VAR_28];
    }
    VAR_26->data_type = VAR_25;

    if (VAR_29 & VAR_15)
    {
        DWORD VAR_31;

        if (*VAR_23 >= VAR_24)
        {
            FUNC_3("Invalid ptr %p >= end %p.\n", *VAR_23, VAR_24);
            return VAR_0;
        }
        VAR_31 = *(*VAR_23)++;

        switch (VAR_31)
        {
            case 0x41:
                *VAR_27 = VAR_5;
                break;

            case 0x81:
                *VAR_27 = VAR_3;
                break;

            case 0xc1:
                *VAR_27 = VAR_4;
                break;

            default:
                FUNC_2("Skipping modifier 0x%08x.\n", VAR_31);
                *VAR_27 = VAR_6;
                break;
        }
    }
    else
    {
        *VAR_27 = VAR_6;
    }

    VAR_30 = (VAR_29 & VAR_16) >> VAR_17;

    if (VAR_30 < 1)
        VAR_26->idx[0].offset = ~0U;
    else
    {
        DWORD VAR_32 = (VAR_29 & VAR_9) >> VAR_11;
        if (!(FUNC_6(VAR_22, VAR_23, VAR_24, VAR_32, &VAR_26->idx[0])))
        {
            FUNC_1("Failed to read register index.\n");
            return VAR_0;
        }
    }

    if (VAR_30 < 2)
        VAR_26->idx[1].offset = ~0U;
    else
    {
        DWORD VAR_33 = (VAR_29 & VAR_10) >> VAR_12;
        if (!(FUNC_6(VAR_22, VAR_23, VAR_24, VAR_33, &VAR_26->idx[1])))
        {
            FUNC_1("Failed to read register index.\n");
            return VAR_0;
        }
    }

    if (VAR_30 > 2)
        FUNC_2("Unhandled order %u.\n", VAR_30);

    if (VAR_28 == VAR_20)
    {
        enum wined3d_sm4_immconst_type VAR_34 =
                (VAR_29 & VAR_13) >> VAR_14;

        switch (VAR_34)
        {
            case 129:
                VAR_26->immconst_type = VAR_7;
                if (VAR_24 - *VAR_23 < 1)
                {
                    FUNC_3("Invalid ptr %p, end %p.\n", *VAR_23, VAR_24);
                    return VAR_0;
                }
                FUNC_5(VAR_26->u.immconst_data, *VAR_23, 1 * sizeof(DWORD));
                *VAR_23 += 1;
                break;

            case 128:
                VAR_26->immconst_type = VAR_8;
                if (VAR_24 - *VAR_23 < 4)
                {
                    FUNC_3("Invalid ptr %p, end %p.\n", *VAR_23, VAR_24);
                    return VAR_0;
                }
                FUNC_5(VAR_26->u.immconst_data, *VAR_23, 4 * sizeof(DWORD));
                *VAR_23 += 4;
                break;

            default:
                FUNC_2("Unhandled immediate constant type %#x.\n", VAR_34);
                break;
        }
    }

    FUNC_4(VAR_22, VAR_26);

    return VAR_1;
}
