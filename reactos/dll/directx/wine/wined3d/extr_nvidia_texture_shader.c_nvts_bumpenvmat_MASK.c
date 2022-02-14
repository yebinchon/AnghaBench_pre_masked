
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {int ** texture_states; } ;
struct TYPE_5__ {int (* p_glTexEnvfv ) (int ,int ,float*) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct TYPE_4__ {int textures; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; TYPE_1__ limits; } ;
struct wined3d_context {int* tex_unit_map; struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_gl_info const*,int) ;
 int FUNC_3 (int ,int ,float*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_7, const struct wined3d_state *VAR_8, DWORD VAR_9)
{
    DWORD VAR_10 = (VAR_9 - FUNC_0(0, 0)) / (VAR_2 + 1);
    DWORD VAR_11 = VAR_7->tex_unit_map[VAR_10 + 1];
    const struct wined3d_gl_info *VAR_12 = VAR_7->gl_info;
    float VAR_13[2][2];







    if (VAR_11 < VAR_12->limits.textures)
    {
        FUNC_2(VAR_7, VAR_12, VAR_11);



        VAR_13[0][0] = *((float *)&VAR_8->texture_states[VAR_10][VAR_3]);
        VAR_13[1][0] = *((float *)&VAR_8->texture_states[VAR_10][VAR_4]);
        VAR_13[0][1] = *((float *)&VAR_8->texture_states[VAR_10][VAR_5]);
        VAR_13[1][1] = *((float *)&VAR_8->texture_states[VAR_10][VAR_6]);
        VAR_12->gl_ops.gl.p_glTexEnvfv(VAR_1, VAR_0, (float *)VAR_13);
        FUNC_1("glTexEnvfv(GL_TEXTURE_SHADER_NV, GL_OFFSET_TEXTURE_MATRIX_NV, mat)");
    }
}
