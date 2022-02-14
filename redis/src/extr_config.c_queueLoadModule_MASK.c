
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moduleLoadQueueEntry {int argc; int * argv; int path; } ;
typedef int sds ;
typedef int robj ;
struct TYPE_2__ {int loadmodule_queue; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct moduleLoadQueueEntry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_4 (int) ;

void FUNC_5(sds VAR_1, sds *VAR_2, int VAR_3) {
    int VAR_4;
    struct moduleLoadQueueEntry *VAR_5;

    VAR_5 = FUNC_4(sizeof(struct moduleLoadQueueEntry));
    VAR_5->argv = FUNC_4(sizeof(robj*)*VAR_3);
    VAR_5->path = FUNC_3(VAR_1);
    VAR_5->argc = VAR_3;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5->argv[VAR_4] = FUNC_0(VAR_2[VAR_4],FUNC_2(VAR_2[VAR_4]));
    }
    FUNC_1(VAR_0.loadmodule_queue,VAR_5);
}
