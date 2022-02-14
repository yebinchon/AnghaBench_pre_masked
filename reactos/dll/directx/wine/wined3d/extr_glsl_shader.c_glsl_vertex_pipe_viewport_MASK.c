
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* render_states; } ;
struct wined3d_context {int constant_update_mask; } ;
typedef int DWORD ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_state const*,int ) ;
 int FUNC_3 (struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_4,
        const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    if (!FUNC_3(VAR_4, FUNC_1(VAR_3)))
        FUNC_2(VAR_4, VAR_5, FUNC_1(VAR_3));
    if (!FUNC_3(VAR_4, FUNC_0(VAR_0))
            && VAR_5->render_states[VAR_0])
        VAR_4->constant_update_mask |= VAR_2;
    VAR_4->constant_update_mask |= VAR_1;
}
