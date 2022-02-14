
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int time_t ;
struct TYPE_18__ {int guid; } ;
struct TYPE_17__ {int guid; } ;
struct TYPE_16__ {TYPE_14__* url; } ;
struct TYPE_15__ {int url; } ;
typedef TYPE_1__ REGISTRY_PERSON_URL ;
typedef TYPE_2__ REGISTRY_PERSON ;
typedef TYPE_3__ REGISTRY_MACHINE ;


 int FUNC_0 (char*,int ,int ,int ,char*) ;
 char* FUNC_1 (char*,int *) ;
 int FUNC_2 (char,TYPE_2__*,TYPE_3__*,TYPE_14__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_5 (char*,char*,char*,TYPE_2__**,TYPE_3__**) ;

REGISTRY_PERSON *FUNC_6(char *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3, time_t VAR_4) {
    (void) VAR_4;

    REGISTRY_PERSON *VAR_5 = ((void*)0);
    REGISTRY_MACHINE *VAR_6 = ((void*)0);
    REGISTRY_PERSON_URL *VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_5, &VAR_6);
    if(!VAR_7 || !VAR_5 || !VAR_6) return ((void*)0);


    VAR_3 = FUNC_1(VAR_3, ((void*)0));
    REGISTRY_PERSON_URL *VAR_8 = FUNC_4(VAR_5, VAR_3);
    if(!VAR_8) {
        FUNC_0("Registry Delete Request: URL not found for person: '%s', machine '%s', url '%s', delete url '%s'", VAR_5->guid
             , VAR_6->guid, VAR_7->url->url, VAR_3);
        return ((void*)0);
    }

    FUNC_2('D', VAR_5, VAR_6, VAR_7->url, VAR_8->url->url);
    FUNC_3(VAR_5, VAR_8);

    return VAR_5;
}
