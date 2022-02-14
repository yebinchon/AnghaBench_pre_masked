
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ start_time; scalar_t__ pid; int * argv; } ;
typedef TYPE_1__ sentinelScriptJob ;
typedef scalar_t__ mstime_t ;
struct TYPE_6__ {TYPE_1__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_7__ {int scripts_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (int ,char*,int *,char*,int ,long) ;

void FUNC_5(void) {
    listNode *VAR_5;
    listIter VAR_6;
    mstime_t VAR_7 = FUNC_3();

    FUNC_2(VAR_4.scripts_queue,&VAR_6);
    while ((VAR_5 = FUNC_1(&VAR_6)) != ((void*)0)) {
        sentinelScriptJob *VAR_8 = VAR_5->value;

        if (VAR_8->flags & VAR_2 &&
            (VAR_7 - VAR_8->start_time) > VAR_1)
        {
            FUNC_4(VAR_0,"-script-timeout",((void*)0),"%s %ld",
                VAR_8->argv[0], (long)VAR_8->pid);
            FUNC_0(VAR_8->pid,VAR_3);
        }
    }
}
