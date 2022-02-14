
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int AsciiChar; int UnicodeChar; } ;
struct TYPE_7__ {scalar_t__ bKeyDown; TYPE_1__ uChar; } ;
struct TYPE_8__ {TYPE_2__ KeyEvent; } ;
struct TYPE_9__ {scalar_t__ EventType; TYPE_3__ Event; } ;
typedef int * LPTCH ;
typedef int INT ;
typedef TYPE_4__ INPUT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,TYPE_4__*,int,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static INT
FUNC_3 (LPTCH VAR_7, DWORD VAR_8)
{
    HANDLE VAR_9;
    DWORD VAR_10;

    INPUT_RECORD VAR_11;

    VAR_9 = FUNC_0 (VAR_5);


    if (FUNC_2 (VAR_9, VAR_8) == VAR_6)
        return VAR_3;


    FUNC_1 (VAR_9, &VAR_11, 1, &VAR_10);


    if ((VAR_11.EventType == VAR_4) &&
        (VAR_11.Event.KeyEvent.bKeyDown != VAR_0))
    {




        *VAR_7 = VAR_11.Event.KeyEvent.uChar.AsciiChar;

        return VAR_1;
    }


    return VAR_2;
}
