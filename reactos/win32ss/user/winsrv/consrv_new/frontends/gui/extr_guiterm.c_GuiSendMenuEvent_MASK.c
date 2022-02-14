
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_5__ {int dwCommandId; } ;
struct TYPE_6__ {TYPE_1__ MenuEvent; } ;
struct TYPE_7__ {TYPE_2__ Event; int EventType; } ;
typedef int PCONSOLE ;
typedef TYPE_3__ INPUT_RECORD ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static VOID
FUNC_1(PCONSOLE VAR_1, UINT VAR_2)
{
    INPUT_RECORD VAR_3;

    VAR_3.EventType = VAR_0;
    VAR_3.Event.MenuEvent.dwCommandId = VAR_2;

    FUNC_0(VAR_1, &VAR_3);
}
