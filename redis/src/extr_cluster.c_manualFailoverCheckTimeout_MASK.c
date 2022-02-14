
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {scalar_t__ mf_end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void) {
    if (VAR_1.cluster->mf_end && VAR_1.cluster->mf_end < FUNC_0()) {
        FUNC_2(VAR_0,"Manual failover timed out.");
        FUNC_1();
    }
}
