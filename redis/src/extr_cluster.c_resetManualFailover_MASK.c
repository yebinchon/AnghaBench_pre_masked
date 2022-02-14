
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; scalar_t__ clients_pause_end_time; } ;
struct TYPE_3__ {scalar_t__ mf_master_offset; int * mf_slave; scalar_t__ mf_can_start; scalar_t__ mf_end; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void) {
    if (VAR_0.cluster->mf_end && FUNC_0()) {
        VAR_0.clients_pause_end_time = 0;
        FUNC_0();
    }
    VAR_0.cluster->mf_end = 0;
    VAR_0.cluster->mf_can_start = 0;
    VAR_0.cluster->mf_slave = ((void*)0);
    VAR_0.cluster->mf_master_offset = 0;
}
