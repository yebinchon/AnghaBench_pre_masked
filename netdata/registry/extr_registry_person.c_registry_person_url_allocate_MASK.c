
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_20__ {int guid; int links; } ;
struct TYPE_19__ {int guid; } ;
struct TYPE_18__ {int usages; int flags; TYPE_1__* url; scalar_t__ last_t; scalar_t__ first_t; TYPE_4__* machine; int machine_name; } ;
struct TYPE_17__ {int url; } ;
struct TYPE_16__ {size_t max_name_length; int persons_urls_memory; } ;
typedef TYPE_1__ REGISTRY_URL ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;
typedef TYPE_3__ REGISTRY_PERSON ;
typedef TYPE_4__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,...) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 TYPE_13__ VAR_2 ;
 TYPE_2__* FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,size_t) ;

REGISTRY_PERSON_URL *FUNC_7(REGISTRY_PERSON *VAR_3, REGISTRY_MACHINE *VAR_4, REGISTRY_URL *VAR_5, char *VAR_6, size_t VAR_7, time_t VAR_8) {
    FUNC_0(VAR_0, "registry_person_url_allocate('%s', '%s', '%s'): allocating %zu bytes", VAR_3->guid, VAR_4->guid, VAR_5->url, sizeof(REGISTRY_PERSON_URL) + VAR_7);


    if(VAR_7 > VAR_2.max_name_length)
        VAR_7 = VAR_2.max_name_length;

    REGISTRY_PERSON_URL *VAR_9 = FUNC_3(sizeof(REGISTRY_PERSON_URL) + VAR_7);



    FUNC_6(VAR_9->machine_name, VAR_6, VAR_7);

    VAR_9->machine = VAR_4;
    VAR_9->first_t = VAR_9->last_t = (uint32_t)VAR_8;
    VAR_9->usages = 1;
    VAR_9->url = VAR_5;
    VAR_9->flags = VAR_1;
    VAR_4->links++;

    VAR_2.persons_urls_memory += sizeof(REGISTRY_PERSON_URL) + VAR_7;

    FUNC_0(VAR_0, "registry_person_url_allocate('%s', '%s', '%s'): indexing URL in person", VAR_3->guid, VAR_4->guid, VAR_5->url);
    REGISTRY_PERSON_URL *VAR_10 = FUNC_4(VAR_3, VAR_9);
    if(VAR_10 != VAR_9) {
        FUNC_1("Registry: Attempted to add duplicate person url '%s' with name '%s' to person '%s'", VAR_5->url, VAR_6, VAR_3->guid);
        FUNC_2(VAR_9);
        VAR_9 = VAR_10;
    }
    else
        FUNC_5(VAR_5);

    return VAR_9;
}
