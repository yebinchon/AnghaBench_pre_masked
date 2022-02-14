
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int ** texture_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct atifs_context_private_data* fragment_pipe_data; struct wined3d_gl_info* gl_info; } ;
struct wined3d_color {int r; } ;
struct atifs_context_private_data {TYPE_1__* last_shader; } ;
struct TYPE_2__ {scalar_t__* constants; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct wined3d_color*,int ) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_3, const struct wined3d_state *VAR_4, DWORD VAR_5)
{
    DWORD VAR_6 = (VAR_5 - FUNC_2(0, 0)) / (VAR_1 + 1);
    const struct wined3d_gl_info *VAR_7 = VAR_3->gl_info;
    struct atifs_context_private_data *VAR_8 = VAR_3->fragment_pipe_data;
    struct wined3d_color VAR_9;

    if (!VAR_8->last_shader
            || VAR_8->last_shader->constants[VAR_6] != VAR_0)
        return;

    FUNC_5(&VAR_9, VAR_4->texture_states[VAR_6][VAR_2]);
    FUNC_1(FUNC_4(FUNC_0(VAR_6), &VAR_9.r));
    FUNC_3("glSetFragmentShaderConstantATI(ATIFS_CONST_STAGE(stage), &color.r)");
}
