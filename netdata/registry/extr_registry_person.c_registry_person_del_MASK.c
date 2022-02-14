
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int persons; } ;
struct TYPE_7__ {scalar_t__ root; } ;
struct TYPE_8__ {int guid; TYPE_1__ person_urls; } ;
typedef int REGISTRY_PERSON_URL ;
typedef TYPE_2__ REGISTRY_PERSON ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_3 (TYPE_2__*,int *) ;

void FUNC_4(REGISTRY_PERSON *VAR_2) {
    FUNC_0(VAR_0, "Registry: registry_person_del('%s'): creating dictionary of urls", VAR_2->guid);

    while(VAR_2->person_urls.root)
        FUNC_3(VAR_2, (REGISTRY_PERSON_URL *)VAR_2->person_urls.root);

    FUNC_0(VAR_0, "Registry: deleting person '%s' from persons registry", VAR_2->guid);
    FUNC_1(VAR_1.persons, VAR_2->guid);

    FUNC_0(VAR_0, "Registry: freeing person '%s'", VAR_2->guid);
    FUNC_2(VAR_2);
}
