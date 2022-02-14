
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int AsciiChar; } ;
struct TYPE_9__ {scalar_t__ wVirtualKeyCode; TYPE_1__ uChar; } ;
struct TYPE_8__ {TYPE_3__ KeyEvent; } ;
struct TYPE_10__ {TYPE_2__ Event; } ;
typedef TYPE_4__* PINPUT_RECORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL
FUNC_2(PINPUT_RECORD VAR_5)
{
    BOOL VAR_6 = VAR_1;
    FUNC_1(VAR_0, ((void*)0), VAR_2);

    while (VAR_3)
    {
        FUNC_0(VAR_5);

        if ((VAR_5->Event.KeyEvent.uChar.AsciiChar == 0x00) &&
            (VAR_5->Event.KeyEvent.wVirtualKeyCode == VAR_4))
        {
            VAR_6 = VAR_3;
            break;
        }
        else if (VAR_5->Event.KeyEvent.uChar.AsciiChar == 0x0D)
        {
            VAR_6 = VAR_1;
            break;
        }
    }

    return VAR_6;
}
