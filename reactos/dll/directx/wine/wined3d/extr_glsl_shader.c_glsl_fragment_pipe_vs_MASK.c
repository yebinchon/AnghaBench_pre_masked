
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_context {unsigned int shader_update_mask; TYPE_2__* gl_info; } ;
struct TYPE_3__ {scalar_t__ glsl_varyings; } ;
struct TYPE_4__ {TYPE_1__ limits; } ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, DWORD VAR_3)
{

    if (VAR_1->gl_info->limits.glsl_varyings < FUNC_0(VAR_1->gl_info))
        VAR_1->shader_update_mask |= 1u << VAR_0;
}
