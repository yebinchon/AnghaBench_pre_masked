
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int thread_hwnd; int task_list; } ;
typedef TYPE_1__ thread_data_t ;
struct TYPE_11__ {int entry; int (* destr ) (TYPE_2__*) ;int (* proc ) (TYPE_2__*) ;int target_magic; } ;
typedef TYPE_2__ task_t ;
typedef int (* task_proc_t ) (TYPE_2__*) ;
typedef int LONG ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;

HRESULT FUNC_5(task_t *VAR_4, task_proc_t VAR_5, task_proc_t VAR_6, LONG VAR_7)
{
    thread_data_t *VAR_8;

    VAR_8 = FUNC_2(VAR_2);
    if(!VAR_8) {
        if(VAR_6)
            VAR_6(VAR_4);
        else
            FUNC_3(VAR_4);
        return VAR_0;
    }

    VAR_4->target_magic = VAR_7;
    VAR_4->proc = VAR_5;
    VAR_4->destr = VAR_6 ? VAR_6 : FUNC_1;

    FUNC_4(&VAR_8->task_list, &VAR_4->entry);

    FUNC_0(VAR_8->thread_hwnd, VAR_3, 0, 0);
    return VAR_1;
}
