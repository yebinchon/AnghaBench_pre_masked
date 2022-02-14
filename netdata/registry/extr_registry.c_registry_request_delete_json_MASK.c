
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct web_client {int dummy; } ;
struct TYPE_2__ {int enabled; } ;
typedef int RRDHOST ;
typedef int REGISTRY_PERSON ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,struct web_client*,char*) ;
 int FUNC_1 (struct web_client*) ;
 int FUNC_2 (int *,struct web_client*,char*,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*,char*,char*,char*,int ) ;
 int FUNC_5 () ;

int FUNC_6(RRDHOST *VAR_3, struct web_client *VAR_4, char *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, time_t VAR_9) {
    if(!VAR_2.enabled)
        return FUNC_0(VAR_3, VAR_4, "delete");

    FUNC_3();

    REGISTRY_PERSON *VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    if(!VAR_10) {
        FUNC_2(VAR_3, VAR_4, "delete", VAR_0);
        FUNC_1(VAR_4);
        FUNC_5();
        return 412;
    }


    FUNC_2(VAR_3, VAR_4, "delete", VAR_1);
    FUNC_1(VAR_4);
    FUNC_5();
    return 200;
}
