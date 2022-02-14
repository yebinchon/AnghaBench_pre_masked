
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_internal {int internal_events; double reported_display_fps; double display_fps; int nominal_vsync_interval; int queued_events; int lock; int vsync_interval; } ;
struct vo {TYPE_2__* opts; TYPE_1__* driver; struct vo_internal* in; } ;
struct TYPE_4__ {double override_display_fps; } ;
struct TYPE_3__ {int (* control ) (struct vo*,int ,double*) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct vo*,char*,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vo*,int ,double*) ;
 int FUNC_5 (struct vo*) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_2)
{
    struct vo_internal *VAR_3 = VAR_2->in;
    FUNC_2(&VAR_3->lock);
    if (VAR_3->internal_events & VAR_1) {
        VAR_3->internal_events &= ~(unsigned)VAR_1;

        FUNC_3(&VAR_3->lock);

        double VAR_4 = 0;
        VAR_2->driver->control(VAR_2, VAR_0, &VAR_4);

        FUNC_2(&VAR_3->lock);

        VAR_3->reported_display_fps = VAR_4;
    }

    double VAR_5 = VAR_2->opts->override_display_fps;
    if (VAR_5 <= 0)
        VAR_5 = VAR_3->reported_display_fps;

    if (VAR_3->display_fps != VAR_5) {
        VAR_3->nominal_vsync_interval = VAR_5 > 0 ? 1e6 / VAR_5 : 0;
        VAR_3->vsync_interval = FUNC_0(VAR_3->nominal_vsync_interval, 1);
        VAR_3->display_fps = VAR_5;

        FUNC_1(VAR_2, "Assuming %f FPS for display sync.\n", VAR_5);


        VAR_3->queued_events |= VAR_1;
        FUNC_5(VAR_2);
    }

    FUNC_3(&VAR_3->lock);
}
