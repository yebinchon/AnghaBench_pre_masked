
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {TYPE_10__* machines; TYPE_10__* persons; int enabled; } ;
struct TYPE_16__ {int url; } ;
struct TYPE_15__ {TYPE_2__* value; } ;
struct TYPE_14__ {int guid; TYPE_10__* machine_urls; TYPE_6__* url; } ;
struct TYPE_13__ {scalar_t__ root; } ;
struct TYPE_12__ {TYPE_1__ values_index; } ;
typedef TYPE_2__ REGISTRY_PERSON ;
typedef TYPE_2__ REGISTRY_MACHINE_URL ;
typedef TYPE_2__ REGISTRY_MACHINE ;
typedef TYPE_5__ NAME_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_8__ VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_6__*) ;

void FUNC_6(void) {
    if(!VAR_1.enabled) return;




    while(VAR_1.persons->values_index.root) {
        REGISTRY_PERSON *VAR_2 = ((NAME_VALUE *)VAR_1.persons->values_index.root)->value;
        FUNC_4(VAR_2);
    }

    while(VAR_1.machines->values_index.root) {
        REGISTRY_MACHINE *VAR_3 = ((NAME_VALUE *)VAR_1.machines->values_index.root)->value;



        while(VAR_3->machine_urls->values_index.root) {
            REGISTRY_MACHINE_URL *VAR_4 = ((NAME_VALUE *)VAR_3->machine_urls->values_index.root)->value;






            FUNC_0(VAR_0, "Registry: deleting url '%s' from person '%s'", VAR_4->url->url, VAR_3->guid);
            FUNC_1(VAR_3->machine_urls, VAR_4->url->url);

            FUNC_0(VAR_0, "Registry: unlinking url '%s' from machine", VAR_4->url->url);
            FUNC_5(VAR_4->url);

            FUNC_0(VAR_0, "Registry: freeing machine url");
            FUNC_3(VAR_4);
        }

        FUNC_0(VAR_0, "Registry: deleting machine '%s' from machines registry", VAR_3->guid);
        FUNC_1(VAR_1.machines, VAR_3->guid);

        FUNC_0(VAR_0, "Registry: destroying URL dictionary of machine '%s'", VAR_3->guid);
        FUNC_2(VAR_3->machine_urls);

        FUNC_0(VAR_0, "Registry: freeing machine '%s'", VAR_3->guid);
        FUNC_3(VAR_3);
    }



    FUNC_0(VAR_0, "Registry: destroying persons dictionary");
    FUNC_2(VAR_1.persons);

    FUNC_0(VAR_0, "Registry: destroying machines dictionary");
    FUNC_2(VAR_1.machines);
}
