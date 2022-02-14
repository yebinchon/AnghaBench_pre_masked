
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {scalar_t__** texture_states; TYPE_1__** textures; } ;
struct TYPE_5__ {int (* p_glTexEnvi ) (int ,int ,int const) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; } ;
struct wined3d_context {unsigned int texShaderBumpMap; struct wined3d_gl_info* gl_info; } ;
struct TYPE_4__ {int target; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int const) ;
 int FUNC_2 (int ,int ,int const) ;
 int FUNC_3 (int ,int ,int const) ;
 int FUNC_4 (int ,int ,int const) ;
 int FUNC_5 (int ,int ,int const) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_state *VAR_9, DWORD VAR_10, struct wined3d_context *VAR_11)
{
    const struct wined3d_gl_info *VAR_12 = VAR_11->gl_info;
    BOOL VAR_13 = VAR_0;

    if (VAR_10 > 0
            && (VAR_9->texture_states[VAR_10 - 1][VAR_8] == VAR_7
            || VAR_9->texture_states[VAR_10 - 1][VAR_8] == VAR_6))
    {
        VAR_13 = VAR_5;
        VAR_11->texShaderBumpMap |= (1u << VAR_10);
    }
    else
    {
        VAR_11->texShaderBumpMap &= ~(1u << VAR_10);
    }

    if (VAR_9->textures[VAR_10])
    {
        switch (VAR_9->textures[VAR_10]->target)
        {
            case 131:
                VAR_12->gl_ops.gl.p_glTexEnvi(VAR_4, VAR_3,
                        VAR_13 ? VAR_2 : 131);
                FUNC_0("glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, ...)");
                break;
            case 128:
                VAR_12->gl_ops.gl.p_glTexEnvi(VAR_4, VAR_3,
                        VAR_13 ? VAR_2 : 128);
                FUNC_0("glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, ...)");
                break;
            case 130:
                VAR_12->gl_ops.gl.p_glTexEnvi(VAR_4, VAR_3, 130);
                FUNC_0("glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, GL_TEXTURE_3D)");
                break;
            case 129:
                VAR_12->gl_ops.gl.p_glTexEnvi(VAR_4, VAR_3, 129);
                FUNC_0("glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, GL_TEXTURE_CUBE_MAP_ARB)");
                break;
        }
    }
    else
    {
        VAR_12->gl_ops.gl.p_glTexEnvi(VAR_4, VAR_3, VAR_1);
        FUNC_0("glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, GL_NONE)");
    }
}
