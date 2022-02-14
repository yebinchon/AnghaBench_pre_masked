
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int dummy; } ;
struct wined3d_context {unsigned int shader_update_mask; int last_was_pshader; } ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, DWORD VAR_3)
{
    VAR_1->last_was_pshader = FUNC_0(VAR_2);

    VAR_1->shader_update_mask |= 1u << VAR_0;
}
