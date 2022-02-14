
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X; int Y; } ;
typedef int HANDLE ;
typedef int const DWORD ;
typedef TYPE_1__ COORD ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__) ;
 scalar_t__ FUNC_2 (int ,int const) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,char const*,int const,int const*,int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,TYPE_1__,char const,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(HANDLE VAR_4, COORD VAR_5)
{
    COORD VAR_6;
    DWORD VAR_7, VAR_8;
    const char* VAR_9 = "abcd\nf\tg";
    const int VAR_10 = FUNC_6(VAR_9);
    int VAR_11;

    FUNC_4(FUNC_0(VAR_4, &VAR_8) && FUNC_2(VAR_4,(VAR_8 | VAR_2) & ~(VAR_1)),
       "setting wrap at EOL & clearing processed output\n");


    VAR_6.X = VAR_5.X - 9; VAR_6.Y = 0;
    FUNC_4(FUNC_1(VAR_4, VAR_6) != 0, "Cursor in upper-left-9\n");

    FUNC_4(FUNC_3(VAR_4, VAR_9, VAR_10, &VAR_7, ((void*)0)) != 0 && VAR_7 == VAR_10, "WriteConsole\n");
    VAR_6.Y = 0;
    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    {
        VAR_6.X = VAR_5.X - 9 + VAR_11;
        FUNC_5(VAR_4, VAR_6, VAR_9[VAR_11], VAR_3);
    }
    VAR_6.X = VAR_5.X - 9 + VAR_10;
    FUNC_5(VAR_4, VAR_6, ' ', VAR_0);
    VAR_6.X = 0; VAR_6.Y = 1;
    FUNC_5(VAR_4, VAR_6, ' ', VAR_0);


    VAR_6.X = VAR_5.X - 3; VAR_6.Y = 0;
    FUNC_4(FUNC_1(VAR_4, VAR_6) != 0, "Cursor in upper-left-3\n");

    VAR_6.Y = 1;
    VAR_6.X = VAR_10 - 3;
    FUNC_5(VAR_4, VAR_6, ' ', VAR_0);
}
