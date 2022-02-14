
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_proc_t ;
struct TYPE_5__ {int entry; int destr; int proc; } ;
typedef TYPE_1__ task_header_t ;
typedef int task_destr_t ;
struct TYPE_6__ {int frame_hwnd; int task_queue; } ;
typedef TYPE_2__ DocHost ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(DocHost *VAR_1, task_header_t *VAR_2, task_proc_t VAR_3, task_destr_t VAR_4, BOOL VAR_5)
{
    BOOL VAR_6;

    VAR_2->proc = VAR_3;
    VAR_2->destr = VAR_4;

    VAR_6 = FUNC_3(&VAR_1->task_queue);
    FUNC_2(&VAR_1->task_queue, &VAR_2->entry);

    if(VAR_5)
        FUNC_1(VAR_1->frame_hwnd, VAR_0, 0, 0);
    else if(VAR_6)
        FUNC_0(VAR_1->frame_hwnd, VAR_0, 0, 0);
}
