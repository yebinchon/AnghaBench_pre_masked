
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct osd_state {struct mp_osd_render_opts* opts; } ;
struct TYPE_9__ {TYPE_1__* track; } ;
struct osd_object {TYPE_5__ ass; } ;
struct mp_osd_render_opts {double osd_bar_w; double osd_bar_h; int osd_bar_align_y; int osd_bar_align_x; int osd_style; } ;
struct TYPE_8__ {float Outline; int Alignment; scalar_t__ Shadow; } ;
struct TYPE_7__ {double PlayResY; double PlayResX; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Style ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (struct osd_state*,struct osd_object*,TYPE_5__*) ;
 float FUNC_3 (int ,double,float,float) ;
 TYPE_2__* FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_2__*,double,int ) ;

__attribute__((used)) static void FUNC_6(struct osd_state *VAR_0, struct osd_object *VAR_1,
                            float *VAR_2, float *VAR_3, float *VAR_4, float *VAR_5,
                            float *VAR_6)
{
    struct mp_osd_render_opts *VAR_7 = VAR_0->opts;

    FUNC_2(VAR_0, VAR_1, &VAR_1->ass);
    ASS_Track *VAR_8 = VAR_1->ass.track;

    ASS_Style *VAR_9 = FUNC_4(&VAR_1->ass, "progbar");
    if (!VAR_9) {
        *VAR_2 = *VAR_3 = *VAR_4 = *VAR_5 = *VAR_6 = 0;
        return;
    }

    FUNC_5(VAR_9, VAR_8->PlayResY, VAR_7->osd_style);

    *VAR_4 = VAR_8->PlayResX * (VAR_7->osd_bar_w / 100.0);
    *VAR_5 = VAR_8->PlayResY * (VAR_7->osd_bar_h / 100.0);

    float VAR_10 = 0.03125;
    VAR_9->Outline *= *VAR_5 / VAR_8->PlayResY / VAR_10;

    VAR_9->Outline = FUNC_1(VAR_9->Outline, *VAR_5 / 5.2);

    VAR_9->Outline = FUNC_0(VAR_9->Outline, *VAR_5 / 32.0);

    VAR_9->Shadow = 0;

    VAR_9->Alignment = 5;

    *VAR_6 = VAR_9->Outline;

    *VAR_2 = FUNC_3(VAR_7->osd_bar_align_x, VAR_8->PlayResX, *VAR_4, *VAR_6);
    *VAR_3 = FUNC_3(VAR_7->osd_bar_align_y, VAR_8->PlayResY, *VAR_5, *VAR_6);
}
