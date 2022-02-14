
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* shader; } ;
struct wined3d_context {unsigned int shader_update_mask; } ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wined3d_context *VAR_2,
        const struct wined3d_state *VAR_3, DWORD VAR_4)
{



    VAR_2->shader_update_mask |= 1u << VAR_0;

    if (VAR_3->shader[VAR_1])
        VAR_2->shader_update_mask |= 1u << VAR_1;
}
