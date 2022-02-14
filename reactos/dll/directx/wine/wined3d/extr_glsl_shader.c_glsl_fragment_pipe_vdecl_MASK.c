
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_2 (struct wined3d_context*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, DWORD VAR_4)
{

    if (VAR_2->gl_info->limits.glsl_varyings < FUNC_3(VAR_2->gl_info))
        VAR_2->shader_update_mask |= 1u << VAR_1;

    if (!FUNC_2(VAR_2, FUNC_0(VAR_0)))
        FUNC_1(VAR_2, VAR_3, VAR_4);
}
