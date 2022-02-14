
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* render_states; } ;
struct wined3d_context {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_1, const struct wined3d_state *VAR_2, DWORD VAR_3)
{
    if (VAR_2->render_states[VAR_0])
        FUNC_0("sRGB writes are not supported by this fragment pipe.\n");
}
