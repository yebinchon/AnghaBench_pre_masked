
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {void* families; void* families_pattern; void* hosts; void* hosts_pattern; void* contexts; void* contexts_pattern; void* charts; void* charts_pattern; void* alarms; void* alarms_pattern; } ;
typedef TYPE_1__ SILENCER ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*,int *,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 void* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

SILENCER *FUNC_7(SILENCER *VAR_7, char *VAR_8, char *VAR_9) {
    static uint32_t
            VAR_10 = 0,
            VAR_11 = 0,
            VAR_12 = 0,
            VAR_13 = 0,
            VAR_14 = 0,
            VAR_15 = 0;

    if (FUNC_6(!VAR_10)) {
        VAR_10 = FUNC_3(VAR_0);
        VAR_11 = FUNC_3(VAR_5);
        VAR_12 = FUNC_3(VAR_1);
        VAR_13 = FUNC_3(VAR_2);
        VAR_14 = FUNC_3(VAR_4);
        VAR_15 = FUNC_3(VAR_3);
    }

    uint32_t VAR_16 = FUNC_3(VAR_8);
    if (FUNC_6(VAR_7 == ((void*)0))) {
        if (
                (VAR_16 == VAR_10 && !FUNC_4(VAR_8, VAR_0)) ||
                (VAR_16 == VAR_11 && !FUNC_4(VAR_8, VAR_5)) ||
                (VAR_16 == VAR_12 && !FUNC_4(VAR_8, VAR_1)) ||
                (VAR_16 == VAR_13 && !FUNC_4(VAR_8, VAR_2)) ||
                (VAR_16 == VAR_14 && !FUNC_4(VAR_8, VAR_4)) ||
                (VAR_16 == VAR_15 && !FUNC_4(VAR_8, VAR_3))
                ) {
            VAR_7 = FUNC_0();
            if(!VAR_7) {
                FUNC_1("Cannot add a new silencer to Netdata");
                return ((void*)0);
            }
        }
    }

    if (VAR_16 == VAR_10 && !FUNC_4(VAR_8, VAR_0)) {
        VAR_7->alarms = FUNC_5(VAR_9);
        VAR_7->alarms_pattern = FUNC_2(VAR_7->alarms, ((void*)0), VAR_6);
    } else if (VAR_16 == VAR_12 && !FUNC_4(VAR_8, VAR_1)) {
        VAR_7->charts = FUNC_5(VAR_9);
        VAR_7->charts_pattern = FUNC_2(VAR_7->charts, ((void*)0), VAR_6);
    } else if (VAR_16 == VAR_13 && !FUNC_4(VAR_8, VAR_2)) {
        VAR_7->contexts = FUNC_5(VAR_9);
        VAR_7->contexts_pattern = FUNC_2(VAR_7->contexts, ((void*)0), VAR_6);
    } else if (VAR_16 == VAR_14 && !FUNC_4(VAR_8, VAR_4)) {
        VAR_7->hosts = FUNC_5(VAR_9);
        VAR_7->hosts_pattern = FUNC_2(VAR_7->hosts, ((void*)0), VAR_6);
    } else if (VAR_16 == VAR_15 && !FUNC_4(VAR_8, VAR_3)) {
        VAR_7->families = FUNC_5(VAR_9);
        VAR_7->families_pattern = FUNC_2(VAR_7->families, ((void*)0), VAR_6);
    }

    return VAR_7;
}
