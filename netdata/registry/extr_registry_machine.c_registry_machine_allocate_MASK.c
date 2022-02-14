
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_7__ {int machines_memory; int machines; int machines_count; } ;
struct TYPE_6__ {int guid; scalar_t__ usages; scalar_t__ last_t; scalar_t__ first_t; int machine_urls; } ;
typedef TYPE_1__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (int ,char const*,int ) ;

REGISTRY_MACHINE *FUNC_5(const char *VAR_4, time_t VAR_5) {
    FUNC_0(VAR_1, "Registry: registry_machine_allocate('%s'): creating new machine, sizeof(MACHINE)=%zu", VAR_4, sizeof(REGISTRY_MACHINE));

    REGISTRY_MACHINE *VAR_6 = FUNC_3(sizeof(REGISTRY_MACHINE));

    FUNC_4(VAR_6->guid, VAR_4, VAR_2);

    FUNC_0(VAR_1, "Registry: registry_machine_allocate('%s'): creating dictionary of urls", VAR_4);
    VAR_6->machine_urls = FUNC_1(VAR_0);

    VAR_6->first_t = VAR_6->last_t = (uint32_t)VAR_5;
    VAR_6->usages = 0;

    VAR_3.machines_memory += sizeof(REGISTRY_MACHINE);

    VAR_3.machines_count++;
    FUNC_2(VAR_3.machines, VAR_6->guid, VAR_6, sizeof(REGISTRY_MACHINE));

    return VAR_6;
}
