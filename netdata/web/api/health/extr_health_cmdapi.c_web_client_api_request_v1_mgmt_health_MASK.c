
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* data; } ;
struct web_client {char* auth_bearer_token; TYPE_1__ response; int id; } ;
struct TYPE_12__ {int all_alarms; scalar_t__ stype; int * silencers; } ;
struct TYPE_11__ {int contenttype; } ;
typedef int SILENCER ;
typedef int RRDHOST ;
typedef TYPE_2__ BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 void* VAR_23 ;
 char* VAR_24 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,char*,char*,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,char*,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 char* FUNC_11 (char**,char*) ;
 TYPE_3__* VAR_25 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(RRDHOST *VAR_26, struct web_client *VAR_27, char *VAR_28) {
    int VAR_29;
    (void) VAR_26;

    BUFFER *VAR_30 = VAR_27->response.data;
    FUNC_1(VAR_30);
    VAR_30->contenttype = VAR_1;

    FUNC_1(VAR_27->response.data);


    SILENCER *VAR_31 = ((void*)0);
    int VAR_32 = 1;

    if (!VAR_27->auth_bearer_token) {
        FUNC_3(VAR_30, VAR_11);
        VAR_29 = VAR_19;
    } else {
        FUNC_4(VAR_2, "HEALTH command API: Comparing secret '%s' to '%s'", VAR_27->auth_bearer_token, VAR_24);
        if (FUNC_12(VAR_27->auth_bearer_token, VAR_24)) {
            FUNC_3(VAR_30, VAR_11);
            VAR_29 = VAR_19;
        } else {
            while (VAR_28) {
                char *VAR_33 = FUNC_11(&VAR_28, "&");
                if (!VAR_33 || !*VAR_33) continue;

                char *VAR_34 = FUNC_11(&VAR_33, "=");
                if (!VAR_34 || !*VAR_34) continue;
                if (!VAR_33 || !*VAR_33) continue;

                FUNC_4(VAR_3, "%llu: API v1 health query param '%s' with value '%s'", VAR_27->id, VAR_34, VAR_33);


                if (!FUNC_12(VAR_34, "cmd")) {
                    if (!FUNC_12(VAR_33, VAR_9)) {
                        VAR_25->all_alarms = 1;
                        VAR_25->stype = VAR_23;
                        FUNC_3(VAR_30, VAR_17);
                    } else if (!FUNC_12(VAR_33, VAR_5)) {
                        VAR_25->all_alarms = 1;
                        VAR_25->stype = VAR_21;
                        FUNC_3(VAR_30, VAR_13);
                    } else if (!FUNC_12(VAR_33, VAR_8)) {
                        VAR_25->stype = VAR_23;
                        FUNC_3(VAR_30, VAR_16);
                    } else if (!FUNC_12(VAR_33, VAR_4)) {
                        VAR_25->stype = VAR_21;
                        FUNC_3(VAR_30, VAR_12);
                    } else if (!FUNC_12(VAR_33, VAR_7)) {
                        VAR_25->all_alarms = 0;
                        VAR_25->stype = VAR_22;
                        FUNC_5(VAR_25->silencers);
                        VAR_25->silencers = ((void*)0);
                        FUNC_3(VAR_30, VAR_15);
                    } else if (!FUNC_12(VAR_33, VAR_6)) {
                        VAR_27->response.data->contenttype = VAR_0;
                        FUNC_7(VAR_30);
                        VAR_32=0;
                    }
                } else {
                    VAR_31 = FUNC_9(VAR_31, VAR_34, VAR_33);
                }
            }

            if (FUNC_10(VAR_31)) {
                FUNC_8(VAR_31);
                FUNC_3(VAR_30, VAR_10);
                if (VAR_25->stype == VAR_22) {
                    FUNC_3(VAR_30, VAR_18);
                }
            }
            if (FUNC_13(VAR_25->stype != VAR_22 && !VAR_25->all_alarms && !VAR_25->silencers)) {
                FUNC_3(VAR_30, VAR_14);
            }
            VAR_29 = VAR_20;
        }
    }
    VAR_27->response.data = VAR_30;
    FUNC_2(VAR_27->response.data);
    if (VAR_29 == VAR_20 && VAR_32) {
        BUFFER *VAR_35 = FUNC_0(200);
        FUNC_7(VAR_35);
        FUNC_6(VAR_35);
    }

    return VAR_29;
}
