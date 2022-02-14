
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_6__ {struct TYPE_6__* status_text; int status_code; } ;
typedef TYPE_1__ on_progress_task_t ;
struct TYPE_7__ {int protocol_sink_handler; } ;
typedef TYPE_2__ BindProtocol ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(BindProtocol *VAR_0, task_header_t *VAR_1)
{
    on_progress_task_t *VAR_2 = (on_progress_task_t*)VAR_1;

    FUNC_0(VAR_0->protocol_sink_handler, VAR_2->status_code, VAR_2->status_text);

    FUNC_1(VAR_2->status_text);
    FUNC_1(VAR_2);
}
