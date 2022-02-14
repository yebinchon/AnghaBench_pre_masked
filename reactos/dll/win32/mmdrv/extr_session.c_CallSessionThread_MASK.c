
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ThreadFunction ;
struct TYPE_5__ {int result; int ready_event; int go_event; int parameter; int function; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;
typedef TYPE_2__ SessionInfo ;
typedef int PVOID ;
typedef int MMRESULT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

MMRESULT
FUNC_4(
    SessionInfo* VAR_1,
    ThreadFunction VAR_2,
    PVOID VAR_3)
{
    FUNC_0(VAR_1);

    VAR_1->thread.function = VAR_2;
    VAR_1->thread.parameter = VAR_3;

    FUNC_1("Calling session thread\n");
    FUNC_2(VAR_1->thread.go_event);

    FUNC_1("Waiting for thread response\n");
    FUNC_3(VAR_1->thread.ready_event, VAR_0);

    return VAR_1->thread.result;
}
