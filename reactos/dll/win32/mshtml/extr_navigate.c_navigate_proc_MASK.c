
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_7__ {TYPE_4__* bscallback; TYPE_3__* window; int uri; int flags; int mon; } ;
typedef TYPE_1__ navigate_task_t ;
struct TYPE_8__ {int mon; } ;
struct TYPE_10__ {TYPE_2__ bsc; } ;
struct TYPE_9__ {int pending_window; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int *,TYPE_4__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_5(task_t *VAR_1)
{
    navigate_task_t *VAR_2 = (navigate_task_t*)VAR_1;
    HRESULT VAR_3;

    VAR_3 = FUNC_3(VAR_2->window, VAR_2->mon, VAR_2->uri, ((void*)0), VAR_2->bscallback, VAR_0);
    if(FUNC_0(VAR_3)) {
        FUNC_1(VAR_2->window, VAR_2->bscallback->bsc.mon, VAR_2->flags);
        FUNC_2(VAR_2->window, VAR_2->uri);
        FUNC_4(VAR_2->window->pending_window, &VAR_2->bscallback->bsc, ((void*)0));
    }
}
