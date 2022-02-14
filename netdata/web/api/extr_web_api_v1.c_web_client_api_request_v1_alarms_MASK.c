
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_6__ {int contenttype; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 char* FUNC_3 (char**,char*) ;
 int FUNC_4 (char*,char*) ;

inline int FUNC_5(RRDHOST *VAR_2, struct web_client *VAR_3, char *VAR_4) {
    int VAR_5 = 0;

    while(VAR_4) {
        char *VAR_6 = FUNC_3(&VAR_4, "&");
        if (!VAR_6 || !*VAR_6) continue;

        if(!FUNC_4(VAR_6, "all")) VAR_5 = 1;
        else if(!FUNC_4(VAR_6, "active")) VAR_5 = 0;
    }

    FUNC_0(VAR_3->response.data);
    VAR_3->response.data->contenttype = VAR_0;
    FUNC_2(VAR_2, VAR_3->response.data, VAR_5);
    FUNC_1(VAR_3->response.data);
    return VAR_1;
}
