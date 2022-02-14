
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int dummy; } ;
struct glsl_ds_program {int pos_fixup_location; } ;
typedef int GLuint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_gl_info *VAR_0,
        struct shader_glsl_priv *VAR_1, GLuint VAR_2, struct glsl_ds_program *VAR_3)
{
    VAR_3->pos_fixup_location = FUNC_0(FUNC_1(VAR_2, "pos_fixup"));
}
