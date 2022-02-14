
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_2__ {scalar_t__ bscallback; int window; } ;
typedef TYPE_1__ start_binding_task_t ;
typedef int BSCallback ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(task_t *VAR_0)
{
    start_binding_task_t *VAR_1 = (start_binding_task_t*)VAR_0;

    FUNC_0(VAR_1->window, (BSCallback*)VAR_1->bscallback, ((void*)0));
}
