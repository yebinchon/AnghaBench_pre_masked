
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct MPContext {TYPE_2__* demuxer; TYPE_1__* opts; } ;
struct TYPE_4__ {int duration; scalar_t__ start_time; } ;
struct TYPE_3__ {int rebase_start_time; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

double FUNC_1(struct MPContext *VAR_0, int VAR_1)
{
    double VAR_2 = 0;
    if (VAR_0->demuxer) {
        if (!VAR_0->opts->rebase_start_time)
            VAR_2 += VAR_0->demuxer->start_time;
        if (VAR_1 < 0)
            VAR_2 += FUNC_0(VAR_0->demuxer->duration, 0);
    }
    return VAR_2;
}
