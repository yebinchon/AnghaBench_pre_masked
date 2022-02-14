
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X; int Y; } ;
typedef int HANDLE ;
typedef TYPE_1__ COORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_1__) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,TYPE_1__) ;

__attribute__((used)) static void FUNC_4(HANDLE VAR_2, COORD VAR_3)
{
    COORD VAR_4;

    VAR_4.X = VAR_4.Y = 0;
    FUNC_2(FUNC_1(0, VAR_4) == 0, "No handle\n");
    FUNC_2(FUNC_0() == VAR_0, "GetLastError: expecting %u got %u\n",
       VAR_0, FUNC_0());

    VAR_4.X = VAR_4.Y = 0;
    FUNC_2(FUNC_1(VAR_2, VAR_4) != 0, "Cursor in upper-left\n");
    FUNC_3(VAR_2, VAR_4);

    VAR_4.X = VAR_3.X - 1;
    VAR_4.Y = VAR_3.Y - 1;
    FUNC_2(FUNC_1(VAR_2, VAR_4) != 0, "Cursor in lower-right\n");
    FUNC_3(VAR_2, VAR_4);

    VAR_4.X = VAR_3.X;
    VAR_4.Y = VAR_3.Y - 1;
    FUNC_2(FUNC_1(VAR_2, VAR_4) == 0, "Cursor is outside\n");
    FUNC_2(FUNC_0() == VAR_1, "GetLastError: expecting %u got %u\n",
       VAR_1, FUNC_0());

    VAR_4.X = VAR_3.X - 1;
    VAR_4.Y = VAR_3.Y;
    FUNC_2(FUNC_1(VAR_2, VAR_4) == 0, "Cursor is outside\n");
    FUNC_2(FUNC_0() == VAR_1, "GetLastError: expecting %u got %u\n",
       VAR_1, FUNC_0());

    VAR_4.X = -1;
    VAR_4.Y = 0;
    FUNC_2(FUNC_1(VAR_2, VAR_4) == 0, "Cursor is outside\n");
    FUNC_2(FUNC_0() == VAR_1, "GetLastError: expecting %u got %u\n",
       VAR_1, FUNC_0());

    VAR_4.X = 0;
    VAR_4.Y = -1;
    FUNC_2(FUNC_1(VAR_2, VAR_4) == 0, "Cursor is outside\n");
    FUNC_2(FUNC_0() == VAR_1, "GetLastError: expecting %u got %u\n",
       VAR_1, FUNC_0());
}
