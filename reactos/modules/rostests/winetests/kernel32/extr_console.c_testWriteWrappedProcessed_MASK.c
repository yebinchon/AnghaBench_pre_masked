
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_7__ {int X; int Y; } ;
typedef int HANDLE ;
typedef int const DWORD ;
typedef TYPE_1__ COORD ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,scalar_t__*,int,TYPE_1__,int const*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__) ;
 scalar_t__ FUNC_3 (int ,int const) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,char const*,int const,int const*,int *) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,TYPE_1__,char const,scalar_t__) ;
 int FUNC_7 (int ,TYPE_1__) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(HANDLE VAR_4, COORD VAR_5)
{
    COORD VAR_6;
    DWORD VAR_7, VAR_8;
    const char* VAR_9 = "abcd\nf\tg";
    const int VAR_10 = FUNC_8(VAR_9);
    int VAR_11;
    WORD VAR_12;

    FUNC_5(FUNC_0(VAR_4, &VAR_8) && FUNC_3(VAR_4, VAR_8 | (VAR_2|VAR_1)),
       "setting wrap at EOL & processed output\n");


    VAR_6.X = VAR_5.X - 9; VAR_6.Y = 0;
    FUNC_5(FUNC_2(VAR_4, VAR_6) != 0, "Cursor in upper-left-9\n");

    FUNC_5(FUNC_4(VAR_4, VAR_9, VAR_10, &VAR_7, ((void*)0)) != 0 && VAR_7 == VAR_10, "WriteConsole\n");
    for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
    {
        VAR_6.X = VAR_5.X - 9 + VAR_11;
        FUNC_6(VAR_4, VAR_6, VAR_9[VAR_11], VAR_3);
    }
    VAR_6.X = VAR_5.X - 9 + VAR_11;
    FUNC_1(VAR_4, &VAR_12, 1, VAR_6, &VAR_7);
    if (VAR_12 == VAR_3)
        FUNC_9("Win9x/WinMe changes attribs for '\\n' up to 'f'\n");
    else
        FUNC_6(VAR_4, VAR_6, ' ', VAR_0);
    VAR_6.X = 0; VAR_6.Y++;
    FUNC_6(VAR_4, VAR_6, VAR_9[5], VAR_3);
    for (VAR_6.X = 1; VAR_6.X < 8; VAR_6.X++)
        FUNC_6(VAR_4, VAR_6, ' ', VAR_3);
    FUNC_6(VAR_4, VAR_6, VAR_9[7], VAR_3);
    VAR_6.X++;
    FUNC_6(VAR_4, VAR_6, ' ', VAR_0);
    FUNC_7(VAR_4, VAR_6);


    VAR_6.X = VAR_5.X - 3; VAR_6.Y = 2;
    FUNC_5(FUNC_2(VAR_4, VAR_6) != 0, "Cursor in upper-left-3\n");

    FUNC_5(FUNC_4(VAR_4, VAR_9, VAR_10, &VAR_7, ((void*)0)) != 0 && VAR_7 == VAR_10, "WriteConsole\n");
    for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    {
        VAR_6.X = VAR_5.X - 3 + VAR_11;
        FUNC_6(VAR_4, VAR_6, VAR_9[VAR_11], VAR_3);
    }
    VAR_6.X = 0; VAR_6.Y++;
    FUNC_6(VAR_4, VAR_6, VAR_9[3], VAR_3);
    VAR_6.X++;
    FUNC_1(VAR_4, &VAR_12, 1, VAR_6, &VAR_7);
    if (VAR_12 == VAR_3)
        FUNC_9("Win9x/WinMe changes attribs for '\\n' up to 'f'\n");
    else
        FUNC_6(VAR_4, VAR_6, ' ', VAR_0);

    VAR_6.X = 0; VAR_6.Y++;
    FUNC_6(VAR_4, VAR_6, VAR_9[5], VAR_3);
    for (VAR_6.X = 1; VAR_6.X < 8; VAR_6.X++)
        FUNC_6(VAR_4, VAR_6, ' ', VAR_3);
    FUNC_6(VAR_4, VAR_6, VAR_9[7], VAR_3);
    VAR_6.X++;
    FUNC_6(VAR_4, VAR_6, ' ', VAR_0);
    FUNC_7(VAR_4, VAR_6);
}
