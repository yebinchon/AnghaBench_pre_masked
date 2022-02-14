
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct timer_pool {int running; scalar_t__* samples; size_t sample_idx; scalar_t__ sum; scalar_t__ peak; scalar_t__ sample_count; int timer; TYPE_2__* ra; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {scalar_t__ (* timer_stop ) (TYPE_2__*,int ) ;} ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(struct timer_pool *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_2(VAR_1->running);
    uint64_t VAR_2 = VAR_1->ra->fns->timer_stop(VAR_1->ra, VAR_1->timer);
    VAR_1->running = 0;

    if (VAR_2) {

        uint64_t VAR_3 = VAR_1->samples[VAR_1->sample_idx];
        VAR_1->sample_count = FUNC_1(VAR_1->sample_count + 1, VAR_0);
        VAR_1->samples[VAR_1->sample_idx++] = VAR_2;
        VAR_1->sample_idx %= VAR_0;
        VAR_1->sum = VAR_1->sum + VAR_2 - VAR_3;


        if (VAR_2 >= VAR_1->peak) {
            VAR_1->peak = VAR_2;
        } else if (VAR_1->peak == VAR_3) {


            uint64_t VAR_4 = VAR_2;
            for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
                VAR_4 = FUNC_0(VAR_4, VAR_1->samples[VAR_5]);
            VAR_1->peak = VAR_4;
        }
    }
}
