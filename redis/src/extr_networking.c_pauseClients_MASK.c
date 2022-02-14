
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_2__ {int clients_paused; scalar_t__ clients_pause_end_time; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(mstime_t VAR_1) {
    if (!VAR_0.clients_paused || VAR_1 > VAR_0.clients_pause_end_time)
        VAR_0.clients_pause_end_time = VAR_1;
    VAR_0.clients_paused = 1;
}
