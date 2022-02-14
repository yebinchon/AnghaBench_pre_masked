
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int data; } ;
struct web_client {TYPE_1__ response; } ;
struct registry_person_url_callback_verify_machine_exists_data {scalar_t__ count; int member_1; int * member_0; } ;
struct TYPE_8__ {int enabled; } ;
struct TYPE_7__ {int guid; int person_urls; } ;
typedef int RRDHOST ;
typedef TYPE_2__ REGISTRY_PERSON ;
typedef int REGISTRY_MACHINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct registry_person_url_callback_verify_machine_exists_data*) ;
 int FUNC_1 (int ,char*,int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (int *,struct web_client*,char*) ;
 int FUNC_3 (struct web_client*) ;
 int FUNC_4 (int *,struct web_client*,char*,int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (char*) ;
 TYPE_2__* FUNC_7 (char*) ;
 int VAR_3 ;
 int FUNC_8 (struct web_client*,TYPE_2__*) ;
 int FUNC_9 () ;

int FUNC_10(RRDHOST *VAR_4, struct web_client *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9, time_t VAR_10) {
    if(!VAR_2.enabled)
        return FUNC_2(VAR_4, VAR_5, "switch");

    (void)VAR_8;
    (void)VAR_10;

    FUNC_5();

    REGISTRY_PERSON *VAR_11 = FUNC_7(VAR_6);
    if(!VAR_11) {
        FUNC_4(VAR_4, VAR_5, "switch", VAR_0);
        FUNC_3(VAR_5);
        FUNC_9();
        return 430;
    }

    REGISTRY_PERSON *VAR_12 = FUNC_7(VAR_9);
    if(!VAR_12) {
        FUNC_4(VAR_4, VAR_5, "switch", VAR_0);
        FUNC_3(VAR_5);
        FUNC_9();
        return 431;
    }

    REGISTRY_MACHINE *VAR_13 = FUNC_6(VAR_7);
    if(!VAR_13) {
        FUNC_4(VAR_4, VAR_5, "switch", VAR_0);
        FUNC_3(VAR_5);
        FUNC_9();
        return 432;
    }

    struct registry_person_url_callback_verify_machine_exists_data VAR_14 = { VAR_13, 0 };


    FUNC_0(&VAR_11->person_urls, VAR_3, &VAR_14);
    if(!VAR_14.count) {
        FUNC_4(VAR_4, VAR_5, "switch", VAR_0);
        FUNC_3(VAR_5);
        FUNC_9();
        return 433;
    }


    VAR_14.count = 0;
    FUNC_0(&VAR_12->person_urls, VAR_3, &VAR_14);
    if(!VAR_14.count) {
        FUNC_4(VAR_4, VAR_5, "switch", VAR_0);
        FUNC_3(VAR_5);
        FUNC_9();
        return 434;
    }



    FUNC_8(VAR_5, VAR_12);


    FUNC_4(VAR_4, VAR_5, "switch", VAR_1);
    FUNC_1(VAR_5->response.data, ",\n\t\"person_guid\": \"%s\"", VAR_12->guid);
    FUNC_3(VAR_5);

    FUNC_9();
    return 200;
}
