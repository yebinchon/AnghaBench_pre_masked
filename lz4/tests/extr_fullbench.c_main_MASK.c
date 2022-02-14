
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const**,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_6, const char** VAR_7)
{
    int VAR_8,
        VAR_9=2;
    const char* VAR_10 = VAR_7[0];
    const char* VAR_11=0;


    FUNC_3(VAR_0);

    if (VAR_6<2) { FUNC_4(VAR_10); return 1; }

    for(VAR_8=1; VAR_8<VAR_6; VAR_8++) {
        const char* VAR_12 = VAR_7[VAR_8];

        if(!VAR_12) continue;
        if (!FUNC_6(VAR_12, "--no-prompt")) {
            VAR_5 = 1;
            continue;
        }


        if (VAR_12[0]=='-') {
            while (VAR_12[1]!=0) {
                VAR_12 ++;

                switch(VAR_12[0])
                {

                case 'c':
                    VAR_4 = 0;
                    while ((VAR_12[1]>= '0') && (VAR_12[1]<= '9')) {
                        VAR_1 *= 10;
                        VAR_1 += VAR_12[1] - '0';
                        VAR_12++;
                    }
                    break;


                case 'd':
                    VAR_2 = 0;
                    while ((VAR_12[1]>= '0') && (VAR_12[1]<= '9')) {
                        VAR_3 *= 10;
                        VAR_3 += VAR_12[1] - '0';
                        VAR_12++;
                    }
                    break;


                case 'h' :
                case 'H': FUNC_7(VAR_10); FUNC_8(); return 0;


                case 'B':
                    while (VAR_12[1]!=0)
                    switch(VAR_12[1])
                    {
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    { int VAR_13 = VAR_12[1] - '0';
                        int VAR_14 = 1 << (8 + 2*VAR_13);
                        FUNC_0(VAR_14);
                        VAR_12++;
                        break;
                    }
                    case 'D': VAR_12++; break;
                    default : goto _exit_blockProperties;
                    }
_exit_blockProperties:
                    break;


                case 'i':
                    if ((VAR_12[1] >='0') && (VAR_12[1] <='9')) {
                        int VAR_15 = VAR_12[1] - '0';
                        FUNC_1(VAR_15);
                        VAR_12++;
                    }
                    break;


                case 'p': FUNC_2(); break;


                default : FUNC_4(VAR_10); return 1;
                }
            }
            continue;
        }


        if (!VAR_11) { VAR_11=VAR_12; VAR_9=VAR_8; continue; }

    }


    if(!VAR_11) { FUNC_4(VAR_10); return 1; }

    return FUNC_5(VAR_7+VAR_9, VAR_6-VAR_9);

}
