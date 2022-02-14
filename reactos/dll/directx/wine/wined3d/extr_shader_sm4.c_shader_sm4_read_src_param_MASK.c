
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct wined3d_shader_src_param {int swizzle; TYPE_1__ reg; int modifiers; } ;
typedef enum wined3d_sm4_swizzle_type { ____Placeholder_wined3d_sm4_swizzle_type } wined3d_sm4_swizzle_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int const*,int const*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_3 (struct wined3d_sm4_data*,int const**,int const*,int,TYPE_1__*,int *) ;

__attribute__((used)) static BOOL FUNC_4(struct wined3d_sm4_data *VAR_8, const DWORD **VAR_9, const DWORD *VAR_10,
        enum wined3d_data_type VAR_11, struct wined3d_shader_src_param *VAR_12)
{
    DWORD VAR_13;

    if (*VAR_9 >= VAR_10)
    {
        FUNC_2("Invalid ptr %p >= end %p.\n", *VAR_9, VAR_10);
        return VAR_0;
    }
    VAR_13 = **VAR_9;

    if (!FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, &VAR_12->reg, &VAR_12->modifiers))
    {
        FUNC_0("Failed to read parameter.\n");
        return VAR_0;
    }

    if (VAR_12->reg.type == VAR_2)
    {
        VAR_12->swizzle = VAR_3;
    }
    else
    {
        enum wined3d_sm4_swizzle_type VAR_14 =
                (VAR_13 & VAR_6) >> VAR_7;

        switch (VAR_14)
        {
            case 130:
                VAR_12->swizzle = VAR_3;
                break;

            case 129:
                VAR_12->swizzle = (VAR_13 & VAR_4) >> VAR_5;
                VAR_12->swizzle = (VAR_12->swizzle & 0x3) * 0x55;
                break;

            case 128:
                VAR_12->swizzle = (VAR_13 & VAR_4) >> VAR_5;
                break;

            default:
                FUNC_1("Unhandled swizzle type %#x.\n", VAR_14);
                break;
        }
    }

    return VAR_1;
}
