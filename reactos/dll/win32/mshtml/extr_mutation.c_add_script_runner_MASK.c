
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int runnable_proc_t ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_3__ nsIRunnable_iface; int * arg2; int * arg1; int proc; TYPE_2__* doc; } ;
typedef TYPE_1__ nsRunnable ;
typedef int nsISupports ;
struct TYPE_8__ {int basedoc; } ;
typedef TYPE_2__ HTMLDocumentNode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(HTMLDocumentNode *VAR_2, runnable_proc_t VAR_3, nsISupports *VAR_4, nsISupports *VAR_5)
{
    nsRunnable *VAR_6;

    VAR_6 = FUNC_0(sizeof(*VAR_6));
    if(!VAR_6)
        return;

    VAR_6->nsIRunnable_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;

    FUNC_1(&VAR_2->basedoc);
    VAR_6->doc = VAR_2;
    VAR_6->proc = VAR_3;

    if(VAR_4)
        FUNC_4(VAR_4);
    VAR_6->arg1 = VAR_4;

    if(VAR_5)
        FUNC_4(VAR_5);
    VAR_6->arg2 = VAR_5;

    FUNC_2(VAR_0, &VAR_6->nsIRunnable_iface);

    FUNC_3(&VAR_6->nsIRunnable_iface);
}
