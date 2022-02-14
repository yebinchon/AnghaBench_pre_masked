
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ loading_process_events_interval_bytes; } ;
struct TYPE_3__ {int ** integers; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int *) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

int FUNC_7(int VAR_6, char **VAR_7, FILE *VAR_8) {
    if (VAR_6 != 2 && VAR_8 == ((void*)0)) {
        FUNC_2(VAR_5, "Usage: %s <rdb-file-name>\n", VAR_7[0]);
        FUNC_1(1);
    }



    if (VAR_4.integers[0] == ((void*)0))
        FUNC_0();
    VAR_3.loading_process_events_interval_bytes = 0;
    VAR_2 = 1;
    FUNC_3("Checking RDB file %s", VAR_7[1]);
    FUNC_4();
    int VAR_9 = FUNC_6(VAR_7[1],VAR_8);
    if (VAR_9 == 0) {
        FUNC_3("\\o/ RDB looks OK! \\o/");
        FUNC_5();
    }
    if (VAR_8) return (VAR_9 == 0) ? VAR_1 : VAR_0;
    FUNC_1(VAR_9);
}
