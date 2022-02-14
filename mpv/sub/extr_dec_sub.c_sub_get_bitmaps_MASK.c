
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sub_bitmaps {int dummy; } ;
struct mp_subtitle_opts {scalar_t__ sub_visibility; } ;
struct mp_osd_res {int dummy; } ;
struct dec_sub {double last_vo_pts; double end; TYPE_2__* sd; struct mp_subtitle_opts* opts; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* get_bitmaps ) (TYPE_2__*,struct mp_osd_res,int,double,struct sub_bitmaps*) ;} ;


 double VAR_0 ;
 double FUNC_0 (struct dec_sub*,double) ;
 int FUNC_1 (TYPE_2__*,struct mp_osd_res,int,double,struct sub_bitmaps*) ;
 int FUNC_2 (struct dec_sub*) ;

void FUNC_3(struct dec_sub *VAR_1, struct mp_osd_res VAR_2, int VAR_3,
                     double VAR_4, struct sub_bitmaps *VAR_5)
{
    struct mp_subtitle_opts *VAR_6 = VAR_1->opts;

    VAR_4 = FUNC_0(VAR_1, VAR_4);

    VAR_1->last_vo_pts = VAR_4;
    FUNC_2(VAR_1);

    if (VAR_1->end != VAR_0 && VAR_4 >= VAR_1->end)
        return;

    if (VAR_6->sub_visibility && VAR_1->sd->driver->get_bitmaps)
        VAR_1->sd->driver->get_bitmaps(VAR_1->sd, VAR_2, VAR_3, VAR_4, VAR_5);
}
