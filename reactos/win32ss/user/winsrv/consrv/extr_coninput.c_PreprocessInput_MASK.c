
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WORD ;
typedef int ULONG ;
struct TYPE_14__ {int Mode; } ;
struct TYPE_16__ {int PauseFlags; TYPE_3__ InputBuffer; } ;
struct TYPE_12__ {char wVirtualKeyCode; int dwControlKeyState; scalar_t__ bKeyDown; } ;
struct TYPE_13__ {TYPE_1__ KeyEvent; } ;
struct TYPE_15__ {scalar_t__ EventType; TYPE_2__ Event; } ;
typedef TYPE_4__* PINPUT_RECORD ;
typedef TYPE_5__* PCONSRV_CONSOLE ;
typedef int INPUT_RECORD ;
typedef int DWORD ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;

__attribute__((used)) static ULONG
FUNC_3(PCONSRV_CONSOLE VAR_14,
                PINPUT_RECORD VAR_15,
                ULONG VAR_16)
{
    ULONG VAR_17;





    for (VAR_17 = VAR_16; VAR_17 > 0; --VAR_17)
    {

        if (VAR_15->EventType == VAR_1 && VAR_15->Event.KeyEvent.bKeyDown)
        {
            WORD VAR_18 = VAR_15->Event.KeyEvent.wVirtualKeyCode;
            if (!(VAR_14->PauseFlags & VAR_4))
            {
                DWORD VAR_19 = VAR_15->Event.KeyEvent.dwControlKeyState;
                if (VAR_14->InputBuffer.Mode & VAR_0 &&
                    (VAR_18 == VAR_10 ||
                    (VAR_18 == 'S' && (VAR_19 & (VAR_3 | VAR_6)) &&
                                 !(VAR_19 & (VAR_2 | VAR_5)))))
                {
                    FUNC_0(VAR_14, VAR_4);


                    FUNC_2(VAR_15,
                                  VAR_15 + 1,
                                  (VAR_17 - 1) * sizeof(INPUT_RECORD));
                    --VAR_16;
                    continue;
                }
            }
            else
            {
                if ((VAR_18 < VAR_13 || VAR_18 > VAR_7) && VAR_18 != VAR_8 &&
                    VAR_18 != VAR_11 && VAR_18 != VAR_9 && VAR_18 != VAR_12)
                {
                    FUNC_1(VAR_14, VAR_4);


                    FUNC_2(VAR_15,
                                  VAR_15 + 1,
                                  (VAR_17 - 1) * sizeof(INPUT_RECORD));
                    --VAR_16;
                    continue;
                }
            }
        }


        ++VAR_15;
    }

    return VAR_16;
}
