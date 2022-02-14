
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_6__ {TYPE_3__* bsc; } ;
typedef TYPE_2__ stop_request_task_t ;
struct TYPE_5__ {int entry; } ;
struct TYPE_7__ {TYPE_1__ bsc; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(task_t *VAR_1)
{
    stop_request_task_t *VAR_2 = (stop_request_task_t*)VAR_1;

    FUNC_0("(%p)\n", VAR_2->bsc);

    FUNC_2(&VAR_2->bsc->bsc.entry);
    FUNC_1(&VAR_2->bsc->bsc.entry);
    FUNC_3(VAR_2->bsc, VAR_0);
}
