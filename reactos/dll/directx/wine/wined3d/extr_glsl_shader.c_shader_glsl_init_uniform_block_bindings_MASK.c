
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_2__ {int type; } ;
struct wined3d_shader_reg_maps {int * cb_sizes; TYPE_1__ shader_version; } ;
struct wined3d_gl_info {int limits; } ;
struct shader_glsl_priv {int string_buffers; } ;
typedef int GLuint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct wined3d_gl_info const*) ;
 struct wined3d_string_buffer* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct wined3d_string_buffer*) ;
 int FUNC_8 (struct wined3d_string_buffer*,char*,char const*,unsigned int) ;
 int FUNC_9 (int *,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_10(const struct wined3d_gl_info *VAR_0,
        struct shader_glsl_priv *VAR_1, GLuint VAR_2,
        const struct wined3d_shader_reg_maps *VAR_3)
{
    const char *VAR_4 = FUNC_4(VAR_3->shader_version.type);
    struct wined3d_string_buffer *VAR_5;
    unsigned int VAR_6, VAR_7, VAR_8;
    GLuint VAR_9;

    if (FUNC_5(VAR_0))
        return;

    VAR_5 = FUNC_6(&VAR_1->string_buffers);
    FUNC_9(&VAR_0->limits, VAR_3->shader_version.type, &VAR_7, &VAR_8);
    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6)
    {
        if (!VAR_3->cb_sizes[VAR_6])
            continue;

        FUNC_8(VAR_5, "block_%s_cb%u", VAR_4, VAR_6);
        VAR_9 = FUNC_0(FUNC_2(VAR_2, VAR_5->buffer));
        FUNC_0(FUNC_3(VAR_2, VAR_9, VAR_7 + VAR_6));
    }
    FUNC_1("glUniformBlockBinding");
    FUNC_7(&VAR_1->string_buffers, VAR_5);
}
