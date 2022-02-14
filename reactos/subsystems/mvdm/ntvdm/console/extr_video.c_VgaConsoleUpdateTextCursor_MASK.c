
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int VOID ;
struct TYPE_6__ {int dwSize; int bVisible; } ;
struct TYPE_5__ {void* Y; void* X; } ;
typedef void* SHORT ;
typedef int DWORD ;
typedef TYPE_1__ COORD ;
typedef TYPE_2__ CONSOLE_CURSOR_INFO ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,void*,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_1__) ;
 int VAR_1 ;

VOID
FUNC_3(BOOL VAR_2,
                           BYTE VAR_3,
                           BYTE VAR_4,
                           BYTE VAR_5,
                           DWORD VAR_6,
                           WORD VAR_7)
{
    COORD VAR_8;
    CONSOLE_CURSOR_INFO VAR_9;

    if (VAR_3 < VAR_4)
    {

        VAR_9.bVisible = VAR_2;
        VAR_9.dwSize = (100 * (VAR_4 - VAR_3)) / VAR_5;
    }
    else
    {

        VAR_9.bVisible = VAR_0;
        VAR_9.dwSize = 1;
    }


    VAR_8.X = (SHORT)(VAR_7 % VAR_6);
    VAR_8.Y = (SHORT)(VAR_7 / VAR_6);

    FUNC_0("VgaConsoleUpdateTextCursor: (X = %d ; Y = %d)\n", VAR_8.X, VAR_8.Y);


    FUNC_1(VAR_1, &VAR_9);
    FUNC_2(VAR_1, VAR_8);
}
