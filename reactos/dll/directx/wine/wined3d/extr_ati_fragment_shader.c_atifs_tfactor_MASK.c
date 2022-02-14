
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int * render_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct atifs_context_private_data* fragment_pipe_data; struct wined3d_gl_info* gl_info; } ;
struct wined3d_color {int r; } ;
struct atifs_context_private_data {TYPE_1__* last_shader; } ;
struct TYPE_2__ {scalar_t__* constants; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t,int *) ;
 int FUNC_3 (struct wined3d_color*,int ) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5, DWORD VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_4->gl_info;
    struct atifs_context_private_data *VAR_8 = VAR_4->fragment_pipe_data;
    struct wined3d_color VAR_9;

    if (!VAR_8->last_shader
            || VAR_8->last_shader->constants[VAR_1 - VAR_2] != VAR_0)
        return;

    FUNC_3(&VAR_9, VAR_5->render_states[VAR_3]);
    FUNC_0(FUNC_2(VAR_1, &VAR_9.r));
    FUNC_1("glSetFragmentShaderConstantATI(ATIFS_CONST_TFACTOR, &color.r)");
}
