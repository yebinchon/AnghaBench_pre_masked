
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_15__ {scalar_t__ last_t; int guid; int usages; int machine_urls; } ;
struct TYPE_14__ {scalar_t__ last_t; int flags; int usages; } ;
struct TYPE_13__ {int url; } ;
struct TYPE_12__ {int machines_urls_count; } ;
typedef TYPE_1__ REGISTRY_URL ;
typedef TYPE_2__ REGISTRY_MACHINE_URL ;
typedef TYPE_3__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_10__ VAR_2 ;
 TYPE_2__* FUNC_3 (TYPE_3__*,TYPE_1__*,scalar_t__) ;

REGISTRY_MACHINE_URL *FUNC_4(REGISTRY_MACHINE *VAR_3, REGISTRY_URL *VAR_4, time_t VAR_5) {
    FUNC_0(VAR_0, "registry_machine_link_to_url('%s', '%s'): searching for URL in machine", VAR_3->guid, VAR_4->url);

    REGISTRY_MACHINE_URL *VAR_6 = FUNC_1(VAR_3->machine_urls, VAR_4->url);
    if(!VAR_6) {
        FUNC_0(VAR_0, "registry_machine_link_to_url('%s', '%s'): not found", VAR_3->guid, VAR_4->url);
        VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
        VAR_2.machines_urls_count++;
    }
    else {
        FUNC_0(VAR_0, "registry_machine_link_to_url('%s', '%s'): found", VAR_3->guid, VAR_4->url);
        VAR_6->usages++;
        if(FUNC_2(VAR_6->last_t < (uint32_t)VAR_5)) VAR_6->last_t = (uint32_t)VAR_5;
    }

    VAR_3->usages++;
    if(FUNC_2(VAR_3->last_t < (uint32_t)VAR_5)) VAR_3->last_t = (uint32_t)VAR_5;

    if(VAR_6->flags & VAR_1) {
        FUNC_0(VAR_0, "registry_machine_link_to_url('%s', '%s'): accessing an expired URL.", VAR_3->guid, VAR_4->url);
        VAR_6->flags &= ~VAR_1;
    }

    return VAR_6;
}
