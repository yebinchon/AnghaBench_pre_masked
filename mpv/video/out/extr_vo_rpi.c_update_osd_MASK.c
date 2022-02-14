
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_frame {int member_0; } ;
struct vo {struct priv* priv; } ;
struct ra_fbo {int flip; int tex; } ;
struct TYPE_3__ {int ra; } ;
struct TYPE_4__ {int h; int w; } ;
struct priv {int skip_osd; TYPE_1__ egl; int gl_video; int osd_pts; TYPE_2__ osd_res; int enable_osd; } ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ,struct vo_frame*,struct ra_fbo,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    if (!VAR_2->enable_osd)
        return;

    if (!FUNC_1(VAR_2->gl_video, &VAR_2->osd_res, VAR_2->osd_pts)) {
        VAR_2->skip_osd = 1;
        return;
    }

    FUNC_0(VAR_1, "start rpi_osd");

    struct vo_frame VAR_3 = {0};
    struct ra_fbo VAR_4 = {
        .tex = FUNC_4(VAR_2->egl.ra, 0, VAR_2->osd_res.w, VAR_2->osd_res.h),
        .flip = 1,
    };
    FUNC_3(VAR_2->gl_video, VAR_2->osd_pts);
    FUNC_2(VAR_2->gl_video, &VAR_3, VAR_4, VAR_0);
    FUNC_5(VAR_2->egl.ra, &VAR_4.tex);

    FUNC_0(VAR_1, "stop rpi_osd");
}
