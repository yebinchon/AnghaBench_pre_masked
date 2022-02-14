
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 void* FUNC_1 (char*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static BOOL FUNC_3(int VAR_12, TCHAR **VAR_13)
{
    INT VAR_14;
    BOOL VAR_15;
    BOOL VAR_16;
    BOOL VAR_17;

    if (VAR_12 < 2) {
        VAR_15 = VAR_5;
    } else {
        VAR_15 = VAR_4;
    }

    VAR_16 = VAR_4;
    VAR_17 = VAR_4;

    for (VAR_14 = 1; VAR_14 < VAR_12; VAR_14++) {
        if (VAR_13[VAR_14][0] == '-' || VAR_13[VAR_14][0] == '/') {
            switch (VAR_13[VAR_14][1]) {
                case 's':
                case 'S':
                    switch (VAR_13[VAR_14 + 1][0])
                    {
                        case 's':
                        case 'S':
                            VAR_9 = VAR_2;
                            VAR_14++;
                            break;
                        case 'i':
                        case 'I':
                            VAR_9 = VAR_1;
                            VAR_14++;
                            break;
                        case 'w':
                        case 'W':
                            VAR_9 = VAR_3;
                            VAR_14++;
                            break;
                        case 'e':
                        case 'E':
                            VAR_9 = VAR_0;
                            VAR_14++;
                            break;
                        case 'f':
                        case 'F':
                            VAR_9 = VAR_0;
                            VAR_14++;
                            break;
                        default:
                            FUNC_2("Bad option %s.\n", VAR_13[VAR_14]);
                            FUNC_0();
                            return VAR_4;
                    }
                    break;
                case 'm':
                case 'M':
                    VAR_8 = VAR_13[VAR_14 + 1];
                    VAR_14++;
                    break;
                case 'r':
                case 'R':
                    VAR_10 = VAR_13[VAR_14 + 1];
                    VAR_14++;
                    break;
                case 'c':
                case 'C':
                    VAR_6 = FUNC_1(VAR_13[VAR_14 + 1]);
                    VAR_14++;
                    break;
                case 'e':
                case 'E':
                    VAR_7 = FUNC_1(VAR_13[VAR_14 + 1]);
                    VAR_14++;
                    break;
                case '?':
                    VAR_15 = VAR_5;
                    break;
                default:
                    FUNC_2("Bad option %s.\n", VAR_13[VAR_14]);
                    FUNC_0();
                    return VAR_4;
            }
            if (VAR_17) {
                FUNC_2("Bad option format %s.\n", VAR_13[VAR_14]);
                return VAR_4;
            }
        } else {
            if (VAR_16) {
                FUNC_2("Bad parameter %s.\n", VAR_13[VAR_14]);
                return VAR_4;
            } else {
                VAR_11 = VAR_13[VAR_14];
                VAR_16 = VAR_5;
            }
        }
    }

    if ((!VAR_15) && (!VAR_16)) {
        FUNC_2("The event text must be specified.\n");
        return VAR_4;
    }

    if (VAR_15) {
        FUNC_0();
        return VAR_4;
    }

    return VAR_5;
}
