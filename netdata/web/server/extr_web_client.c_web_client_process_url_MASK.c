
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_2__* data; } ;
struct web_client {TYPE_1__ response; int last_url; int id; } ;
struct TYPE_9__ {void* contenttype; } ;
typedef int RRDSET ;
typedef int RRDHOST ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,char,char) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int *,struct web_client*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int VAR_10 ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct web_client*,char*) ;
 char* FUNC_11 (char**,char*) ;
 int FUNC_12 (int ) ;
 int VAR_11 ;
 int * FUNC_13 (int *,char*) ;
 int * FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 scalar_t__ FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,int ,int ) ;
 scalar_t__ FUNC_21 (int) ;
 int VAR_12 ;
 int FUNC_22 (struct web_client*) ;
 int FUNC_23 (struct web_client*) ;
 int FUNC_24 (int *,struct web_client*,char*) ;

__attribute__((used)) static inline int FUNC_25(RRDHOST *VAR_13, struct web_client *VAR_14, char *VAR_15) {
    static uint32_t
            VAR_16 = 0,
            VAR_17 = 0,
            VAR_18 = 0;





    if(FUNC_21(!VAR_16)) {
        VAR_16 = FUNC_18("api");
        VAR_17 = FUNC_18("netdata.conf");
        VAR_18 = FUNC_18("host");





    }

    char *VAR_19 = FUNC_11(&VAR_15, "/?");
    if(FUNC_9(VAR_19 && *VAR_19)) {
        uint32_t VAR_20 = FUNC_18(VAR_19);
        FUNC_7(VAR_3, "%llu: Processing command '%s'.", VAR_14->id, VAR_19);

        if(FUNC_21(VAR_20 == VAR_16 && FUNC_19(VAR_19, "api") == 0)) {
            FUNC_7(VAR_4, "%llu: API request ...", VAR_14->id);
            return FUNC_5(VAR_13, VAR_14, VAR_15, VAR_12);
        }
        else if(FUNC_21(VAR_20 == VAR_18 && FUNC_19(VAR_19, "host") == 0)) {
            FUNC_7(VAR_4, "%llu: host switch request ...", VAR_14->id);
            return FUNC_24(VAR_13, VAR_14, VAR_15);
        }
        else if(FUNC_21(VAR_20 == VAR_17 && FUNC_19(VAR_19, "netdata.conf") == 0)) {
            if(FUNC_21(!FUNC_22(VAR_14)))
                return FUNC_23(VAR_14);

            FUNC_7(VAR_4, "%llu: generating netdata.conf ...", VAR_14->id);
            VAR_14->response.data->contenttype = VAR_1;
            FUNC_1(VAR_14->response.data);
            FUNC_6(VAR_14->response.data, 0);
            return VAR_8;
        }
    }

    char VAR_21[VAR_5+1];
    VAR_15 = VAR_21;
    FUNC_20(VAR_21, VAR_14->last_url, VAR_5);
    VAR_19 = FUNC_11(&VAR_15, "?");
    FUNC_1(VAR_14->response.data);
    return FUNC_10(VAR_14, (VAR_19 && *VAR_19)?VAR_19:"/");
}
