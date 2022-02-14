
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_7__ {TYPE_1__ shader_version; } ;
struct wined3d_shader {TYPE_3__ reg_maps; int output_signature; TYPE_2__* limits; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; } ;
struct TYPE_6__ {int packed_output; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,unsigned int,int ,int const*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct shader_glsl_priv*,struct wined3d_gl_info const*,int *,int *,int *,unsigned int,int *,TYPE_3__*,int ) ;
 int FUNC_5 (struct shader_glsl_priv*,unsigned int,int *,TYPE_3__*,char*,int ) ;
 int FUNC_6 (int,struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_7(struct shader_glsl_priv *VAR_1,
        const struct wined3d_shader *VAR_2, unsigned int VAR_3,
        const struct wined3d_gl_info *VAR_4, BOOL VAR_5, const DWORD *VAR_6)
{
    const char *VAR_7 = FUNC_3(VAR_2->reg_maps.shader_version.type);
    struct wined3d_string_buffer *VAR_8 = &VAR_1->shader_buffer;

    if (VAR_5)
        VAR_3 = FUNC_0(FUNC_6(4, VAR_4), VAR_3);

    if (VAR_3)
        FUNC_2(VAR_4, VAR_8, VAR_3, VAR_5, VAR_6);

    FUNC_1(VAR_8, "void setup_%s_output(in vec4 outputs[%u])\n{\n",
            VAR_7, VAR_2->limits->packed_output);

    if (VAR_5)
        FUNC_4(VAR_1, VAR_4, ((void*)0), ((void*)0),
                ((void*)0), VAR_3, &VAR_2->output_signature, &VAR_2->reg_maps, VAR_0);
    else
        FUNC_5(VAR_1, VAR_3, &VAR_2->output_signature,
                &VAR_2->reg_maps, "shader_out", VAR_5);

    FUNC_1(VAR_8, "}\n");
}
