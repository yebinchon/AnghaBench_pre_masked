
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tex_hook {void* save_tex; void** bind_tex; void** hook_tex; struct gl_user_shader_hook* priv; int cond; int hook; int align_offset; int components; } ;
struct gl_video {int num_tex_hooks; int tex_hooks; } ;
struct gl_user_shader_hook {int * bind_tex; int * hook_tex; int align_offset; int components; int save_tex; } ;


 int FUNC_0 (struct gl_video*,int ,int ,struct tex_hook) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct gl_user_shader_hook*,int ) ;
 struct gl_user_shader_hook* VAR_2 ;
 struct gl_user_shader_hook* FUNC_2 (struct gl_video*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_3(void *VAR_5, struct gl_user_shader_hook VAR_6)
{
    struct gl_video *VAR_7 = VAR_5;
    struct gl_user_shader_hook *VAR_8 = FUNC_2(VAR_7, VAR_8);
    *VAR_8 = VAR_6;

    struct tex_hook VAR_9 = {
        .save_tex = FUNC_1(VAR_8, VAR_6.save_tex),
        .components = VAR_6.components,
        .align_offset = VAR_6.align_offset,
        .hook = VAR_3,
        .cond = VAR_4,
        .priv = VAR_8,
    };

    for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
        VAR_9.hook_tex[VAR_10] = FUNC_1(VAR_8, VAR_6.hook_tex[VAR_10]);
    for (int VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
        VAR_9.bind_tex[VAR_11] = FUNC_1(VAR_8, VAR_6.bind_tex[VAR_11]);

    FUNC_0(VAR_7, VAR_7->tex_hooks, VAR_7->num_tex_hooks, VAR_9);
    return 1;
}
