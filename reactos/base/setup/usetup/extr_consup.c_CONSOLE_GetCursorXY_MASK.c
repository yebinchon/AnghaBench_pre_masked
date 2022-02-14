
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int Y; int X; } ;
struct TYPE_5__ {TYPE_1__ dwCursorPosition; } ;
typedef int * PSHORT ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

VOID
FUNC_2(
    PSHORT VAR_1,
    PSHORT VAR_2)
{
    CONSOLE_SCREEN_BUFFER_INFO VAR_3;

    FUNC_0(FUNC_1(VAR_0), &VAR_3);

    *VAR_1 = VAR_3.dwCursorPosition.X;
    *VAR_2 = VAR_3.dwCursorPosition.Y;
}
