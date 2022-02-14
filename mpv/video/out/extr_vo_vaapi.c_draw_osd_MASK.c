
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int osd; int params; struct priv* priv; } ;
struct mp_osd_res {int dummy; } ;
struct TYPE_3__ {int fourcc; } ;
struct priv {size_t output_surface; TYPE_2__* osd_parts; struct mp_osd_res screen_osd_res; scalar_t__ osd_screen; TYPE_1__ osd_format; struct mp_image** output_surfaces; } ;
struct mp_image {double pts; } ;
struct TYPE_4__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mp_osd_res,double,int ,int ,int ,struct priv*) ;
 int VAR_2 ;
 struct mp_osd_res FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;

    struct mp_image *VAR_5 = VAR_4->output_surfaces[VAR_4->output_surface];
    double VAR_6 = VAR_5 ? VAR_5->pts : 0;

    if (!VAR_4->osd_format.fourcc)
        return;

    struct mp_osd_res VAR_7 = FUNC_1(VAR_3->params);

    struct mp_osd_res *VAR_8;
    if (VAR_4->osd_screen) {
        VAR_8 = &VAR_4->screen_osd_res;
    } else {
        VAR_8 = &VAR_7;
    }

    for (int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
        VAR_4->osd_parts[VAR_9].active = 0;
    FUNC_0(VAR_3->osd, *VAR_8, VAR_6, 0, VAR_2, VAR_1, VAR_4);
}
