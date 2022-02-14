
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {char UnicodeChar; } ;
struct TYPE_21__ {void* Attributes; TYPE_1__ Char; } ;
struct TYPE_20__ {int X; int Y; } ;
struct TYPE_19__ {int Left; int Right; int Top; int Bottom; } ;
typedef TYPE_2__ SMALL_RECT ;
typedef int HANDLE ;
typedef TYPE_3__ COORD ;
typedef TYPE_4__ CHAR_INFO ;
typedef scalar_t__ BOOL ;


 char FUNC_0 (TYPE_3__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__,TYPE_3__) ;
 scalar_t__ FUNC_3 (TYPE_2__,TYPE_3__,TYPE_3__) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,TYPE_2__*,TYPE_3__,TYPE_4__*) ;
 int FUNC_5 (int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_6 (int,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ,TYPE_3__,char,void*) ;
 int FUNC_9 (int ,TYPE_3__,int ) ;

__attribute__((used)) static void FUNC_10(HANDLE VAR_6, COORD VAR_7)
{
    SMALL_RECT VAR_8, VAR_9;
    COORD VAR_10, VAR_11, VAR_12;
    CHAR_INFO VAR_13;
    BOOL VAR_14;
    FUNC_9(VAR_6, VAR_7, VAR_4);

    VAR_8.Left = 0;
    VAR_8.Right = 11 - 1;
    VAR_8.Top = 0;
    VAR_8.Bottom = 7 - 1;
    VAR_10.X = 11 + 3;
    VAR_10.Y = 7 + 3;
    VAR_13.Char.UnicodeChar = '#';
    VAR_13.Attributes = VAR_3;

    VAR_9.Left = 0;
    VAR_9.Right = VAR_7.X - 1;
    VAR_9.Top = 0;
    VAR_9.Bottom = VAR_7.Y - 1;

    FUNC_7(FUNC_4(VAR_6, &VAR_8, ((void*)0), VAR_10, &VAR_13), "Scrolling SB\n");

    for (VAR_11.Y = 0; VAR_11.Y < VAR_7.Y; VAR_11.Y++)
    {
        for (VAR_11.X = 0; VAR_11.X < VAR_7.X; VAR_11.X++)
        {
            if (((VAR_10).X <= (VAR_11).X && (VAR_11).X <= (VAR_10).X + (VAR_8).Right - (VAR_8).Left && (VAR_10).Y <= (VAR_11).Y && (VAR_11).Y <= (VAR_10).Y + (VAR_8).Bottom - (VAR_8).Top) && ((VAR_9).Left <= (VAR_11).X && (VAR_11).X <= (VAR_9).Right && (VAR_9).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_9).Bottom))
            {
                VAR_12.X = VAR_11.X - VAR_10.X;
                VAR_12.Y = VAR_11.Y - VAR_10.Y;
                FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_12), VAR_0);
            }
            else if (((VAR_8).Left <= (VAR_11).X && (VAR_11).X <= (VAR_8).Right && (VAR_8).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_8).Bottom) && ((VAR_9).Left <= (VAR_11).X && (VAR_11).X <= (VAR_9).Right && (VAR_9).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_9).Bottom))
                FUNC_8(VAR_6, VAR_11, '#', VAR_3);
            else FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_11), VAR_0);
        }
    }


    FUNC_9(VAR_6, VAR_7, VAR_4);

    VAR_8.Left = 0;
    VAR_8.Right = 11 - 1;
    VAR_8.Top = 0;
    VAR_8.Bottom = 7 - 1;
    VAR_10.X = 11 /2;
    VAR_10.Y = 7 / 2;
    VAR_13.Char.UnicodeChar = '#';
    VAR_13.Attributes = VAR_3;

    VAR_9.Left = 0;
    VAR_9.Right = VAR_7.X - 1;
    VAR_9.Top = 0;
    VAR_9.Bottom = VAR_7.Y - 1;

    FUNC_7(FUNC_4(VAR_6, &VAR_8, ((void*)0), VAR_10, &VAR_13), "Scrolling SB\n");

    for (VAR_11.Y = 0; VAR_11.Y < VAR_7.Y; VAR_11.Y++)
    {
        for (VAR_11.X = 0; VAR_11.X < VAR_7.X; VAR_11.X++)
        {
            if (VAR_10.X <= VAR_11.X && VAR_11.X < VAR_10.X + 11 && VAR_10.Y <= VAR_11.Y && VAR_11.Y < VAR_10.Y + 7)
            {
                VAR_12.X = VAR_11.X - VAR_10.X;
                VAR_12.Y = VAR_11.Y - VAR_10.Y;
                FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_12), VAR_0);
            }
            else if (VAR_11.X < 11 && VAR_11.Y < 7) FUNC_8(VAR_6, VAR_11, '#', VAR_3);
            else FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_11), VAR_0);
        }
    }


    FUNC_9(VAR_6, VAR_7, VAR_4);

    VAR_8.Left = 0;
    VAR_8.Right = 11 - 1;
    VAR_8.Top = 0;
    VAR_8.Bottom = 7 - 1;
    VAR_10.X = 11 + 3;
    VAR_10.Y = 7 + 3;
    VAR_13.Char.UnicodeChar = '#';
    VAR_13.Attributes = VAR_3;

    VAR_9.Left = 11 / 2;
    VAR_9.Right = FUNC_6(11 + 11 / 2, VAR_7.X - 1);
    VAR_9.Top = 7 / 2;
    VAR_9.Bottom = FUNC_6(7 + 7 / 2, VAR_7.Y - 1);

    FUNC_5(0xdeadbeef);
    VAR_14 = FUNC_4(VAR_6, &VAR_8, &VAR_9, VAR_10, &VAR_13);
    if (VAR_14)
    {
        for (VAR_11.Y = 0; VAR_11.Y < VAR_7.Y; VAR_11.Y++)
        {
            for (VAR_11.X = 0; VAR_11.X < VAR_7.X; VAR_11.X++)
            {
                if (((VAR_10).X <= (VAR_11).X && (VAR_11).X <= (VAR_10).X + (VAR_8).Right - (VAR_8).Left && (VAR_10).Y <= (VAR_11).Y && (VAR_11).Y <= (VAR_10).Y + (VAR_8).Bottom - (VAR_8).Top) && ((VAR_9).Left <= (VAR_11).X && (VAR_11).X <= (VAR_9).Right && (VAR_9).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_9).Bottom))
                {
                    VAR_12.X = VAR_11.X - VAR_10.X;
                    VAR_12.Y = VAR_11.Y - VAR_10.Y;
                    FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_12), VAR_0);
                }
                else if (((VAR_8).Left <= (VAR_11).X && (VAR_11).X <= (VAR_8).Right && (VAR_8).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_8).Bottom) && ((VAR_9).Left <= (VAR_11).X && (VAR_11).X <= (VAR_9).Right && (VAR_9).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_9).Bottom))
                    FUNC_8(VAR_6, VAR_11, '#', VAR_3);
                else FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_11), VAR_0);
            }
        }
    }
    else
    {

        FUNC_7(FUNC_1() == VAR_1,
            "Expected ERROR_NOT_ENOUGH_MEMORY, got %u\n", FUNC_1());
    }


    FUNC_9(VAR_6, VAR_7, VAR_4);

    VAR_8.Left = 0;
    VAR_8.Right = 11 - 1;
    VAR_8.Top = 0;
    VAR_8.Bottom = 7 - 1;
    VAR_10.X = 11 / 2 - 3;
    VAR_10.Y = 7 / 2 - 3;
    VAR_13.Char.UnicodeChar = '#';
    VAR_13.Attributes = VAR_3;

    VAR_9.Left = 11 / 2;
    VAR_9.Right = FUNC_6(11 + 11 / 2, VAR_7.X - 1);
    VAR_9.Top = 7 / 2;
    VAR_9.Bottom = FUNC_6(7 + 7 / 2, VAR_7.Y - 1);

    FUNC_7(FUNC_4(VAR_6, &VAR_8, &VAR_9, VAR_10, &VAR_13), "Scrolling SB\n");

    for (VAR_11.Y = 0; VAR_11.Y < VAR_7.Y; VAR_11.Y++)
    {
        for (VAR_11.X = 0; VAR_11.X < VAR_7.X; VAR_11.X++)
        {
            if (((VAR_10).X <= (VAR_11).X && (VAR_11).X <= (VAR_10).X + (VAR_8).Right - (VAR_8).Left && (VAR_10).Y <= (VAR_11).Y && (VAR_11).Y <= (VAR_10).Y + (VAR_8).Bottom - (VAR_8).Top) && ((VAR_9).Left <= (VAR_11).X && (VAR_11).X <= (VAR_9).Right && (VAR_9).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_9).Bottom))
            {
                VAR_12.X = VAR_11.X - VAR_10.X;
                VAR_12.Y = VAR_11.Y - VAR_10.Y;
                FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_12), VAR_0);
            }
            else if (((VAR_8).Left <= (VAR_11).X && (VAR_11).X <= (VAR_8).Right && (VAR_8).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_8).Bottom) && ((VAR_9).Left <= (VAR_11).X && (VAR_11).X <= (VAR_9).Right && (VAR_9).Top <= (VAR_11).Y && (VAR_11).Y <= (VAR_9).Bottom))
                FUNC_8(VAR_6, VAR_11, '#', VAR_3);
            else FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_11), VAR_0);
        }
    }
}
