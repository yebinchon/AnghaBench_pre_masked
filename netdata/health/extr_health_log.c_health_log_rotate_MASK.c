
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t health_log_entries_written; char* health_log_filename; int * health_log_fp; int hostname; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,char*,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*) ;

static inline void FUNC_10(RRDHOST *VAR_4) {
    static size_t VAR_5 = 0;

    if(FUNC_8(VAR_5 == 0)) {
        VAR_5 = (size_t)FUNC_0(VAR_0, "rotate log every lines", 2000);
        if(VAR_5 < 100) VAR_5 = 100;
    }

    if(FUNC_8(VAR_4->health_log_entries_written > VAR_5)) {
        FUNC_4(VAR_4);

        char VAR_6[VAR_2 + 1];
        FUNC_7(VAR_6, VAR_2, "%s.old", VAR_4->health_log_filename);

        if(FUNC_9(VAR_6) == -1 && VAR_3 != VAR_1)
            FUNC_1("HEALTH [%s]: cannot remove old alarms log file '%s'", VAR_4->hostname, VAR_6);

        if(FUNC_6(VAR_4->health_log_filename, VAR_6) == -1 && VAR_3 != VAR_1)
            FUNC_1("HEALTH [%s]: cannot move file '%s' to '%s'.", VAR_4->hostname, VAR_4->health_log_filename, VAR_6);

        if(FUNC_9(VAR_4->health_log_filename) == -1 && VAR_3 != VAR_1)
            FUNC_1("HEALTH [%s]: cannot remove old alarms log file '%s'", VAR_4->hostname, VAR_4->health_log_filename);


        VAR_4->health_log_fp = FUNC_3(VAR_4->health_log_filename, "w");

        if(VAR_4->health_log_fp)
            FUNC_2(VAR_4->health_log_fp);
        else
            FUNC_1("HEALTH [%s]: cannot truncate health log '%s'", VAR_4->hostname, VAR_4->health_log_filename);

        VAR_4->health_log_fp = ((void*)0);

        VAR_4->health_log_entries_written = 0;
        FUNC_5(VAR_4);
    }
}
