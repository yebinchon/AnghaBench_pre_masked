
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rdbSaveInfo ;
struct TYPE_2__ {int dirty; int rdb_child_pid; scalar_t__ saveparamslen; int rdb_filename; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__ VAR_1 ;

void FUNC_5(int VAR_2) {
    VAR_1.dirty += FUNC_0(-1,VAR_2,((void*)0));
    if (VAR_1.rdb_child_pid != -1) FUNC_2();
    if (VAR_1.saveparamslen > 0) {


        int VAR_3 = VAR_1.dirty;
        rdbSaveInfo VAR_4, *VAR_5;
        VAR_5 = FUNC_3(&VAR_4);
        FUNC_4(VAR_1.rdb_filename,VAR_5);
        VAR_1.dirty = VAR_3;
    }
    VAR_1.dirty++;







}
