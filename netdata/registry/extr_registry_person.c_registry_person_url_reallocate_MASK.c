
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_19__ {int guid; } ;
struct TYPE_18__ {int guid; } ;
struct TYPE_17__ {char* machine_name; int flags; int usages; int last_t; int first_t; int machine; } ;
struct TYPE_16__ {int url; } ;
typedef TYPE_1__ REGISTRY_URL ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;
typedef TYPE_3__ REGISTRY_PERSON ;
typedef TYPE_4__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_1__*,char*,size_t,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

REGISTRY_PERSON_URL *FUNC_3(REGISTRY_PERSON *VAR_1, REGISTRY_MACHINE *VAR_2, REGISTRY_URL *VAR_3, char *VAR_4, size_t VAR_5, time_t VAR_6, REGISTRY_PERSON_URL *VAR_7) {
    FUNC_0(VAR_0, "registry_person_url_reallocate('%s', '%s', '%s'): allocating %zu bytes", VAR_1->guid, VAR_2->guid, VAR_3->url, sizeof(REGISTRY_PERSON_URL) + VAR_5);


    REGISTRY_PERSON_URL VAR_8 = {
            .first_t = VAR_7->first_t,
            .last_t = VAR_7->last_t,
            .usages = VAR_7->usages,
            .flags = VAR_7->flags,
            .machine = VAR_7->machine,
            .machine_name = ""
    };


    FUNC_2(VAR_1, VAR_7);
    VAR_7 = &VAR_8;


    REGISTRY_PERSON_URL *VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    VAR_9->first_t = VAR_7->first_t;
    VAR_9->last_t = VAR_7->last_t;
    VAR_9->usages = VAR_7->usages;
    VAR_9->flags = VAR_7->flags;

    return VAR_9;
}
