
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* PCHAR ;
typedef int INT ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*) ;

INT
FUNC_6(INT VAR_11,
     PCHAR* VAR_12)
{
    int VAR_13;
    ULONG VAR_14, VAR_15;
    CHAR VAR_16;
    PCHAR VAR_17;
    CHAR VAR_18[16] = {0};


    for (VAR_13 = 1; VAR_13 < VAR_11; ++VAR_13)
    {
        if (VAR_12[VAR_13][0] != '/' && VAR_12[VAR_13][0] != '-')
            break;

        if (VAR_12[VAR_13][1] && !VAR_12[VAR_13][2])
            VAR_16 = VAR_12[VAR_13][1];
        else
            VAR_16 = 0;


        switch (VAR_16)
        {

            case 'A':
            case 'a':
                VAR_5 = 0;
                break;


            case 'U':
            case 'u':
                VAR_5 = 1;
                break;


            case 'V':
            case 'v':
                VAR_6 = 1;
                break;


            case 'N':
            case 'n':
                VAR_2 = 1;
                break;


            case 'K':
            case 'k':
                VAR_1 = 1;
                break;


            case 'W':
            case 'w':
                VAR_3 = 1;
                break;


            case 'I':
            case 'i':
                VAR_0 = 1;
                break;


            case 'X':
            case 'x':
                VAR_0 = 0;
                break;


            case 'M':
            case 'm':
                VAR_0 = 2;
                break;


            case 'O':
            case 'o':
                VAR_0 = 3;
                break;


            case 'S':
            case 's':
                VAR_4 = 1;
                break;

            default:

                FUNC_1();
                break;
        }
    }


    if (VAR_13 == VAR_11) FUNC_1();


    if (!VAR_2)
    {

        FUNC_4("\nKbdTool v%d.%02d - convert keyboard text file to C file or a keyboard layout DLL\n\n",
               VAR_8, VAR_7);
    }


    VAR_10 = VAR_12[VAR_13];


    VAR_17 = "rb";
    if (!VAR_5) VAR_17 = "rt";


    VAR_9 = FUNC_3(VAR_10, VAR_17);
    if (!VAR_9)
    {

        FUNC_4("Unable to open '%s' for read.\n", VAR_10);
        FUNC_2(1);
    }


    if (!VAR_2)
    {

        if (VAR_4)
        {

            FUNC_5(VAR_18, "source files");
        }
        else
        {

            switch (VAR_0)
            {

                case 0:
                    FUNC_5(VAR_18, "i386/x86");
                    break;
                case 1:
                    FUNC_5(VAR_18, "ia64");
                    break;
                case 2:
                    FUNC_5(VAR_18, "amd64/x64");
                    break;
                case 3:
                    FUNC_5(VAR_18, "wow64");
                    break;
                default:
                    FUNC_5(VAR_18, "unknown purpose");
                    break;
            }
        }


        FUNC_4("Compiling layout information from '%s' for %s.\n", VAR_10, VAR_18);
    }


    VAR_15 = FUNC_0();


    if (!(VAR_4) && !(VAR_1)) VAR_14 = 0;


    if (VAR_15 == 0)
    {

        if (!VAR_2) FUNC_4("All tasks completed successfully.\n");
    }
    else
    {

        FUNC_4("\n     %13d\n", VAR_15);
    }


    return VAR_14;
}
