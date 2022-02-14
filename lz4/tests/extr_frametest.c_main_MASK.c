
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int t ;
typedef int U32 ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (char const* const) ;
 int VAR_1 ;
 int FUNC_2 (int const*,int,int) ;
 int FUNC_3 (int,double) ;
 int VAR_2 ;
 int FUNC_4 (int,unsigned int,unsigned int,double,int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

int FUNC_7(int VAR_6, const char** VAR_7)
{
    U32 VAR_8=0;
    int VAR_9=0;
    int VAR_10;
    unsigned VAR_11 = VAR_3;
    unsigned VAR_12 = 0;
    int VAR_13 = VAR_0;
    int VAR_14=0;
    U32 VAR_15=0;
    const char* const VAR_16 = VAR_7[0];


    for (VAR_10=1; VAR_10<VAR_6; VAR_10++) {
        const char* VAR_17 = VAR_7[VAR_10];

        if(!VAR_17) continue;


        if (VAR_17[0]=='-') {
            if (!FUNC_5(VAR_17, "--no-prompt")) {
                VAR_4=1;
                VAR_9=1;
                VAR_2=1;
                continue;
            }
            VAR_17++;

            while (*VAR_17!=0) {
                switch(*VAR_17)
                {
                case 'h':
                    return FUNC_1(VAR_16);
                case 'v':
                    VAR_17++;
                    VAR_2++;
                    break;
                case 'q':
                    VAR_17++;
                    VAR_2--;
                    break;
                case 'p':
                    VAR_17++;
                    VAR_5 = 1;
                    break;

                case 'i':
                    VAR_17++;
                    VAR_11=0; VAR_15=0;
                    while ((*VAR_17>='0') && (*VAR_17<='9')) {
                        VAR_11 *= 10;
                        VAR_11 += (unsigned)(*VAR_17 - '0');
                        VAR_17++;
                    }
                    break;

                case 'T':
                    VAR_17++;
                    VAR_11 = 0; VAR_15 = 0;
                    for (;;) {
                        switch(*VAR_17)
                        {
                            case 'm': VAR_15 *= 60; VAR_17++; continue;
                            case 's':
                            case 'n': VAR_17++; continue;
                            case '0':
                            case '1':
                            case '2':
                            case '3':
                            case '4':
                            case '5':
                            case '6':
                            case '7':
                            case '8':
                            case '9': VAR_15 *= 10; VAR_15 += (U32)(*VAR_17++ - '0'); continue;
                        }
                        break;
                    }
                    break;

                case 's':
                    VAR_17++;
                    VAR_8=0;
                    VAR_9=1;
                    while ((*VAR_17>='0') && (*VAR_17<='9')) {
                        VAR_8 *= 10;
                        VAR_8 += (U32)(*VAR_17 - '0');
                        VAR_17++;
                    }
                    break;
                case 't':
                    VAR_17++;
                    VAR_12=0;
                    while ((*VAR_17>='0') && (*VAR_17<='9')) {
                        VAR_12 *= 10;
                        VAR_12 += (unsigned)(*VAR_17 - '0');
                        VAR_17++;
                    }
                    break;
                case 'P':
                    VAR_17++;
                    VAR_13=0;
                    while ((*VAR_17>='0') && (*VAR_17<='9')) {
                        VAR_13 *= 10;
                        VAR_13 += *VAR_17 - '0';
                        VAR_17++;
                    }
                    if (VAR_13<0) VAR_13=0;
                    if (VAR_13>100) VAR_13=100;
                    break;
                default:
                    ;
                    return FUNC_1(VAR_16);
                }
            }
        }
    }


    FUNC_0("Starting lz4frame tester (%i-bits, %s)\n", (int)(sizeof(size_t)*8), VAR_1);

    if (!VAR_9) {
        time_t const VAR_18 = FUNC_6(((void*)0));
        U32 const VAR_19 = FUNC_2(&VAR_18, sizeof(VAR_18), 1);
        VAR_8 = VAR_19 % 10000;
    }
    FUNC_0("Seed = %u\n", VAR_8);
    if (VAR_13!=VAR_0) FUNC_0("Compressibility : %i%%\n", VAR_13);

    VAR_11 += (VAR_11==0);

    if (VAR_12==0) VAR_14 = FUNC_3(VAR_8, ((double)VAR_13) / 100);
    if (VAR_14) return 1;
    return FUNC_4(VAR_8, VAR_11, VAR_12, ((double)VAR_13) / 100, VAR_15);
}
