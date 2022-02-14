
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gl_video_opts {scalar_t__ interpolation; int pbo; int shader_cache_dir; int background; } ;
struct gl_video {int dsi_warned; struct gl_video_opts opts; int global; TYPE_2__* ra; int sc; int clear_color; int force_clear_color; TYPE_1__* opts_cache; int cms; int use_lut_3d; } ;
struct TYPE_4__ {int use_pbo; } ;
struct TYPE_3__ {scalar_t__ opts; } ;


 int FUNC_0 (struct gl_video*,char*) ;
 int FUNC_1 (struct gl_video*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct gl_video*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int *,int*) ;
 int FUNC_6 (struct gl_video*) ;
 int FUNC_7 (struct gl_video*) ;

__attribute__((used)) static void FUNC_8(struct gl_video *VAR_1)
{
    VAR_1->use_lut_3d = FUNC_2(VAR_1->cms);




    VAR_1->opts = *(struct gl_video_opts *)VAR_1->opts_cache->opts;

    if (!VAR_1->force_clear_color)
        VAR_1->clear_color = VAR_1->opts.background;

    FUNC_1(VAR_1);
    FUNC_7(VAR_1);
    FUNC_3(VAR_1->sc, VAR_1->opts.shader_cache_dir);
    VAR_1->ra->use_pbo = VAR_1->opts.pbo;
    FUNC_4(VAR_1);
    FUNC_6(VAR_1);

    int VAR_2;
    FUNC_5(VAR_1->global, "video-sync", &VAR_0, &VAR_2);
    if (VAR_1->opts.interpolation && !VAR_2 && !VAR_1->dsi_warned) {
        FUNC_0(VAR_1, "Interpolation now requires enabling display-sync mode.\n"
                   "E.g.: --video-sync=display-resample\n");
        VAR_1->dsi_warned = 1;
    }
}
