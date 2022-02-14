
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_6__ {TYPE_3__* pending_window; int window; } ;
typedef TYPE_2__ start_doc_binding_task_t ;
struct TYPE_8__ {int mon; } ;
struct TYPE_7__ {TYPE_1__* bscallback; } ;
struct TYPE_5__ {TYPE_4__ bsc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_2(task_t *VAR_1)
{
    start_doc_binding_task_t *VAR_2 = (start_doc_binding_task_t*)VAR_1;

    FUNC_0(VAR_2->window, VAR_2->pending_window->bscallback->bsc.mon, VAR_0);
    FUNC_1(VAR_2->pending_window, &VAR_2->pending_window->bscallback->bsc, ((void*)0));
}
