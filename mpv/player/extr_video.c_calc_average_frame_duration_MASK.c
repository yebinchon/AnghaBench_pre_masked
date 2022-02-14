
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int num_past_frames; TYPE_1__* past_frames; } ;
struct TYPE_2__ {double approx_duration; } ;



double FUNC_0(struct MPContext *VAR_0)
{
    double VAR_1 = 0;
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_past_frames; VAR_3++) {
        double VAR_4 = VAR_0->past_frames[VAR_3].approx_duration;
        if (VAR_4 <= 0)
            continue;
        VAR_1 += VAR_4;
        VAR_2 += 1;
    }
    return VAR_2 > 0 ? VAR_1 / VAR_2 : 0;
}
