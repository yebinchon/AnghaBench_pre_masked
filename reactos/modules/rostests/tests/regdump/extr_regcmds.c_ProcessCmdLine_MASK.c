
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ REGEDIT_ACTION ;
typedef char* LPSTR ;
typedef char CHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (char,char*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 char FUNC_4 (char) ;
 char* VAR_6 ;

BOOL FUNC_5(LPSTR VAR_7)
{
    REGEDIT_ACTION VAR_8 = VAR_3;
    LPSTR VAR_9 = VAR_7;
    CHAR VAR_10 = *VAR_9;

    while (VAR_10 && ((VAR_10 == '-') || (VAR_10 == '/'))) {
        char VAR_11;
        char VAR_12;

        VAR_9++;
        VAR_10 = *VAR_9;
        VAR_12 = *(VAR_9+1);
        VAR_11 = FUNC_4(VAR_10);
        if (!VAR_12 || FUNC_2(VAR_12)) {
            if (VAR_11 == 'S' || VAR_11 == 'V') {

            } else {
                switch (VAR_11) {
                case 'D':
                    VAR_8 = VAR_1;
                    break;
                case 'E':
                    VAR_8 = VAR_2;
                    break;
                case 'V':
                    VAR_8 = VAR_4;
                    break;
                case '?':
                    FUNC_3(VAR_6);
                    return VAR_5;

                    break;
                default:
                    FUNC_1(VAR_11, VAR_9);
                    return VAR_5;
                    break;
                }
            }
            VAR_9++;
        } else {
            if (VAR_12 == ':') {
                switch (VAR_11) {
                case 'L':

                case 'R':
                    VAR_9 += 2;
                    while (*VAR_9 && !FUNC_2(*VAR_9)) {
                        VAR_9++;
                    }
                    break;
                default:
                    FUNC_1(VAR_11, VAR_9);
                    return VAR_5;
                    break;
                }
            } else {

                VAR_9--;
                break;
            }
        }

        VAR_10 = *VAR_9;
        while (VAR_10 && FUNC_2(VAR_10)) {
            VAR_9++;
            VAR_10 = *VAR_9;
        }
    }
    if (VAR_8 == VAR_3) {
        VAR_8 = VAR_0;
    }
    return FUNC_0(VAR_8, VAR_9);
}
