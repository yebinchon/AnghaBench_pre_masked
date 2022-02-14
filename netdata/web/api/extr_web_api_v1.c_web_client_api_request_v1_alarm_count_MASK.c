
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
struct web_client {TYPE_1__ response; int id; } ;
struct TYPE_7__ {int contenttype; } ;
typedef int RRDHOST ;
typedef int RRDCALC_STATUS ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,char*,int ,char*,char*) ;
 int FUNC_7 (int *,TYPE_2__*,int *,int ) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 (char*,char*) ;
 char FUNC_10 (char) ;

inline int FUNC_11(RRDHOST *VAR_9, struct web_client *VAR_10, char *VAR_11) {
    RRDCALC_STATUS VAR_12 = VAR_4;
    BUFFER *VAR_13 = ((void*)0);

    FUNC_1(VAR_10->response.data);
    FUNC_4(VAR_10->response.data, "[");

    while(VAR_11) {
        char *VAR_14 = FUNC_8(&VAR_11, "&");
        if(!VAR_14 || !*VAR_14) continue;

        char *VAR_15 = FUNC_8(&VAR_14, "=");
        if(!VAR_15 || !*VAR_15) continue;
        if(!VAR_14 || !*VAR_14) continue;

        FUNC_6(VAR_1, "%llu: API v1 alarm_count query param '%s' with value '%s'", VAR_10->id, VAR_15, VAR_14);

        char* VAR_16 = VAR_14;
        if(!FUNC_9(VAR_15, "status")) {
            while ((*VAR_16 = FUNC_10(*VAR_16))) VAR_16++;
            if (!FUNC_9("CRITICAL", VAR_14)) VAR_12 = VAR_3;
            else if (!FUNC_9("WARNING", VAR_14)) VAR_12 = VAR_8;
            else if (!FUNC_9("UNINITIALIZED", VAR_14)) VAR_12 = VAR_7;
            else if (!FUNC_9("UNDEFINED", VAR_14)) VAR_12 = VAR_6;
            else if (!FUNC_9("REMOVED", VAR_14)) VAR_12 = VAR_5;
            else if (!FUNC_9("CLEAR", VAR_14)) VAR_12 = VAR_2;
        }
        else if(!FUNC_9(VAR_15, "context") || !FUNC_9(VAR_15, "ctx")) {
            if(!VAR_13) VAR_13 = FUNC_0(255);
            FUNC_5(VAR_13, "|");
            FUNC_5(VAR_13, VAR_14);
        }
    }

    FUNC_7(VAR_9, VAR_10->response.data, VAR_13, VAR_12);

    FUNC_4(VAR_10->response.data, "]\n");
    VAR_10->response.data->contenttype = VAR_0;
    FUNC_3(VAR_10->response.data);

    FUNC_2(VAR_13);
    return 200;
}
