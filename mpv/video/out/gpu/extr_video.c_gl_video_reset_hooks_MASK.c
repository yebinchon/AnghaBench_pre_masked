
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gl_video {int num_tex_hooks; int num_user_textures; TYPE_1__* user_textures; int ra; TYPE_2__* tex_hooks; } ;
struct TYPE_4__ {int priv; } ;
struct TYPE_3__ {int tex; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_tex_hooks; VAR_1++)
        FUNC_1(VAR_0->tex_hooks[VAR_1].priv);

    for (int VAR_2 = 0; VAR_2 < VAR_0->num_user_textures; VAR_2++)
        FUNC_0(VAR_0->ra, &VAR_0->user_textures[VAR_2].tex);

    VAR_0->num_tex_hooks = 0;
    VAR_0->num_user_textures = 0;
}
