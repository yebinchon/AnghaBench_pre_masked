
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tex_hook {scalar_t__* bind_tex; } ;
struct image {int dummy; } ;
struct gl_video {int num_user_textures; int num_pass_imgs; int sc; struct gl_user_shader_tex* user_textures; } ;
struct gl_user_shader_tex {int tex; int name; } ;


 int FUNC_0 (struct gl_video*,char*,char const*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct gl_video*,char const*,int,struct image) ;
 int FUNC_4 (struct gl_video*,struct image) ;
 int FUNC_5 (struct gl_video*,char*,struct image*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static bool FUNC_7(struct gl_video *VAR_1, const char *VAR_2,
                                  struct image VAR_3, struct tex_hook *VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        char *VAR_6 = (char *)VAR_4->bind_tex[VAR_5];

        if (!VAR_6)
            continue;


        if (FUNC_6(VAR_6, "HOOKED") == 0) {
            int VAR_7 = FUNC_4(VAR_1, VAR_3);
            FUNC_3(VAR_1, "HOOKED", VAR_7, VAR_3);
            FUNC_3(VAR_1, VAR_2, VAR_7, VAR_3);
            continue;
        }




        for (int VAR_8 = 0; VAR_8 < VAR_1->num_user_textures; VAR_8++) {
            struct gl_user_shader_tex *VAR_9 = &VAR_1->user_textures[VAR_8];
            if (FUNC_1(VAR_9->name, VAR_6)) {
                FUNC_2(VAR_1->sc, VAR_6, VAR_9->tex);
                goto next_bind;
            }
        }

        struct image VAR_10;
        if (!FUNC_5(VAR_1, VAR_6, &VAR_10)) {

            FUNC_0(VAR_1, "Skipping hook on %s due to no texture named %s.\n",
                     VAR_2, VAR_6);
            VAR_1->num_pass_imgs -= VAR_5;
            return 0;
        }

        FUNC_3(VAR_1, VAR_6, FUNC_4(VAR_1, VAR_10), VAR_10);

next_bind: ;
    }

    return 1;
}
