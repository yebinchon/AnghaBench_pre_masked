
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_version {int type; } ;
struct wined3d_shader_reg_maps {struct wined3d_shader_version shader_version; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct shader_glsl_priv {int dummy; } ;
typedef int GLuint ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (struct wined3d_context const*,struct wined3d_shader_version const*,unsigned int*,unsigned int*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct wined3d_gl_info const*,struct shader_glsl_priv*,int ,char const*,unsigned int,unsigned int,int const*) ;
 scalar_t__ FUNC_3 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_context *VAR_1,
        struct shader_glsl_priv *VAR_2, GLuint VAR_3, const struct wined3d_shader_reg_maps *VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_1->gl_info;
    const struct wined3d_shader_version *VAR_6;
    const DWORD *VAR_7;
    unsigned int VAR_8, VAR_9;
    const char *VAR_10;

    if (FUNC_3(VAR_5))
        return;

    VAR_6 = VAR_4 ? &VAR_4->shader_version : ((void*)0);
    VAR_10 = FUNC_1(VAR_6 ? VAR_6->type : VAR_0);
    VAR_7 = FUNC_0(VAR_1, VAR_6, &VAR_8, &VAR_9);
    FUNC_2(VAR_5, VAR_2, VAR_3, VAR_10, VAR_8, VAR_9, VAR_7);
}
