
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bsc; } ;
typedef TYPE_1__ task_navigate_bsc_t ;
typedef int task_header_t ;
struct TYPE_7__ {int hwnd; } ;
typedef TYPE_2__ DocHost ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static void FUNC_2(DocHost *VAR_0, task_header_t *VAR_1)
{
    task_navigate_bsc_t *VAR_2 = (task_navigate_bsc_t*)VAR_1;

    if(!VAR_0->hwnd)
        FUNC_0(VAR_0);

    FUNC_1(VAR_0, VAR_2->bsc, ((void*)0));
}
