
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* health_log_filename; int hostname; scalar_t__ health_log_entries_written; } ;
typedef TYPE_1__ RRDHOST ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,char*) ;
 int FUNC_6 (char*,int ,char*,char*) ;

inline void FUNC_7(RRDHOST *VAR_1) {
    FUNC_3(VAR_1);

    char VAR_2[VAR_0 + 1];
    FUNC_6(VAR_2, VAR_0, "%s.old", VAR_1->health_log_filename);
    FILE *VAR_3 = FUNC_2(VAR_2, "r");
    if(!VAR_3)
        FUNC_0("HEALTH [%s]: cannot open health file: %s", VAR_1->hostname, VAR_2);
    else {
        FUNC_5(VAR_1, VAR_3, VAR_2);
        FUNC_1(VAR_3);
    }

    VAR_1->health_log_entries_written = 0;
    VAR_3 = FUNC_2(VAR_1->health_log_filename, "r");
    if(!VAR_3)
        FUNC_0("HEALTH [%s]: cannot open health file: %s", VAR_1->hostname, VAR_1->health_log_filename);
    else {
        FUNC_5(VAR_1, VAR_3, VAR_1->health_log_filename);
        FUNC_1(VAR_3);
    }

    FUNC_4(VAR_1);
}
