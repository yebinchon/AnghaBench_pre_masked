
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {TYPE_3__** shader; } ;
struct wined3d_context {unsigned int shader_update_mask; } ;
struct TYPE_4__ {int major; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
struct TYPE_6__ {TYPE_2__ reg_maps; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(struct wined3d_context *VAR_3,
        const struct wined3d_state *VAR_4, DWORD VAR_5)
{
    if (VAR_4->shader[VAR_1])
        VAR_3->shader_update_mask |= 1u << VAR_1;
    else if (VAR_4->shader[VAR_0])
        VAR_3->shader_update_mask |= 1u << VAR_0;
    else if (VAR_4->shader[VAR_2]
            && VAR_4->shader[VAR_2]->reg_maps.shader_version.major >= 4)
        VAR_3->shader_update_mask |= 1u << VAR_2;
}
