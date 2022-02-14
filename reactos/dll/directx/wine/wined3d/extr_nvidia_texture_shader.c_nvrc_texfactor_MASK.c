
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int * render_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_color {int r; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wined3d_color*,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_2, const struct wined3d_state *VAR_3, DWORD VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_2->gl_info;
    struct wined3d_color VAR_6;

    FUNC_2(&VAR_6, VAR_3->render_states[VAR_1]);
    FUNC_0(FUNC_1(VAR_0, &VAR_6.r));
}
