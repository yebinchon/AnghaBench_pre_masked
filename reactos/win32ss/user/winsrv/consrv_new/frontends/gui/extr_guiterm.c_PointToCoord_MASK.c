
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_12__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_11__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_14__ {TYPE_2__ ScreenBufferSize; TYPE_1__ ViewOrigin; } ;
struct TYPE_13__ {int Console; } ;
typedef int SHORT ;
typedef TYPE_3__* PGUI_CONSOLE_DATA ;
typedef TYPE_4__* PCONSOLE_SCREEN_BUFFER ;
typedef int PCONSOLE ;
typedef int LPARAM ;
typedef TYPE_5__ COORD ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static COORD
FUNC_4(PGUI_CONSOLE_DATA VAR_0, LPARAM VAR_1)
{
    PCONSOLE VAR_2 = VAR_0->Console;
    PCONSOLE_SCREEN_BUFFER VAR_3 = FUNC_0(VAR_2);
    COORD VAR_4;
    UINT VAR_5, VAR_6;

    FUNC_1(VAR_3, VAR_0, &VAR_5, &VAR_6);

    VAR_4.X = VAR_3->ViewOrigin.X + ((SHORT)FUNC_3(VAR_1) / (int)VAR_5 );
    VAR_4.Y = VAR_3->ViewOrigin.Y + ((SHORT)FUNC_2(VAR_1) / (int)VAR_6);


    if (VAR_4.X < 0)
        VAR_4.X = 0;
    else if (VAR_4.X >= VAR_3->ScreenBufferSize.X)
        VAR_4.X = VAR_3->ScreenBufferSize.X - 1;

    if (VAR_4.Y < 0)
        VAR_4.Y = 0;
    else if (VAR_4.Y >= VAR_3->ScreenBufferSize.Y)
        VAR_4.Y = VAR_3->ScreenBufferSize.Y - 1;

    return VAR_4;
}
