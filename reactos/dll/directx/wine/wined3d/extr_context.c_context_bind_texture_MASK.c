
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* p_glBindTexture ) (int const,int ) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; } ;
struct wined3d_dummy_textures {int tex_2d_ms_array; int tex_2d_ms; int tex_buffer; int tex_3d; int tex_cube_array; int tex_cube; int tex_rect; int tex_2d_array; int tex_2d; int tex_1d_array; int tex_1d; } ;
struct wined3d_context {size_t active_texture; size_t* texture_type; struct wined3d_gl_info* gl_info; TYPE_1__* device; } ;
struct TYPE_4__ {struct wined3d_dummy_textures dummy_textures; } ;
typedef int GLuint ;
typedef size_t GLenum ;
typedef size_t DWORD ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int const,int ) ;
 int FUNC_4 (int const,int ) ;
 int FUNC_5 (int const,int ) ;
 int FUNC_6 (int const,int ) ;
 int FUNC_7 (int const,int ) ;
 int FUNC_8 (int const,int ) ;
 int FUNC_9 (int const,int ) ;
 int FUNC_10 (int const,int ) ;
 int FUNC_11 (int const,int ) ;
 int FUNC_12 (int const,int ) ;
 int FUNC_13 (int const,int ) ;

void FUNC_14(struct wined3d_context *VAR_0, GLenum VAR_1, GLuint VAR_2)
{
    const struct wined3d_dummy_textures *VAR_3 = &VAR_0->device->dummy_textures;
    const struct wined3d_gl_info *VAR_4 = VAR_0->gl_info;
    DWORD VAR_5 = VAR_0->active_texture;
    DWORD VAR_6 = VAR_0->texture_type[VAR_5];

    if (VAR_2)
    {
        VAR_4->gl_ops.gl.p_glBindTexture(VAR_1, VAR_2);
    }
    else
    {
        VAR_1 = 139;
    }

    if (VAR_6 != VAR_1)
    {
        switch (VAR_6)
        {
            case 139:

                break;
            case 138:
                VAR_4->gl_ops.gl.p_glBindTexture(138, VAR_3->tex_1d);
                FUNC_1("glBindTexture");
                break;
            case 137:
                VAR_4->gl_ops.gl.p_glBindTexture(137, VAR_3->tex_1d_array);
                FUNC_1("glBindTexture");
                break;
            case 136:
                VAR_4->gl_ops.gl.p_glBindTexture(136, VAR_3->tex_2d);
                break;
            case 135:
                VAR_4->gl_ops.gl.p_glBindTexture(135, VAR_3->tex_2d_array);
                break;
            case 128:
                VAR_4->gl_ops.gl.p_glBindTexture(128, VAR_3->tex_rect);
                break;
            case 130:
                VAR_4->gl_ops.gl.p_glBindTexture(130, VAR_3->tex_cube);
                break;
            case 129:
                VAR_4->gl_ops.gl.p_glBindTexture(129, VAR_3->tex_cube_array);
                break;
            case 132:
                VAR_4->gl_ops.gl.p_glBindTexture(132, VAR_3->tex_3d);
                break;
            case 131:
                VAR_4->gl_ops.gl.p_glBindTexture(131, VAR_3->tex_buffer);
                break;
            case 134:
                VAR_4->gl_ops.gl.p_glBindTexture(134, VAR_3->tex_2d_ms);
                break;
            case 133:
                VAR_4->gl_ops.gl.p_glBindTexture(133, VAR_3->tex_2d_ms_array);
                break;
            default:
                FUNC_0("Unexpected texture target %#x.\n", VAR_6);
        }

        VAR_0->texture_type[VAR_5] = VAR_1;
    }

    FUNC_1("bind texture");
}
