
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; } ;
struct wined3d_shader_reg_maps {int texcoord; int input_registers; TYPE_1__ shader_version; } ;
typedef int DWORD ;


 unsigned int FUNC_0 (int) ;

unsigned int FUNC_1(const struct wined3d_shader_reg_maps *VAR_0, unsigned int VAR_1)
{
    DWORD VAR_2 = 1u << VAR_1;
    VAR_2 |= VAR_2 - 1;
    VAR_2 &= VAR_0->shader_version.major < 3 ? ~VAR_0->texcoord : ~VAR_0->input_registers;

    return FUNC_0(VAR_2);
}
