
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_2__ {int type; } ;
struct wined3d_shader_reg_maps {TYPE_1__ shader_version; struct wined3d_shader_immediate_constant_buffer* icb; } ;
struct wined3d_shader_immediate_constant_buffer {scalar_t__ data; int vec4_count; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int string_buffers; } ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLfloat ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int const*) ;
 char* FUNC_4 (int ) ;
 struct wined3d_string_buffer* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct wined3d_string_buffer*) ;
 int FUNC_7 (struct wined3d_string_buffer*,char*,char const*) ;

__attribute__((used)) static void FUNC_8(const struct wined3d_gl_info *VAR_0, struct shader_glsl_priv *VAR_1,
        GLuint VAR_2, const struct wined3d_shader_reg_maps *VAR_3)
{
    const struct wined3d_shader_immediate_constant_buffer *VAR_4 = VAR_3->icb;

    if (VAR_4)
    {
        struct wined3d_string_buffer *VAR_5 = FUNC_5(&VAR_1->string_buffers);
        const char *VAR_6 = FUNC_4(VAR_3->shader_version.type);
        GLint VAR_7;

        FUNC_7(VAR_5, "%s_icb", VAR_6);
        VAR_7 = FUNC_0(FUNC_2(VAR_2, VAR_5->buffer));
        FUNC_0(FUNC_3(VAR_7, VAR_4->vec4_count, (const GLfloat *)VAR_4->data));
        FUNC_1("Load immediate constant buffer");

        FUNC_6(&VAR_1->string_buffers, VAR_5);
    }
}
