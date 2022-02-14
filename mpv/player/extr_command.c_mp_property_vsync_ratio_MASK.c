
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_4__ {int num_past_frames; TYPE_1__* past_frames; int display_sync_active; int vo_chain; } ;
struct TYPE_3__ {int num_vsyncs; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (int,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct m_property *VAR_2,
                                   int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    if (!VAR_5->vo_chain || !VAR_5->display_sync_active)
        return VAR_0;

    int VAR_6 = 0, VAR_7 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_5->num_past_frames; VAR_8++) {
        int VAR_9 = VAR_5->past_frames[VAR_8].num_vsyncs;
        if (VAR_9 < 0)
            break;
        VAR_6 += VAR_9;
        VAR_7 += 1;
    }

    if (!VAR_7)
        return VAR_0;

    return FUNC_0(VAR_3, VAR_4, VAR_6 / (double)VAR_7);
}
