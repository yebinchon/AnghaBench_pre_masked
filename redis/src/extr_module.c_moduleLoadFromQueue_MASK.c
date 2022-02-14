
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct moduleLoadQueueEntry {int path; int argc; scalar_t__ argv; } ;
struct TYPE_4__ {struct moduleLoadQueueEntry* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_5__ {int loadmodule_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,void**,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;

void FUNC_5(void) {
    listIter VAR_3;
    listNode *VAR_4;

    FUNC_2(VAR_2.loadmodule_queue,&VAR_3);
    while((VAR_4 = FUNC_1(&VAR_3))) {
        struct moduleLoadQueueEntry *VAR_5 = VAR_4->value;
        if (FUNC_3(VAR_5->path,(void **)VAR_5->argv,VAR_5->argc)
            == VAR_0)
        {
            FUNC_4(VAR_1,
                "Can't load module from %s: server aborting",
                VAR_5->path);
            FUNC_0(1);
        }
    }
}
