
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_t ;
struct TYPE_7__ {int uri; int mon; TYPE_2__* bscallback; } ;
typedef TYPE_3__ navigate_task_t ;
struct TYPE_5__ {int IBindStatusCallback_iface; } ;
struct TYPE_6__ {TYPE_1__ bsc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(task_t *VAR_0)
{
    navigate_task_t *VAR_1 = (navigate_task_t*)VAR_0;

    FUNC_0(&VAR_1->bscallback->bsc.IBindStatusCallback_iface);
    FUNC_1(VAR_1->mon);
    FUNC_2(VAR_1->uri);
    FUNC_3(VAR_1);
}
