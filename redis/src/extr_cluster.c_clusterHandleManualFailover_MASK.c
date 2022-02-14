
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {scalar_t__ mf_end; int mf_can_start; scalar_t__ mf_master_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void) {

    if (VAR_1.cluster->mf_end == 0) return;



    if (VAR_1.cluster->mf_can_start) return;

    if (VAR_1.cluster->mf_master_offset == 0) return;

    if (VAR_1.cluster->mf_master_offset == FUNC_0()) {


        VAR_1.cluster->mf_can_start = 1;
        FUNC_1(VAR_0,
            "All master replication stream processed, "
            "manual failover can start.");
    }
}
