
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_5__ {int data; } ;
typedef TYPE_1__ switch_task_t ;
struct TYPE_6__ {int protocol_handler; } ;
typedef TYPE_2__ BindProtocol ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(BindProtocol *VAR_0, task_header_t *VAR_1)
{
    switch_task_t *VAR_2 = (switch_task_t*)VAR_1;

    FUNC_0(VAR_0->protocol_handler, VAR_2->data);

    FUNC_1(VAR_2);
}
