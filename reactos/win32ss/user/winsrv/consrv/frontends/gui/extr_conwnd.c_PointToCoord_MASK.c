
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_14__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_11__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_10__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_13__ {TYPE_2__ ScreenBufferSize; TYPE_1__ ViewOrigin; } ;
struct TYPE_12__ {TYPE_4__* ActiveBuffer; } ;
typedef int SHORT ;
typedef TYPE_3__* PGUI_CONSOLE_DATA ;
typedef TYPE_4__* PCONSOLE_SCREEN_BUFFER ;
typedef int LPARAM ;
typedef TYPE_5__ COORD ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static COORD
FUNC_3(PGUI_CONSOLE_DATA VAR_0, LPARAM VAR_1)
{
    PCONSOLE_SCREEN_BUFFER VAR_2 = VAR_0->ActiveBuffer;
    COORD VAR_3;
    UINT VAR_4, VAR_5;

    FUNC_0(VAR_2, VAR_0, &VAR_4, &VAR_5);

    VAR_3.X = VAR_2->ViewOrigin.X + ((SHORT)FUNC_2(VAR_1) / (int)VAR_4 );
    VAR_3.Y = VAR_2->ViewOrigin.Y + ((SHORT)FUNC_1(VAR_1) / (int)VAR_5);


    if (VAR_3.X < 0)
        VAR_3.X = 0;
    else if (VAR_3.X >= VAR_2->ScreenBufferSize.X)
        VAR_3.X = VAR_2->ScreenBufferSize.X - 1;

    if (VAR_3.Y < 0)
        VAR_3.Y = 0;
    else if (VAR_3.Y >= VAR_2->ScreenBufferSize.Y)
        VAR_3.Y = VAR_2->ScreenBufferSize.Y - 1;

    return VAR_3;
}
