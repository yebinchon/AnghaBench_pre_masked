
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {int url; } ;
struct TYPE_15__ {int guid; } ;
struct TYPE_14__ {int machine_name; TYPE_1__* machine; TYPE_4__* url; } ;
struct TYPE_13__ {int links; } ;
struct TYPE_12__ {int persons_urls_memory; } ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;
typedef TYPE_3__ REGISTRY_PERSON ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_10__ VAR_1 ;
 TYPE_2__* FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(REGISTRY_PERSON *VAR_2, REGISTRY_PERSON_URL *VAR_3) {
    FUNC_0(VAR_0, "registry_person_url_free('%s', '%s')", VAR_2->guid, VAR_3->url->url);

    REGISTRY_PERSON_URL *VAR_4 = FUNC_2(VAR_2, VAR_3);
    if(VAR_4) {
        FUNC_3(VAR_4->url);
        VAR_4->machine->links--;
        VAR_1.persons_urls_memory -= sizeof(REGISTRY_PERSON_URL) + FUNC_4(VAR_4->machine_name);
        FUNC_1(VAR_4);
    }
}
