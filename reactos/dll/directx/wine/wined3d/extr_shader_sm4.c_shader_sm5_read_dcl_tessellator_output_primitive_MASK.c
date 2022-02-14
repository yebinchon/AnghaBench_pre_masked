
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_2__ {int tessellator_output_primitive; } ;
struct wined3d_shader_instruction {TYPE_1__ declaration; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wined3d_shader_instruction *VAR_2,
        DWORD VAR_3, DWORD VAR_4, const DWORD *VAR_5, unsigned int VAR_6,
        struct wined3d_sm4_data *VAR_7)
{
    VAR_2->declaration.tessellator_output_primitive = (VAR_4 & VAR_0)
            >> VAR_1;
}
