
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rdbSaveInfo ;
typedef int client ;
struct TYPE_4__ {int rdb_child_pid; int rdb_filename; } ;
struct TYPE_3__ {int err; int ok; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_4(client *VAR_3) {
    if (VAR_1.rdb_child_pid != -1) {
        FUNC_1(VAR_3,"Background save already in progress");
        return;
    }
    rdbSaveInfo VAR_4, *VAR_5;
    VAR_5 = FUNC_2(&VAR_4);
    if (FUNC_3(VAR_1.rdb_filename,VAR_5) == VAR_0) {
        FUNC_0(VAR_3,VAR_2.ok);
    } else {
        FUNC_0(VAR_3,VAR_2.err);
    }
}
