
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vo {int want_redraw; int params; int config_ok; struct priv* priv; } ;
struct TYPE_4__ {int msc; int ust; } ;
struct TYPE_3__ {int last_queue_display_time; int skipped_vsyncs; } ;
struct priv {int paused; TYPE_2__ vsync; TYPE_1__ vsync_info; int kms; int cur_frame; } ;
struct mp_image {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 struct mp_image* FUNC_1 (int ) ;
 int FUNC_2 (struct vo*,int ) ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_2, uint32_t VAR_3, void *VAR_4)
{
    struct priv *VAR_5 = VAR_2->priv;
    switch (VAR_3) {
    case 129:
        *(struct mp_image**)VAR_4 = FUNC_1(VAR_5->cur_frame);
        return VAR_1;
    case 128:
        if (VAR_2->config_ok)
            FUNC_2(VAR_2, VAR_2->params);
        return VAR_1;
    case 132: {
        double VAR_6 = FUNC_0(VAR_5->kms);
        if (VAR_6 <= 0)
            break;
        *(double*)VAR_4 = VAR_6;
        return VAR_1;
    }
    case 131:
        VAR_2->want_redraw = 1;
        VAR_5->paused = 1;
        return VAR_1;
    case 130:
        VAR_5->paused = 0;
        VAR_5->vsync_info.last_queue_display_time = -1;
        VAR_5->vsync_info.skipped_vsyncs = 0;
        VAR_5->vsync.ust = 0;
        VAR_5->vsync.msc = 0;
        return VAR_1;
    }
    return VAR_0;
}
