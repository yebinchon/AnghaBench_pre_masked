
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,...) ;
 void* VAR_4 ;
 int FUNC_1 (int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 double VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 double FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int * VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_4 (void*,char*,int*,int*,int*) ;
 int FUNC_5 (int,char**,char*) ;
 void* VAR_18 ;

__attribute__((used)) static
void FUNC_6(int VAR_19, char *VAR_20[])
{
    int VAR_21;

    while ((VAR_21=FUNC_5(VAR_19,VAR_20,"bBnNvVGgh:H:i:I:o:O:P:p:t:T:c:C:Q:q:M:m:L:l:eEs:S:!:D:d:")) != VAR_2) {

        switch (VAR_21)
        {

        case 'b':
        case 'B':
            VAR_1 = VAR_11;
            break;

        case 'd':
        case 'D': VAR_7 = FUNC_2(VAR_18);
            if (VAR_7 < 0 ||
                VAR_7 > 1.0)
                FUNC_0("Adaptation state should be 0..1");
            break;

        case 'v':
        case 'V':
            VAR_12 = VAR_11;
            break;

        case 'i':
        case 'I':
            if (VAR_17)
                FUNC_0("Device-link already specified");

            VAR_13 = VAR_18;
            break;

        case 'o':
        case 'O':
            if (VAR_17)
                FUNC_0("Device-link already specified");

            VAR_14 = VAR_18;
            break;

        case 'l':
        case 'L':
            if (VAR_13 != ((void*)0) || VAR_14 != ((void*)0))
                FUNC_0("input/output profiles already specified");

            VAR_13 = VAR_18;
            VAR_17 = VAR_11;
            break;

        case 'p':
        case 'P':
            VAR_15 = VAR_18;
            break;

        case 't':
        case 'T':
            VAR_6 = FUNC_3(VAR_18);
            break;

        case 'N':
        case 'n':
            VAR_5 = VAR_11;
            break;

        case 'e':
        case 'E':
            VAR_3 = VAR_11;
            break;


        case 'g':
        case 'G':
            VAR_4 = VAR_11;
            break;

        case 'c':
        case 'C':
            VAR_8 = FUNC_3(VAR_18);
            if (VAR_8 < 0 || VAR_8 > 2)
                FUNC_0("Unknown precalc mode '%d'", VAR_8);
            break;

        case 'H':
        case 'h': {

            int VAR_22 = FUNC_3(VAR_18);
            FUNC_1(VAR_22);
                   }
            break;

        case 'q':
        case 'Q':
            VAR_16 = FUNC_3(VAR_18);
            if (VAR_16 > 100) VAR_16 = 100;
            if (VAR_16 < 0) VAR_16 = 0;
            break;

        case 'm':
        case 'M':
            VAR_9 = FUNC_3(VAR_18);
            break;

        case 's':
        case 'S': VAR_10 = VAR_18;
            break;

        case '!':
            if (FUNC_4(VAR_18, "%hu,%hu,%hu", &VAR_0[0], &VAR_0[1], &VAR_0[2]) == 3) {
                int VAR_23;
                for (VAR_23=0; VAR_23 < 3; VAR_23++) {
                    VAR_0[VAR_23] = (VAR_0[VAR_23] << 8) | VAR_0[VAR_23];
                }
            }
            break;

        default:

            FUNC_0("Unknown option - run without args to see valid ones");
        }

    }
}
