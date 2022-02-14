
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdb_child_pid; int rdb_save_time_start; int rdb_child_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(int VAR_7, int VAR_8) {
    if (!VAR_8 && VAR_7 == 0) {
        FUNC_0(VAR_2,
            "Background RDB transfer terminated with success");
    } else if (!VAR_8 && VAR_7 != 0) {
        FUNC_0(VAR_3, "Background transfer error");
    } else {
        FUNC_0(VAR_3,
            "Background transfer terminated by signal %d", VAR_8);
    }
    VAR_6.rdb_child_pid = -1;
    VAR_6.rdb_child_type = VAR_4;
    VAR_6.rdb_save_time_start = -1;

    FUNC_1((!VAR_8 && VAR_7 == 0) ? VAR_1 : VAR_0, VAR_5);
}
