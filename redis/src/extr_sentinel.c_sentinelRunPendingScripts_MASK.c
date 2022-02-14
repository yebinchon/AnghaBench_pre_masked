
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ start_time; int pid; int * argv; int retry_num; } ;
typedef TYPE_1__ sentinelScriptJob ;
typedef int pid_t ;
typedef scalar_t__ mstime_t ;
struct TYPE_6__ {TYPE_1__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_7__ {scalar_t__ running_scripts; int scripts_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 () ;
 TYPE_3__ VAR_5 ;
 int FUNC_6 (int ,char*,int *,char*,long,...) ;

void FUNC_7(void) {
    listNode *VAR_6;
    listIter VAR_7;
    mstime_t VAR_8 = FUNC_5();



    FUNC_4(VAR_5.scripts_queue,&VAR_7);
    while (VAR_5.running_scripts < VAR_2 &&
           (VAR_6 = FUNC_3(&VAR_7)) != ((void*)0))
    {
        sentinelScriptJob *VAR_9 = VAR_6->value;
        pid_t VAR_10;


        if (VAR_9->flags & VAR_3) continue;


        if (VAR_9->start_time && VAR_9->start_time > VAR_8) continue;

        VAR_9->flags |= VAR_3;
        VAR_9->start_time = FUNC_5();
        VAR_9->retry_num++;
        VAR_10 = FUNC_2();

        if (VAR_10 == -1) {



            FUNC_6(VAR_1,"-script-error",((void*)0),
                          "%s %d %d", VAR_9->argv[0], 99, 0);
            VAR_9->flags &= ~VAR_3;
            VAR_9->pid = 0;
        } else if (VAR_10 == 0) {

            FUNC_1(VAR_9->argv[0],VAR_9->argv,VAR_4);

            FUNC_0(2);
        } else {
            VAR_5.running_scripts++;
            VAR_9->pid = VAR_10;
            FUNC_6(VAR_0,"+script-child",((void*)0),"%ld",(long)VAR_10);
        }
    }
}
