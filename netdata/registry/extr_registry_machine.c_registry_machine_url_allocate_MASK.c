
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_14__ {int machines_urls_memory; } ;
struct TYPE_13__ {int machine_urls; int guid; } ;
struct TYPE_12__ {int usages; int flags; TYPE_1__* url; scalar_t__ last_t; scalar_t__ first_t; } ;
struct TYPE_11__ {int url; } ;
typedef TYPE_1__ REGISTRY_URL ;
typedef TYPE_2__ REGISTRY_MACHINE_URL ;
typedef TYPE_3__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_8__ VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

REGISTRY_MACHINE_URL *FUNC_4(REGISTRY_MACHINE *VAR_3, REGISTRY_URL *VAR_4, time_t VAR_5) {
    FUNC_0(VAR_0, "registry_machine_url_allocate('%s', '%s'): allocating %zu bytes", VAR_3->guid, VAR_4->url, sizeof(REGISTRY_MACHINE_URL));

    REGISTRY_MACHINE_URL *VAR_6 = FUNC_2(sizeof(REGISTRY_MACHINE_URL));

    VAR_6->first_t = VAR_6->last_t = (uint32_t)VAR_5;
    VAR_6->usages = 1;
    VAR_6->url = VAR_4;
    VAR_6->flags = VAR_1;

    VAR_2.machines_urls_memory += sizeof(REGISTRY_MACHINE_URL);

    FUNC_0(VAR_0, "registry_machine_url_allocate('%s', '%s'): indexing URL in machine", VAR_3->guid, VAR_4->url);
    FUNC_1(VAR_3->machine_urls, VAR_4->url, VAR_6, sizeof(REGISTRY_MACHINE_URL));

    FUNC_3(VAR_4);

    return VAR_6;
}
