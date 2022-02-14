
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* health_log_filename; int hostname; scalar_t__ health_log_fp; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int ,int ) ;

inline int FUNC_4(RRDHOST *VAR_1) {
    if(VAR_1->health_log_fp)
        FUNC_1(VAR_1->health_log_fp);

    VAR_1->health_log_fp = FUNC_2(VAR_1->health_log_filename, "a");

    if(VAR_1->health_log_fp) {
        if (FUNC_3(VAR_1->health_log_fp, ((void*)0), VAR_0, 0) != 0)
            FUNC_0("HEALTH [%s]: cannot set line buffering on health log file '%s'.", VAR_1->hostname, VAR_1->health_log_filename);
        return 0;
    }

    FUNC_0("HEALTH [%s]: cannot open health log file '%s'. Health data will be lost in case of netdata or server crash.", VAR_1->hostname, VAR_1->health_log_filename);
    return -1;
}
