
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {TYPE_2__* data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_5__ {int contenttype; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,scalar_t__) ;
 char* FUNC_2 (char**,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int *,int ) ;

inline int FUNC_5(RRDHOST *VAR_2, struct web_client *VAR_3, char *VAR_4) {
    uint32_t VAR_5 = 0;

    while(VAR_4) {
        char *VAR_6 = FUNC_2(&VAR_4, "&");
        if (!VAR_6 || !*VAR_6) continue;

        char *VAR_7 = FUNC_2(&VAR_6, "=");
        if(!VAR_7 || !*VAR_7) continue;
        if(!VAR_6 || !*VAR_6) continue;

        if(!FUNC_3(VAR_7, "after")) VAR_5 = (uint32_t)FUNC_4(VAR_6, ((void*)0), 0);
    }

    FUNC_0(VAR_3->response.data);
    VAR_3->response.data->contenttype = VAR_0;
    FUNC_1(VAR_2, VAR_3->response.data, VAR_5);
    return VAR_1;
}
