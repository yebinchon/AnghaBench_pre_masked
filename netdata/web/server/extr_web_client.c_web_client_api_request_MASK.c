
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ,char*,int ,char*) ;
 char* FUNC_5 (char**,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,struct web_client*,char*) ;

int FUNC_8(RRDHOST *VAR_4, struct web_client *VAR_5, char *VAR_6)
{

    char *VAR_7 = FUNC_5(&VAR_6, "/");
    if(VAR_7 && *VAR_7) {
        FUNC_4(VAR_1, "%llu: Searching for API version '%s'.", VAR_5->id, VAR_7);
        if(FUNC_6(VAR_7, "v1") == 0)
            return FUNC_7(VAR_4, VAR_5, VAR_6);
        else {
            FUNC_0(VAR_5->response.data);
            VAR_5->response.data->contenttype = VAR_0;
            FUNC_2(VAR_5->response.data, "Unsupported API version: ");
            FUNC_3(VAR_5->response.data, VAR_7);
            return VAR_3;
        }
    }
    else {
        FUNC_0(VAR_5->response.data);
        FUNC_1(VAR_5->response.data, "Which API version?");
        return VAR_2;
    }
}
