
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* render_states; } ;
struct wined3d_context {unsigned int shader_update_mask; int constant_update_mask; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct wined3d_context *VAR_5,
        const struct wined3d_state *VAR_6, DWORD VAR_7)
{

    if (VAR_6->render_states[VAR_1]
            && VAR_6->render_states[VAR_2] != VAR_0)
        VAR_5->shader_update_mask |= 1u << VAR_4;
    VAR_5->constant_update_mask |= VAR_3;
}
