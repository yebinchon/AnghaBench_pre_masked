
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int importing_slots_from; int migrating_slots_to; } ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void) {
    FUNC_0(VAR_0.cluster->migrating_slots_to,0,
        sizeof(VAR_0.cluster->migrating_slots_to));
    FUNC_0(VAR_0.cluster->importing_slots_from,0,
        sizeof(VAR_0.cluster->importing_slots_from));
}
