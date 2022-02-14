
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {int dummy; } ;
struct TYPE_2__ {int data_type; } ;
struct wined3d_shader_dst_param {TYPE_1__ reg; } ;
struct glsl_dst_param {char* mask_str; char* reg_name; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int *,struct wined3d_shader_instruction const*) ;
 int FUNC_1 (struct wined3d_shader_dst_param const*,char*) ;

__attribute__((used)) static DWORD FUNC_2(const struct wined3d_shader_instruction *VAR_1,
        const struct wined3d_shader_dst_param *VAR_2, struct glsl_dst_param *VAR_3)
{
    BOOL VAR_4 = VAR_0;

    VAR_3->mask_str[0] = '\0';
    VAR_3->reg_name[0] = '\0';

    FUNC_0(&VAR_2->reg, VAR_2->reg.data_type,
            VAR_3->reg_name, &VAR_4, VAR_1);
    return FUNC_1(VAR_2, VAR_3->mask_str);
}
