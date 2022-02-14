
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int t ;
typedef int U32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned int,unsigned int,double,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 () ;
 unsigned int VAR_3 ;
 int FUNC_5 (int const*,int,int) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_5, const char** VAR_6)
{
    U32 VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9;
    unsigned VAR_10 = VAR_3;
    unsigned VAR_11 = 0;
    int VAR_12 = VAR_0;
    int VAR_13 = 0;
    const char* VAR_14 = VAR_6[0];
    U32 VAR_15 = 0;


    for(VAR_9=1; VAR_9<VAR_5; VAR_9++) {
        const char* VAR_16 = VAR_6[VAR_9];

        if(!VAR_16) continue;


        if (VAR_16[0]=='-') {
            if (!FUNC_8(VAR_16, "--no-prompt")) { VAR_13=0; VAR_8=1; VAR_4=1; continue; }
            VAR_16++;

            while (*VAR_16!=0) {
                switch(*VAR_16)
                {
                case 'h':
                    return FUNC_3(VAR_14);

                case 'v':
                    VAR_4++;
                    VAR_16++;
                    break;

                case 'p':
                    VAR_13=1;
                    VAR_16++;
                    break;

                case 'i':
                    VAR_16++;
                    VAR_10 = 0; VAR_15 = 0;
                    while ((*VAR_16>='0') && (*VAR_16<='9')) {
                        VAR_10 *= 10;
                        VAR_10 += (unsigned)(*VAR_16 - '0');
                        VAR_16++;
                    }
                    break;

                case 'T':
                    VAR_16++;
                    VAR_10 = 0; VAR_15 = 0;
                    for (;;) {
                        switch(*VAR_16)
                        {
                            case 'm': VAR_15 *= 60; VAR_16++; continue;
                            case 's':
                            case 'n': VAR_16++; continue;
                            case '0':
                            case '1':
                            case '2':
                            case '3':
                            case '4':
                            case '5':
                            case '6':
                            case '7':
                            case '8':
                            case '9': VAR_15 *= 10; VAR_15 += (U32)(*VAR_16++ - '0'); continue;
                        }
                        break;
                    }
                    break;

                case 's':
                    VAR_16++;
                    VAR_7=0; VAR_8=1;
                    while ((*VAR_16>='0') && (*VAR_16<='9')) {
                        VAR_7 *= 10;
                        VAR_7 += (U32)(*VAR_16 - '0');
                        VAR_16++;
                    }
                    break;

                case 't':
                    VAR_16++;
                    VAR_11=0;
                    while ((*VAR_16>='0') && (*VAR_16<='9')) {
                        VAR_11 *= 10;
                        VAR_11 += (unsigned)(*VAR_16 - '0');
                        VAR_16++;
                    }
                    break;

                case 'P':
                    VAR_16++;
                    VAR_12=0;
                    while ((*VAR_16>='0') && (*VAR_16<='9')) {
                        VAR_12 *= 10;
                        VAR_12 += *VAR_16 - '0';
                        VAR_16++;
                    }
                    if (VAR_12<0) VAR_12=0;
                    if (VAR_12>100) VAR_12=100;
                    break;
                default: ;
                }
            }
        }
    }

    FUNC_7("Starting LZ4 fuzzer (%i-bits, v%s)\n", (int)(sizeof(size_t)*8), FUNC_4());

    if (!VAR_8) {
        time_t const VAR_17 = FUNC_9(((void*)0));
        U32 const VAR_18 = FUNC_5(&VAR_17, sizeof(VAR_17), 1);
        VAR_7 = VAR_18 % 10000;
    }
    FUNC_7("Seed = %u\n", VAR_7);

    if (VAR_12!=VAR_0) FUNC_7("Compressibility : %i%%\n", VAR_12);

    if ((VAR_8==0) && (VAR_11==0)) { FUNC_2(VAR_1); FUNC_2(VAR_2); }

    VAR_10 += (VAR_10==0);

    { int const VAR_19 = FUNC_1(VAR_7, VAR_10, VAR_11, ((double)VAR_12) / 100, VAR_15);
        if (VAR_13) {
            FUNC_0("press enter ... \n");
            (void)FUNC_6();
        }
        return VAR_19;
    }
}
