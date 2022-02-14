
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* inst_metric; } ;
struct TYPE_3__ {void* last_sample_time; long long last_sample_count; long long* samples; size_t idx; } ;


 size_t VAR_0 ;
 void* FUNC_0 () ;
 TYPE_2__ VAR_1 ;

void FUNC_1(int VAR_2, long long VAR_3) {
    long long VAR_4 = FUNC_0() - VAR_1.inst_metric[VAR_2].last_sample_time;
    long long VAR_5 = VAR_3 -
                    VAR_1.inst_metric[VAR_2].last_sample_count;
    long long VAR_6;

    VAR_6 = VAR_4 > 0 ? (VAR_5*1000/VAR_4) : 0;

    VAR_1.inst_metric[VAR_2].samples[VAR_1.inst_metric[VAR_2].idx] =
        VAR_6;
    VAR_1.inst_metric[VAR_2].idx++;
    VAR_1.inst_metric[VAR_2].idx %= VAR_0;
    VAR_1.inst_metric[VAR_2].last_sample_time = FUNC_0();
    VAR_1.inst_metric[VAR_2].last_sample_count = VAR_3;
}
