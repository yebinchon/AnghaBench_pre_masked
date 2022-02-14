
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_4__ {int type; } ;
struct wined3d_shader_reg_maps {TYPE_1__* uav_resource_info; TYPE_2__ shader_version; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int string_buffers; } ;
struct TYPE_3__ {int type; } ;
typedef int GLuint ;
typedef int GLint ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,unsigned int) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wined3d_gl_info const*) ;
 struct wined3d_string_buffer* FUNC_7 (int *) ;
 int FUNC_8 (int *,struct wined3d_string_buffer*) ;
 int FUNC_9 (struct wined3d_string_buffer*,char*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_10(const struct wined3d_gl_info *VAR_1, struct shader_glsl_priv *VAR_2,
        GLuint VAR_3, const struct wined3d_shader_reg_maps *VAR_4)
{
    const char *VAR_5 = FUNC_5(VAR_4->shader_version.type);
    struct wined3d_string_buffer *VAR_6;
    GLint VAR_7;
    unsigned int VAR_8;

    if (FUNC_6(VAR_1))
        return;

    VAR_6 = FUNC_7(&VAR_2->string_buffers);
    for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
    {
        if (!VAR_4->uav_resource_info[VAR_8].type)
            continue;

        FUNC_9(VAR_6, "%s_image%u", VAR_5, VAR_8);
        VAR_7 = FUNC_0(FUNC_3(VAR_3, VAR_6->buffer));
        if (VAR_7 == -1)
            continue;

        FUNC_1("Loading image %s on unit %u.\n", VAR_6->buffer, VAR_8);
        FUNC_0(FUNC_4(VAR_7, VAR_8));
    }
    FUNC_2("Load image bindings");
    FUNC_8(&VAR_2->string_buffers, VAR_6);
}
