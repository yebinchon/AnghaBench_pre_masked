
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_5__ {int data; } ;
struct web_client {TYPE_1__ response; } ;
struct registry_json_walk_person_urls_callback {int member_3; struct web_client* member_2; TYPE_2__* member_1; int * member_0; } ;
struct TYPE_7__ {int enabled; } ;
struct TYPE_6__ {int machine_urls; } ;
typedef int RRDHOST ;
typedef TYPE_2__ REGISTRY_MACHINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,struct registry_json_walk_person_urls_callback*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int *,struct web_client*,char*) ;
 int FUNC_3 (struct web_client*) ;
 int FUNC_4 (int *,struct web_client*,char*,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (char*,char*,char*,char*,int ) ;
 int FUNC_7 () ;

int FUNC_8(RRDHOST *VAR_4, struct web_client *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9, time_t VAR_10) {
    if(!VAR_2.enabled)
        return FUNC_2(VAR_4, VAR_5, "search");

    FUNC_5();

    REGISTRY_MACHINE *VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    if(!VAR_11) {
        FUNC_4(VAR_4, VAR_5, "search", VAR_0);
        FUNC_3(VAR_5);
        FUNC_7();
        return 404;
    }

    FUNC_4(VAR_4, VAR_5, "search", VAR_1);

    FUNC_0(VAR_5->response.data, ",\n\t\"urls\": [");
    struct registry_json_walk_person_urls_callback VAR_12 = { ((void*)0), VAR_11, VAR_5, 0 };
    FUNC_1(VAR_11->machine_urls, VAR_3, &VAR_12);
    FUNC_0(VAR_5->response.data, "\n\t]\n");

    FUNC_3(VAR_5);
    FUNC_7();
    return 200;
}
