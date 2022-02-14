
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bsc; } ;
typedef TYPE_2__ task_navigate_bsc_t ;
typedef int task_header_t ;
struct TYPE_4__ {int IBindStatusCallback_iface; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(task_header_t *VAR_0)
{
    task_navigate_bsc_t *VAR_1 = (task_navigate_bsc_t*)VAR_0;

    FUNC_0(&VAR_1->bsc->IBindStatusCallback_iface);
    FUNC_1(VAR_1);
}
