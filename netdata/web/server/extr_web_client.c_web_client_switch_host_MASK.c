
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_2__* data; } ;
struct web_client {char* last_url; TYPE_1__ response; int id; } ;
struct TYPE_6__ {int contenttype; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,char*,int ,char*) ;
 int * VAR_5 ;
 char* FUNC_4 (char**,char*) ;
 int * FUNC_5 (char*,scalar_t__) ;
 int * FUNC_6 (char*,scalar_t__) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,struct web_client*,char*) ;

__attribute__((used)) static inline int FUNC_11(RRDHOST *VAR_6, struct web_client *VAR_7, char *VAR_8) {
    static uint32_t VAR_9 = 0;

    if(FUNC_9(!VAR_9)) {
        VAR_9 = FUNC_7("localhost");
    }

    if(VAR_6 != VAR_5) {
        FUNC_0(VAR_7->response.data);
        FUNC_1(VAR_7->response.data, "Nesting of hosts is not allowed.");
        return VAR_2;
    }

    char *VAR_10 = FUNC_4(&VAR_8, "/");
    if(VAR_10 && *VAR_10) {
        FUNC_3(VAR_1, "%llu: Searching for host with name '%s'.", VAR_7->id, VAR_10);


        VAR_7->last_url[0] = '/';
        if(VAR_8 && *VAR_8) FUNC_8(&VAR_7->last_url[1], VAR_8, VAR_4 - 1);
        else VAR_7->last_url[1] = '\0';

        uint32_t VAR_11 = FUNC_7(VAR_10);

        VAR_6 = FUNC_6(VAR_10, VAR_11);
        if(!VAR_6) VAR_6 = FUNC_5(VAR_10, VAR_11);

        if(VAR_6) return FUNC_10(VAR_6, VAR_7, VAR_8);
    }

    FUNC_0(VAR_7->response.data);
    VAR_7->response.data->contenttype = VAR_0;
    FUNC_1(VAR_7->response.data, "This netdata does not maintain a database for host: ");
    FUNC_2(VAR_7->response.data, VAR_10?VAR_10:"");
    return VAR_3;
}
