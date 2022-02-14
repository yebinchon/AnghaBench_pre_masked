
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int data; } ;
struct web_client {int acl; TYPE_1__ response; scalar_t__ decoded_query_string; int id; } ;
struct TYPE_4__ {char* command; scalar_t__ hash; int acl; int (* callback ) (int *,struct web_client*,scalar_t__) ;} ;
typedef int RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ,char*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,struct web_client*,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct web_client*) ;

static inline int FUNC_10(RRDHOST *VAR_5, struct web_client *VAR_6, char *VAR_7) {
    static int VAR_8 = 0;
    int VAR_9;

    if(FUNC_8(VAR_8 == 0)) {
        VAR_8 = 1;

        for(VAR_9 = 0; VAR_4[VAR_9].command ; VAR_9++)
            VAR_4[VAR_9].hash = FUNC_5(VAR_4[VAR_9].command);
    }


    if(VAR_7) {
        FUNC_4(VAR_0, "%llu: Searching for API v1 command '%s'.", VAR_6->id, VAR_7);
        uint32_t VAR_10 = FUNC_5(VAR_7);

        for(VAR_9 = 0; VAR_4[VAR_9].command ;VAR_9++) {
            if(FUNC_8(VAR_10 == VAR_4[VAR_9].hash && !FUNC_6(VAR_7, VAR_4[VAR_9].command))) {
                if(FUNC_8(VAR_4[VAR_9].acl != VAR_3) && !(VAR_6->acl & VAR_4[VAR_9].acl))
                    return FUNC_9(VAR_6);


                return VAR_4[VAR_9].callback(VAR_5, VAR_6, (VAR_6->decoded_query_string + 1));
            }
        }

        FUNC_0(VAR_6->response.data);
        FUNC_2(VAR_6->response.data, "Unsupported v1 API command: ");
        FUNC_3(VAR_6->response.data, VAR_7);
        return VAR_2;
    }
    else {
        FUNC_0(VAR_6->response.data);
        FUNC_1(VAR_6->response.data, "Which API v1 command?");
        return VAR_1;
    }
}
