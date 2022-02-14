
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int time_t ;
struct machine_request_callback_data {scalar_t__ result; int * member_1; TYPE_4__* member_0; } ;
struct TYPE_13__ {char* guid; } ;
struct TYPE_12__ {int person_urls; int guid; } ;
struct TYPE_11__ {TYPE_1__* url; } ;
struct TYPE_10__ {int url; } ;
typedef TYPE_2__ REGISTRY_PERSON_URL ;
typedef TYPE_3__ REGISTRY_PERSON ;
typedef TYPE_4__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct machine_request_callback_data*) ;
 int FUNC_1 (char*,int ,char*,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 TYPE_4__* FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (char*,char*,char*,TYPE_3__**,TYPE_4__**) ;

REGISTRY_MACHINE *FUNC_5(char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, time_t VAR_6) {
    (void)VAR_6;

    char VAR_7[VAR_0 + 1];

    REGISTRY_PERSON *VAR_8 = ((void*)0);
    REGISTRY_MACHINE *VAR_9 = ((void*)0);
    REGISTRY_PERSON_URL *VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_8, &VAR_9);
    if(!VAR_10 || !VAR_8 || !VAR_9) return ((void*)0);


    if(FUNC_2(VAR_5, VAR_7) == -1) {
        FUNC_1("Registry Machine URLs request: invalid machine GUID, person: '%s', machine '%s', url '%s', request machine '%s'", VAR_8->guid, VAR_9->guid, VAR_10->url->url, VAR_5);
        return ((void*)0);
    }
    VAR_5 = VAR_7;


    VAR_9 = FUNC_3(VAR_5);
    if(!VAR_9) {
        FUNC_1("Registry Machine URLs request: machine not found, person: '%s', machine '%s', url '%s', request machine '%s'", VAR_8->guid, VAR_3, VAR_10->url->url, VAR_5);
        return ((void*)0);
    }






    struct machine_request_callback_data VAR_11 = { VAR_9, ((void*)0) };


    FUNC_0(&VAR_8->person_urls, VAR_1, &VAR_11);

    if(VAR_11.result)
        return VAR_9;

    return ((void*)0);
}
