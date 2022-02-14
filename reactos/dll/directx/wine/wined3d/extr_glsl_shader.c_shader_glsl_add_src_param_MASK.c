
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_type; } ;
struct wined3d_shader_src_param {TYPE_1__ reg; } ;
struct wined3d_shader_instruction {int dummy; } ;
struct glsl_src_param {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_shader_instruction const*,struct wined3d_shader_src_param const*,int ,struct glsl_src_param*,int ) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_shader_instruction *VAR_0,
        const struct wined3d_shader_src_param *VAR_1, DWORD VAR_2, struct glsl_src_param *VAR_3)
{
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_1->reg.data_type);
}
