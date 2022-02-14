
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cRess_t ;
typedef int FILE ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int,char*,char const*,int ) ;
 int FUNC_2 (char const* const) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,int *,unsigned int,size_t) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;

int FUNC_10(int VAR_5, const char** VAR_6)
{
    int VAR_7;
    unsigned VAR_8=0;
    size_t VAR_9=0;
    const char* const VAR_10 = VAR_6[0];


    for (VAR_7=1; VAR_7<VAR_5; VAR_7++) {
        const char* VAR_11 = VAR_6[VAR_7];

        if(!VAR_11) continue;


        if (VAR_11[0]=='-') {
            if (!FUNC_8(VAR_11, "--no-prompt")) {
                VAR_3=1;
                VAR_1=1;
                continue;
            }
            VAR_11++;

            while (*VAR_11!=0) {
                switch(*VAR_11)
                {
                case 'h':
                    return FUNC_2(VAR_10);
                case 'v':
                    VAR_11++;
                    VAR_1++;
                    break;
                case 'q':
                    VAR_11++;
                    VAR_1--;
                    break;
                case 'p':
                    VAR_11++;
                    VAR_4 = 1;
                    break;

                case 'b':
                    VAR_11++;
                    VAR_8=0;
                    while ((*VAR_11>='0') && (*VAR_11<='9')) {
                        VAR_8 *= 10;
                        VAR_8 += (unsigned)(*VAR_11 - '0');
                        VAR_11++;
                    }
                    break;

                case 'B':
                    VAR_11++;
                    VAR_9=0;
                    while ((*VAR_11>='0') && (*VAR_11<='9')) {
                        VAR_9 *= 10;
                        VAR_9 += (size_t)(*VAR_11 - '0');
                        VAR_11++;
                    }
                    break;

                default:
                    ;
                    return FUNC_2(VAR_10);
                }
            }
        } else {
            int VAR_12;
            FILE *VAR_13;
            cRess_t VAR_14;
            if (VAR_8 == 0 || VAR_9 == 0)
              return FUNC_2(VAR_10);
            FUNC_0("Starting frame checker (%i-bits, %s)\n", (int)(sizeof(size_t)*8), VAR_0);
            VAR_12 = FUNC_3(&VAR_14);
            if (VAR_12) return (VAR_12);
            VAR_13 = FUNC_5(VAR_11, "rb");
            if ( VAR_13==((void*)0) ) {
                FUNC_7(VAR_14);
                FUNC_1(1, "%s: %s \n", VAR_11, FUNC_9(VAR_2));
            }
            VAR_12 = FUNC_6(VAR_14, VAR_13, VAR_8, VAR_9);
            FUNC_7(VAR_14);
            FUNC_4(VAR_13);
            return (VAR_12);
        }
    }
    return 0;
}
