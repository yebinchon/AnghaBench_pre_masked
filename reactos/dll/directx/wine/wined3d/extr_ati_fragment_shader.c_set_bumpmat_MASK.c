
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int ** texture_states; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct atifs_context_private_data* fragment_pipe_data; struct wined3d_gl_info* gl_info; } ;
struct atifs_context_private_data {TYPE_1__* last_shader; } ;
struct TYPE_2__ {scalar_t__* constants; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,float*) ;

__attribute__((used)) static void FUNC_5(struct wined3d_context *VAR_6, const struct wined3d_state *VAR_7, DWORD VAR_8)
{
    DWORD VAR_9 = (VAR_8 - FUNC_2(0, 0)) / (VAR_1 + 1);
    const struct wined3d_gl_info *VAR_10 = VAR_6->gl_info;
    float VAR_11[2][2];
    struct atifs_context_private_data *VAR_12 = VAR_6->fragment_pipe_data;

    if (!VAR_12->last_shader
            || VAR_12->last_shader->constants[VAR_9] != VAR_0)
        return;

    VAR_11[0][0] = *((float *)&VAR_7->texture_states[VAR_9][VAR_2]);
    VAR_11[1][0] = *((float *)&VAR_7->texture_states[VAR_9][VAR_3]);
    VAR_11[0][1] = *((float *)&VAR_7->texture_states[VAR_9][VAR_4]);
    VAR_11[1][1] = *((float *)&VAR_7->texture_states[VAR_9][VAR_5]);






    VAR_11[0][0] = (VAR_11[0][0] + 1.0f) * 0.5f;
    VAR_11[1][0] = (VAR_11[1][0] + 1.0f) * 0.5f;
    VAR_11[0][1] = (VAR_11[0][1] + 1.0f) * 0.5f;
    VAR_11[1][1] = (VAR_11[1][1] + 1.0f) * 0.5f;
    FUNC_1(FUNC_4(FUNC_0(VAR_9), (float *) VAR_11));
    FUNC_3("glSetFragmentShaderConstantATI(ATIFS_CONST_BUMPMAT(stage), mat)");
}
