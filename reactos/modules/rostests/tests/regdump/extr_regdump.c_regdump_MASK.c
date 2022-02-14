
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char FUNC_7 (char) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_9, char* VAR_10[])
{
    char VAR_11[500];

    if (VAR_9 > 1) {

        if (FUNC_6(VAR_10[1], "help")) {
            FUNC_8(VAR_10[0]);
        } else if (FUNC_6(VAR_10[1], "HKCR")) {
            FUNC_2('1');
        } else if (FUNC_6(VAR_10[1], "HKCU")) {
            FUNC_2('2');
        } else if (FUNC_6(VAR_10[1], "HKLM")) {
            FUNC_2('3');
        } else if (FUNC_6(VAR_10[1], "HKU")) {
            FUNC_2('4');
        } else if (FUNC_6(VAR_10[1], "HKCC")) {
            FUNC_2('5');
        } else if (FUNC_6(VAR_10[1], "HKRR")) {
            FUNC_2('6');
        } else {
            FUNC_3("started with argc = %d, argv[1] = %s (unknown?)\n", VAR_9, VAR_10[1]);
        }
        return 0;
    }
    FUNC_4();
    while (1) {
        FUNC_0(VAR_11, sizeof(VAR_11));
        switch (FUNC_7(VAR_11[0])) {
        case '0':
            return(0);
        case '1':
            FUNC_5(VAR_11, VAR_0);
            goto doit;
        case '2':
            FUNC_5(VAR_11, VAR_1);
            goto doit;
        case '3':
            FUNC_5(VAR_11, VAR_2);
            goto doit;
        case '4':
            FUNC_5(VAR_11, VAR_3);
            goto doit;
        case '5':
            FUNC_5(VAR_11, VAR_4);
            goto doit;
        case '6':
            FUNC_5(VAR_11, VAR_5);
            goto doit;
        case '7':
            FUNC_5(VAR_11, VAR_6);
            goto doit;
        case '8':
            FUNC_5(VAR_11, VAR_7);
            goto doit;
        case '9':
            FUNC_5(VAR_11, VAR_8);
            goto doit;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            FUNC_2(FUNC_7(VAR_11[0]) - 'A' + 1);
            break;
        default: doit:
            if (!FUNC_1(VAR_11)) {
                FUNC_3("invalid input.\n");
                FUNC_4();
            } else {
                FUNC_3("done.\n");
            }
            break;
        }
    }
    return 0;
}
