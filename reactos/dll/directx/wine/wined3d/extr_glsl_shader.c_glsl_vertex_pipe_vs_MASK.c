
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int dummy; } ;
struct wined3d_context {unsigned int shader_update_mask; } ;
typedef int DWORD ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_1 (struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, DWORD VAR_4)
{
    VAR_2->shader_update_mask |= 1u << VAR_1;

    if (!FUNC_1(VAR_2, VAR_0))
        FUNC_0(VAR_2, VAR_3, VAR_0);
}
