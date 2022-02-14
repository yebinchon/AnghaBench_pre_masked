
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ pid; } ;
typedef TYPE_1__ sentinelScriptJob ;
typedef scalar_t__ pid_t ;
struct TYPE_7__ {TYPE_1__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_8__ {int scripts_queue; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_4__ VAR_1 ;

listNode *FUNC_2(pid_t VAR_2) {
    listNode *VAR_3;
    listIter VAR_4;

    FUNC_1(VAR_1.scripts_queue,&VAR_4);
    while ((VAR_3 = FUNC_0(&VAR_4)) != ((void*)0)) {
        sentinelScriptJob *VAR_5 = VAR_3->value;

        if ((VAR_5->flags & VAR_0) && VAR_5->pid == VAR_2)
            return VAR_3;
    }
    return ((void*)0);
}
