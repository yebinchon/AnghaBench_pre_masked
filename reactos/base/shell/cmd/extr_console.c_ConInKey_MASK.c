
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ bKeyDown; } ;
struct TYPE_7__ {TYPE_1__ KeyEvent; } ;
struct TYPE_8__ {scalar_t__ EventType; TYPE_2__ Event; } ;
typedef TYPE_3__* PINPUT_RECORD ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,TYPE_3__*,int,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;

VOID FUNC_3(PINPUT_RECORD VAR_4)
{
    HANDLE VAR_5 = FUNC_0(VAR_2);
    DWORD VAR_6;

    if (VAR_5 == VAR_0)
        FUNC_2 ("Invalid input handle!!!\n");

    do
    {
        FUNC_1(VAR_5, VAR_4, 1, &VAR_6);
        if (VAR_4->EventType == VAR_1 &&
            VAR_4->Event.KeyEvent.bKeyDown)
        {
            break;
        }
    }
    while (VAR_3);
}
