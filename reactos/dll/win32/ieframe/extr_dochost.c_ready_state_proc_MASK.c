
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_5__ {scalar_t__ doc; int ready_state; } ;
typedef TYPE_1__ ready_state_task_t ;
struct TYPE_6__ {scalar_t__ document; } ;
typedef TYPE_2__ DocHost ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(DocHost *VAR_0, task_header_t *VAR_1)
{
    ready_state_task_t *VAR_2 = (ready_state_task_t*)VAR_1;

    if(VAR_2->doc == VAR_0->document)
        FUNC_0(VAR_0, VAR_2->ready_state);
}
