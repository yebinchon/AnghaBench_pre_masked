
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int dummy; } ;
struct wined3d_shader_dst_param {size_t shift; } ;
struct glsl_dst_param {int mask_str; int reg_name; } ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;





 int FUNC_1 (struct wined3d_string_buffer*,char*,int ,int ,int ) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,struct glsl_dst_param*) ;
 int * VAR_0 ;

__attribute__((used)) static DWORD FUNC_3(struct wined3d_string_buffer *VAR_1,
        const struct wined3d_shader_instruction *VAR_2, const struct wined3d_shader_dst_param *VAR_3,
        enum wined3d_data_type VAR_4)
{
    struct glsl_dst_param VAR_5;
    DWORD VAR_6;

    if ((VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_5)))
    {
        switch (VAR_4)
        {
            case 132:
                FUNC_1(VAR_1, "%s%s = %s(",
                        VAR_5.reg_name, VAR_5.mask_str, VAR_0[VAR_3->shift]);
                break;
            case 131:
                FUNC_1(VAR_1, "%s%s = %sintBitsToFloat(",
                        VAR_5.reg_name, VAR_5.mask_str, VAR_0[VAR_3->shift]);
                break;
            case 130:
            case 129:
            case 128:
                FUNC_1(VAR_1, "%s%s = %suintBitsToFloat(",
                        VAR_5.reg_name, VAR_5.mask_str, VAR_0[VAR_3->shift]);
                break;
            default:
                FUNC_0("Unhandled data type %#x.\n", VAR_4);
                FUNC_1(VAR_1, "%s%s = %s(",
                        VAR_5.reg_name, VAR_5.mask_str, VAR_0[VAR_3->shift]);
                break;
        }
    }

    return VAR_6;
}
