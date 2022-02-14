
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct osd_style_opts {int font_size; } ;
struct osd_state {struct mp_osd_render_opts* opts; } ;
struct TYPE_7__ {TYPE_1__* track; } ;
struct TYPE_6__ {double h; } ;
struct osd_object {TYPE_3__ ass; TYPE_2__ vo_res; } ;
struct mp_osd_render_opts {int osd_scale_by_window; int osd_scale; struct osd_style_opts* osd_style; } ;
struct TYPE_5__ {double PlayResY; } ;
typedef int ASS_Style ;


 int FUNC_0 (struct osd_state*,struct osd_object*,TYPE_3__*) ;
 int * FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (int *,double,struct osd_style_opts*) ;

__attribute__((used)) static ASS_Style *FUNC_3(struct osd_state *VAR_0, struct osd_object *VAR_1)
{
    struct mp_osd_render_opts *VAR_2 = VAR_0->opts;

    FUNC_0(VAR_0, VAR_1, &VAR_1->ass);

    struct osd_style_opts VAR_3 = *VAR_2->osd_style;
    VAR_3.font_size *= VAR_2->osd_scale;

    double VAR_4 = VAR_1->ass.track->PlayResY;

    if (!VAR_2->osd_scale_by_window)
        VAR_4 *= 720.0 / VAR_1->vo_res.h;

    ASS_Style *VAR_5 = FUNC_1(&VAR_1->ass, "OSD");
    FUNC_2(VAR_5, VAR_4, &VAR_3);
    return VAR_5;
}
