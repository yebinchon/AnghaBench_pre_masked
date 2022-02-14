
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int X; int Y; } ;
struct TYPE_5__ {TYPE_1__ dwMaximumWindowSize; } ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(int *VAR_1, int *VAR_2)
{
    CONSOLE_SCREEN_BUFFER_INFO VAR_3;
    if (FUNC_0(FUNC_1(VAR_0), &VAR_3)) {
        *VAR_1 = VAR_3.dwMaximumWindowSize.X - 1;
        *VAR_2 = VAR_3.dwMaximumWindowSize.Y;
    }
}
