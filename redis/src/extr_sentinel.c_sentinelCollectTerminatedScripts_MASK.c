
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ retry_num; long* argv; scalar_t__ start_time; scalar_t__ pid; int flags; } ;
typedef TYPE_1__ sentinelScriptJob ;
typedef scalar_t__ pid_t ;
struct TYPE_8__ {TYPE_1__* value; } ;
typedef TYPE_2__ listNode ;
struct TYPE_9__ {int running_scripts; int scripts_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 TYPE_5__ VAR_5 ;
 int FUNC_5 (int ,char*,int *,char*,long,int,int) ;
 TYPE_2__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,char*,long) ;
 scalar_t__ FUNC_10 (int*,int ,int *) ;

void FUNC_11(void) {
    int VAR_6;
    pid_t VAR_7;

    while ((VAR_7 = FUNC_10(&VAR_6,VAR_4,((void*)0))) > 0) {
        int VAR_8 = FUNC_0(VAR_6);
        int VAR_9 = 0;
        listNode *VAR_10;
        sentinelScriptJob *VAR_11;

        if (FUNC_1(VAR_6)) VAR_9 = FUNC_2(VAR_6);
        FUNC_5(VAR_0,"-script-child",((void*)0),"%ld %d %d",
            (long)VAR_7, VAR_8, VAR_9);

        VAR_10 = FUNC_6(VAR_7);
        if (VAR_10 == ((void*)0)) {
            FUNC_9(VAR_1,"wait3() returned a pid (%ld) we can't find in our scripts execution queue!", (long)VAR_7);
            continue;
        }
        VAR_11 = VAR_10->value;




        if ((VAR_9 || VAR_8 == 1) &&
            VAR_11->retry_num != VAR_2)
        {
            VAR_11->flags &= ~VAR_3;
            VAR_11->pid = 0;
            VAR_11->start_time = FUNC_4() +
                             FUNC_8(VAR_11->retry_num);
        } else {


            if (VAR_9 || VAR_8 != 0) {
                FUNC_5(VAR_1,"-script-error",((void*)0),
                              "%s %d %d", VAR_11->argv[0], VAR_9, VAR_8);
            }
            FUNC_3(VAR_5.scripts_queue,VAR_10);
            FUNC_7(VAR_11);
            VAR_5.running_scripts--;
        }
    }
}
