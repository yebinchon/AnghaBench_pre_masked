
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct TYPE_6__ {int msc; int ust; } ;
struct TYPE_5__ {int last_queue_display_time; int skipped_vsyncs; } ;
struct priv {int paused; TYPE_3__ vsync; TYPE_2__ vsync_info; int kms; } ;
struct TYPE_4__ {int want_redraw; } ;





 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ra_ctx *VAR_2, int *VAR_3, int VAR_4,
                           void *VAR_5)
{
    struct priv *VAR_6 = VAR_2->priv;
    switch (VAR_4) {
    case 130: {
        double VAR_7 = FUNC_0(VAR_6->kms);
        if (VAR_7 <= 0)
            break;
        *(double*)VAR_5 = VAR_7;
        return VAR_1;
    }
    case 129:
        VAR_2->vo->want_redraw = 1;
        VAR_6->paused = 1;
        return VAR_1;
    case 128:
        VAR_6->paused = 0;
        VAR_6->vsync_info.last_queue_display_time = -1;
        VAR_6->vsync_info.skipped_vsyncs = 0;
        VAR_6->vsync.ust = 0;
        VAR_6->vsync.msc = 0;
        return VAR_1;
    }
    return VAR_0;
}
