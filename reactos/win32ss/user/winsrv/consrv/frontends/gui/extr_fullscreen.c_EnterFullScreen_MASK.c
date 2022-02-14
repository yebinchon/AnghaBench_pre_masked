
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dmSize; int dmPelsWidth; int dmPelsHeight; int dmFields; int dmDisplayFixedOutput; } ;
typedef int PGUI_CONSOLE_DATA ;
typedef int DevMode ;
typedef TYPE_1__ DEVMODEW ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int) ;

BOOL
FUNC_2(PGUI_CONSOLE_DATA VAR_6)
{
    DEVMODEW VAR_7;

    FUNC_1(&VAR_7, sizeof(VAR_7));
    VAR_7.dmSize = sizeof(VAR_7);

    VAR_7.dmDisplayFixedOutput = VAR_2;

    VAR_7.dmPelsWidth = 640;
    VAR_7.dmPelsHeight = 480;

    VAR_7.dmFields = VAR_3 | VAR_5 | VAR_4;

    return (FUNC_0(&VAR_7, VAR_0) == VAR_1);
}
