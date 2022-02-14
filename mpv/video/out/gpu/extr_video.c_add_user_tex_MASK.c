
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_video {int num_user_textures; int user_textures; int ra; } ;
struct TYPE_2__ {int initial_data; } ;
struct gl_user_shader_tex {int tex; TYPE_1__ params; } ;


 int FUNC_0 (struct gl_video*,int ,int ,struct gl_user_shader_tex) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, struct gl_user_shader_tex VAR_1)
{
    struct gl_video *VAR_2 = VAR_0;

    VAR_1.tex = FUNC_2(VAR_2->ra, &VAR_1.params);
    FUNC_1(&VAR_1.params.initial_data);

    if (!VAR_1.tex)
        return 0;

    FUNC_0(VAR_2, VAR_2->user_textures, VAR_2->num_user_textures, VAR_1);
    return 1;
}
