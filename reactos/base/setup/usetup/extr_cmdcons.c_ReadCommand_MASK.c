
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int UnicodeChar; } ;
struct TYPE_9__ {int dwControlKeyState; int wVirtualKeyCode; TYPE_1__ uChar; } ;
struct TYPE_10__ {TYPE_2__ KeyEvent; } ;
struct TYPE_12__ {TYPE_3__ Event; } ;
struct TYPE_11__ {int maxx; int maxy; scalar_t__ bInsert; } ;
typedef int SHORT ;
typedef TYPE_4__* PCONSOLE_STATE ;
typedef int* LPSTR ;
typedef int* LPCSTR ;
typedef int INT ;
typedef TYPE_5__ INPUT_RECORD ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int*,int,int,int) ;
 int FUNC_9 (char*,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (int*,int*) ;
 int FUNC_11 (int,int*) ;
 int FUNC_12 (int*) ;
 int FUNC_13 () ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_14 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (int*,int ,int) ;
 int FUNC_16 (int*) ;

__attribute__((used)) static
BOOL
FUNC_17(
    PCONSOLE_STATE VAR_8,
    LPSTR VAR_9,
    INT VAR_10)
{
    SHORT VAR_11;
    SHORT VAR_12;
    SHORT VAR_13;
    SHORT VAR_14;
    SHORT VAR_15;
    INT VAR_16;
    INT VAR_17 = 0;
    INT VAR_18 = 0;
    INPUT_RECORD VAR_19;
    CHAR VAR_20;
    BOOL VAR_21 = VAR_0;
    BOOL VAR_22;






    FUNC_4(&VAR_11, &VAR_12);
    VAR_13 = VAR_11;
    VAR_14 = VAR_12;

    FUNC_15(VAR_9, 0, VAR_10 * sizeof(CHAR));

    FUNC_6(VAR_8->bInsert, VAR_5);

    do
    {
        VAR_21 = VAR_0;
        FUNC_0(&VAR_19);

        if (VAR_19.Event.KeyEvent.dwControlKeyState &
            (VAR_3 |VAR_1|
             VAR_4|VAR_2) )
        {
            switch (VAR_19.Event.KeyEvent.wVirtualKeyCode)
            {
            }
        }

        VAR_22 = VAR_0;

        switch (VAR_19.Event.KeyEvent.wVirtualKeyCode)
        {
            case 139:

                if (VAR_17 > 0 && VAR_18 > 0)
                {
                    if (VAR_17 == VAR_18)
                    {

                        VAR_9[VAR_17 - 1] = L'\0';
                        if (FUNC_3 () != 0)
                        {
                            FUNC_2("\b \b");
                            VAR_13--;
                        }
                        else
                        {
                            FUNC_7((SHORT)(VAR_8->maxx - 1), (SHORT)(FUNC_5 () - 1));
                            FUNC_1(' ');
                            FUNC_7((SHORT)(VAR_8->maxx - 1), (SHORT)(FUNC_5 () - 1));
                            VAR_14--;
                            VAR_13 = VAR_8->maxx - 1;
                        }
                    }
                    else
                    {
                        for (VAR_16 = VAR_17 - 1; VAR_16 < VAR_18; VAR_16++)
                            VAR_9[VAR_16] = VAR_9[VAR_16 + 1];
                        if (FUNC_3 () != 0)
                        {
                            FUNC_7 ((SHORT)(FUNC_3 () - 1), FUNC_5 ());
                            VAR_13--;
                        }
                        else
                        {
                            FUNC_7 ((SHORT)(VAR_8->maxx - 1), (SHORT)(FUNC_5 () - 1));
                            VAR_14--;
                            VAR_13 = VAR_8->maxx - 1;
                        }
                        FUNC_4(&VAR_13, &VAR_14);
                        FUNC_2("%s ", &VAR_9[VAR_17 - 1]);
                        FUNC_7(VAR_13, VAR_14);
                    }
                    VAR_18--;
                    VAR_17--;
                }
                break;

            case 132:

                VAR_8->bInsert ^= VAR_5;
                FUNC_6(VAR_8->bInsert, VAR_5);
                break;

            case 138:

                if (VAR_17 != VAR_18 && VAR_18 > 0)
                {
                    for (VAR_16 = VAR_17; VAR_16 < VAR_18; VAR_16++)
                        VAR_9[VAR_16] = VAR_9[VAR_16 + 1];
                    VAR_18--;
                    FUNC_4(&VAR_13, &VAR_14);
                    FUNC_2("%s ", &VAR_9[VAR_17]);
                    FUNC_7(VAR_13, VAR_14);
                }
                break;

            case 133:

                if (VAR_17 != 0)
                {
                    FUNC_7(VAR_11, VAR_12);
                    VAR_13 = VAR_11;
                    VAR_14 = VAR_12;
                    VAR_17 = 0;
                }
                break;

            case 136:

                if (VAR_17 != VAR_18)
                {
                    FUNC_7(VAR_11, VAR_12);
                    FUNC_2("%s", VAR_9);
                    FUNC_4(&VAR_13, &VAR_14);
                    VAR_17 = VAR_18;
                }
                break;

            case 'M':
            case 'C':

                VAR_22 = VAR_5;
                if (!(VAR_19.Event.KeyEvent.dwControlKeyState &
                    (VAR_4|VAR_2)))
                {
                    break;
                }

            case 130:






                VAR_9[VAR_18] = '\0';
                FUNC_1('\n');
                VAR_21 = VAR_5;
                break;

            case 135:

                FUNC_8 (VAR_9, VAR_10, VAR_11, VAR_12);
                VAR_13 = VAR_11;
                VAR_14 = VAR_12;
                VAR_17 = VAR_18 = 0;
                break;





            case 128:
                break;

            case 137:
                break;

            case 131:

                if (VAR_17 > 0)
                {
                    VAR_17--;
                    if (FUNC_3() == 0)
                    {
                        FUNC_7((SHORT)(VAR_8->maxx - 1), (SHORT)(FUNC_5 () - 1));
                        VAR_13 = VAR_8->maxx - 1;
                        VAR_14--;
                    }
                    else
                    {
                        FUNC_7((SHORT)(FUNC_3 () - 1), FUNC_5 ());
                        VAR_13--;
                    }
                }
                break;

            case 129:

                if (VAR_17 != VAR_18)
                {
                    VAR_17++;
                    if (FUNC_3() == VAR_8->maxx - 1)
                    {
                        FUNC_7(0, (SHORT)(FUNC_5 () + 1));
                        VAR_13 = 0;
                        VAR_14++;
                    }
                    else
                    {
                        FUNC_7((SHORT)(FUNC_3 () + 1), FUNC_5 ());
                        VAR_13++;
                    }
                }
                break;

            default:

                VAR_22 = VAR_5;

        }

        VAR_20 = VAR_19.Event.KeyEvent.uChar.UnicodeChar;
        if (VAR_20 >= 32 && (VAR_18 != (VAR_10 - 2)) && VAR_22)
        {

            if (VAR_8->bInsert && VAR_17 != VAR_18)
            {


                VAR_15 = FUNC_16(VAR_9 + VAR_17) + VAR_13;
                if ((VAR_15 % VAR_8->maxx) == (VAR_8->maxx - 1) &&
                    (VAR_15 / VAR_8->maxx) + VAR_14 == (VAR_8->maxy - 1))
                {
                    VAR_12--;
                    VAR_14--;
                }

                for (VAR_16 = VAR_18; VAR_16 > VAR_17; VAR_16--)
                    VAR_9[VAR_16] = VAR_9[VAR_16 - 1];
                VAR_9[VAR_17++] = VAR_20;
                if (VAR_13 == VAR_8->maxx - 1)
                    VAR_13 = 0, VAR_14++;
                else
                    VAR_13++;
                FUNC_2("%s", &VAR_9[VAR_17 - 1]);
                FUNC_7(VAR_13, VAR_14);
                VAR_18++;
            }
            else
            {
                if (VAR_17 == VAR_18)
                    VAR_18++;
                VAR_9[VAR_17++] = VAR_20;
                if (FUNC_3 () == VAR_8->maxx - 1 && FUNC_5 () == VAR_8->maxy - 1)
                    VAR_12--, VAR_14--;
                if (FUNC_3 () == VAR_8->maxx - 1)
                    VAR_13 = 0, VAR_14++;
                else
                    VAR_13++;
                FUNC_1(VAR_20);
            }
        }
    }
    while (!VAR_21);

    FUNC_6(VAR_8->bInsert, VAR_5);

    return VAR_5;
}
