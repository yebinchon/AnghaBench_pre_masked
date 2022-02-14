
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct MPContext {int num_past_frames; TYPE_1__* opts; TYPE_2__* past_frames; } ;
struct TYPE_4__ {double approx_duration; } ;
struct TYPE_3__ {double playback_speed; } ;


 scalar_t__ FUNC_0 (double,double) ;

__attribute__((used)) static double FUNC_1(struct MPContext *VAR_0, double VAR_1)
{
    double VAR_2 = 0;
    int VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_0->num_past_frames; VAR_4++) {
        double VAR_5 = VAR_0->past_frames[VAR_4].approx_duration;
        if (VAR_5 <= 0)
            continue;
        VAR_2 += FUNC_0(VAR_1, VAR_5 / VAR_0->opts->playback_speed);
        VAR_3++;
    }
    return VAR_3 > 0 ? VAR_2 / VAR_3 : 1;
}
