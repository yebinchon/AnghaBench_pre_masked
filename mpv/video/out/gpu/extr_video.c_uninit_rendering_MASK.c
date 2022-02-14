
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_video {int num_hook_textures; int sc; int * hook_textures; int ra; TYPE_1__* surfaces; int * error_diffusion_tex; int output_tex; int screen_tex; int blend_subs_tex; int indirect_tex; int * integer_tex; int * scale_tex; int * merge_tex; int dither_texture; int * scaler; } ;
struct TYPE_2__ {int tex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gl_video*) ;
 int FUNC_2 (struct gl_video*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct gl_video*,int *) ;

__attribute__((used)) static void FUNC_5(struct gl_video *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_4(VAR_2, &VAR_2->scaler[VAR_3]);

    FUNC_3(VAR_2->ra, &VAR_2->dither_texture);

    for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        FUNC_3(VAR_2->ra, &VAR_2->merge_tex[VAR_4]);
        FUNC_3(VAR_2->ra, &VAR_2->scale_tex[VAR_4]);
        FUNC_3(VAR_2->ra, &VAR_2->integer_tex[VAR_4]);
    }

    FUNC_3(VAR_2->ra, &VAR_2->indirect_tex);
    FUNC_3(VAR_2->ra, &VAR_2->blend_subs_tex);
    FUNC_3(VAR_2->ra, &VAR_2->screen_tex);
    FUNC_3(VAR_2->ra, &VAR_2->output_tex);

    for (int VAR_5 = 0; VAR_5 < 2; VAR_5++)
        FUNC_3(VAR_2->ra, &VAR_2->error_diffusion_tex[VAR_5]);

    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        FUNC_3(VAR_2->ra, &VAR_2->surfaces[VAR_6].tex);

    for (int VAR_7 = 0; VAR_7 < VAR_2->num_hook_textures; VAR_7++)
        FUNC_3(VAR_2->ra, &VAR_2->hook_textures[VAR_7]);

    FUNC_2(VAR_2);
    FUNC_1(VAR_2);

    FUNC_0(VAR_2->sc);
}
