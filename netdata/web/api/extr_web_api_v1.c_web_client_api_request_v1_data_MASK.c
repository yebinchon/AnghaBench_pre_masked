
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_8__ {int * data; int header; } ;
struct web_client {TYPE_2__ response; int id; } ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_9__ {TYPE_1__ last_updated; int last_accessed_time; } ;
typedef TYPE_3__ RRDSET ;
typedef int RRDHOST ;
typedef int BUFFER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ,char*,...) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char**,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_3__*,int *,int *,scalar_t__,int,long long,long long,int,long,scalar_t__,scalar_t__*) ;
 TYPE_3__* FUNC_12 (int *,char*) ;
 TYPE_3__* FUNC_13 (int *,char*) ;
 int FUNC_14 (char*) ;
 void* FUNC_15 (char*) ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*,int *,int ) ;
 scalar_t__ FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*) ;
 int FUNC_20 (char*,int) ;
 scalar_t__ FUNC_21 (char*) ;

inline int FUNC_22(RRDHOST *VAR_8, struct web_client *VAR_9, char *VAR_10) {
    FUNC_7(VAR_3, "%llu: API v1 data with URL '%s'", VAR_9->id, VAR_10);

    int VAR_11 = VAR_5;
    BUFFER *VAR_12 = ((void*)0);

    FUNC_1(VAR_9->response.data);

    char *VAR_13 = "0.6",
            *VAR_14 = "0",
            *VAR_15 = "0",
            *VAR_16 = "json",
            *VAR_17 = ((void*)0),
            *VAR_18 = ((void*)0);

    time_t VAR_19 = 0, VAR_20 = 0;

    char *VAR_21 = ((void*)0)
    , *VAR_22 = ((void*)0)
    , *VAR_23 = ((void*)0)
    , *VAR_24 = ((void*)0)
    , *VAR_25 = ((void*)0);

    int VAR_26 = VAR_7;
    uint32_t VAR_27 = VAR_1;
    uint32_t VAR_28 = 0x00000000;

    while(VAR_10) {
        char *VAR_29 = FUNC_9(&VAR_10, "&");
        if(!VAR_29 || !*VAR_29) continue;

        char *VAR_30 = FUNC_9(&VAR_29, "=");
        if(!VAR_30 || !*VAR_30) continue;
        if(!VAR_29 || !*VAR_29) continue;

        FUNC_7(VAR_3, "%llu: API v1 data query param '%s' with value '%s'", VAR_9->id, VAR_30, VAR_29);




        if(!FUNC_16(VAR_30, "chart")) VAR_21 = VAR_29;
        else if(!FUNC_16(VAR_30, "dimension") || !FUNC_16(VAR_30, "dim") || !FUNC_16(VAR_30, "dimensions") || !FUNC_16(VAR_30, "dims")) {
            if(!VAR_12) VAR_12 = FUNC_0(100);
            FUNC_4(VAR_12, "|");
            FUNC_4(VAR_12, VAR_29);
        }
        else if(!FUNC_16(VAR_30, "after")) VAR_23 = VAR_29;
        else if(!FUNC_16(VAR_30, "before")) VAR_22 = VAR_29;
        else if(!FUNC_16(VAR_30, "points")) VAR_25 = VAR_29;
        else if(!FUNC_16(VAR_30, "gtime")) VAR_24 = VAR_29;
        else if(!FUNC_16(VAR_30, "group")) {
            VAR_26 = FUNC_20(VAR_29, VAR_7);
        }
        else if(!FUNC_16(VAR_30, "format")) {
            VAR_27 = FUNC_18(VAR_29);
        }
        else if(!FUNC_16(VAR_30, "options")) {
            VAR_28 |= FUNC_21(VAR_29);
        }
        else if(!FUNC_16(VAR_30, "callback")) {
            VAR_17 = VAR_29;
        }
        else if(!FUNC_16(VAR_30, "filename")) {
            VAR_18 = VAR_29;
        }
        else if(!FUNC_16(VAR_30, "tqx")) {


            char *VAR_31, *VAR_32;

            while(VAR_29) {
                VAR_32 = FUNC_9(&VAR_29, ";");
                if(!VAR_32 || !*VAR_32) continue;

                VAR_31 = FUNC_9(&VAR_32, ":");
                if(!VAR_31 || !*VAR_31) continue;
                if(!VAR_32 || !*VAR_32) continue;

                if(!FUNC_16(VAR_31, "version"))
                    VAR_13 = VAR_32;
                else if(!FUNC_16(VAR_31, "reqId"))
                    VAR_14 = VAR_32;
                else if(!FUNC_16(VAR_31, "sig")) {
                    VAR_15 = VAR_32;
                    VAR_20 = FUNC_17(VAR_15, ((void*)0), 0);
                }
                else if(!FUNC_16(VAR_31, "out")) {
                    VAR_16 = VAR_32;
                    VAR_27 = FUNC_19(VAR_16);
                }
                else if(!FUNC_16(VAR_31, "responseHandler"))
                    VAR_17 = VAR_32;
                else if(!FUNC_16(VAR_31, "outFileName"))
                    VAR_18 = VAR_32;
            }
        }
    }


    FUNC_8(VAR_16);
    FUNC_8(VAR_15);
    FUNC_8(VAR_14);
    FUNC_8(VAR_13);
    FUNC_8(VAR_17);
    FUNC_8(VAR_18);

    if(!VAR_21 || !*VAR_21) {
        FUNC_3(VAR_9->response.data, "No chart id is given at the request.");
        goto cleanup;
    }

    RRDSET *VAR_33 = FUNC_12(VAR_8, VAR_21);
    if(!VAR_33) VAR_33 = FUNC_13(VAR_8, VAR_21);
    if(!VAR_33) {
        FUNC_4(VAR_9->response.data, "Chart is not found: ");
        FUNC_5(VAR_9->response.data, VAR_21);
        VAR_11 = VAR_6;
        goto cleanup;
    }
    VAR_33->last_accessed_time = FUNC_10();

    long long VAR_34 = (VAR_22 && *VAR_22)?FUNC_15(VAR_22):0;
    long long VAR_35 = (VAR_23 && *VAR_23) ?FUNC_15(VAR_23):0;
    int VAR_36 = (VAR_25 && *VAR_25)?FUNC_14(VAR_25):0;
    long VAR_37 = (VAR_24 && *VAR_24)?FUNC_15(VAR_24):0;

    FUNC_7(VAR_3, "%llu: API command 'data' for chart '%s', dimensions '%s', after '%lld', before '%lld', points '%d', group '%d', format '%u', options '0x%08x'"
          , VAR_9->id
          , VAR_21
          , (VAR_12)?FUNC_6(VAR_12):""
          , VAR_35
          , VAR_34
          , VAR_36
          , VAR_26
          , VAR_27
          , VAR_28
    );

    if(VAR_18 && *VAR_18) {
        FUNC_3(&VAR_9->response.header, "Content-Disposition: attachment; filename=\"%s\"\r\n", VAR_18);
        FUNC_7(VAR_3, "%llu: generating outfilename header: '%s'", VAR_9->id, VAR_18);
    }

    if(VAR_27 == VAR_0) {
        if(VAR_17 == ((void*)0))
            VAR_17 = "google.visualization.Query.setResponse";

        FUNC_7(VAR_4, "%llu: GOOGLE JSON/JSONP: version = '%s', reqId = '%s', sig = '%s', out = '%s', responseHandler = '%s', outFileName = '%s'",
                VAR_9->id, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18
        );

        FUNC_3(VAR_9->response.data,
                "%s({version:'%s',reqId:'%s',status:'ok',sig:'%ld',table:",
                VAR_17, VAR_13, VAR_14, VAR_33->last_updated.tv_sec);
    }
    else if(VAR_27 == VAR_2) {
        if(VAR_17 == ((void*)0))
            VAR_17 = "callback";

        FUNC_4(VAR_9->response.data, VAR_17);
        FUNC_4(VAR_9->response.data, "(");
    }

    VAR_11 = FUNC_11(VAR_33, VAR_9->response.data, VAR_12, VAR_27, VAR_36, VAR_35, VAR_34, VAR_26, VAR_37
                                 , VAR_28, &VAR_19);

    if(VAR_27 == VAR_0) {
        if(VAR_20 < VAR_19)
            FUNC_4(VAR_9->response.data, "});");

        else {

            FUNC_1(VAR_9->response.data);
            FUNC_3(VAR_9->response.data,
                    "%s({version:'%s',reqId:'%s',status:'error',errors:[{reason:'not_modified',message:'Data not modified'}]});",
                    VAR_17, VAR_13, VAR_14);
        }
    }
    else if(VAR_27 == VAR_2)
        FUNC_4(VAR_9->response.data, ");");

    cleanup:
    FUNC_2(VAR_12);
    return VAR_11;
}
