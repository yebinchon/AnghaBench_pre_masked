
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef int REGEDIT_ACTION ;
typedef int * LPSTR ;
typedef int BOOL ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int **,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 char* VAR_4 ;

BOOL FUNC_6(REGEDIT_ACTION VAR_5, LPSTR VAR_6)
{
    TCHAR VAR_7[VAR_2];
    TCHAR VAR_8[VAR_1];

    switch (VAR_5) {
    case 130:
        FUNC_2(&VAR_6, VAR_7, VAR_2);
        if (!VAR_7[0]) {
            FUNC_5("No file name is specified\n%s", VAR_4);
            return VAR_0;

        }
        while (VAR_7[0]) {
            if (!FUNC_3(VAR_7)) {
                FUNC_4("");
                FUNC_5("Can't open file \"%s\"\n", VAR_7);
                return VAR_0;

            }
            FUNC_2(&VAR_6, VAR_7, VAR_2);
        }
        break;
    case 129:
        FUNC_2(&VAR_6, VAR_8, VAR_1);
        if (!VAR_8[0]) {
            FUNC_5("No registry key is specified for removal\n%s", VAR_4);
            return VAR_0;

        }
        FUNC_0(VAR_8);
        break;
    case 128:
        VAR_7[0] = '\0';
        FUNC_2(&VAR_6, VAR_7, VAR_2);
        if (!VAR_7[0]) {
            FUNC_5("No file name is specified\n%s", VAR_4);
            return VAR_0;

        }
        if (VAR_6[0]) {
            FUNC_2(&VAR_6, VAR_8, VAR_1);
            FUNC_1(VAR_7, VAR_8);
        } else {
            FUNC_1(VAR_7, ((void*)0));
        }
        break;
    default:
        FUNC_5("Unhandled action!\n");
        return VAR_0;
    }
    return VAR_3;
}
