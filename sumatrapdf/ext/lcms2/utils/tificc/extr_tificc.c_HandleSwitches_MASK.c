
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,...) ;
 void* VAR_3 ;
 int FUNC_1 (int) ;
 void* VAR_4 ;
 double VAR_5 ;
 void* VAR_6 ;
 double VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_2 (char*) ;
 int VAR_14 ;
 double FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;
 int * VAR_15 ;
 int * VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_5 (int,char**,char*) ;
 void* VAR_19 ;

__attribute__((used)) static
void FUNC_6(int VAR_20, char *VAR_21[])
{
    int VAR_22;

    while ((VAR_22=FUNC_5(VAR_20,VAR_21,"aAeEbBw:W:nNvVGgh:H:i:I:o:O:P:p:t:T:c:C:l:L:M:m:K:k:S:s:D:d:")) != VAR_1) {

        switch (VAR_22) {

        case 'a':
        case 'A':
            VAR_11 = VAR_12;
            break;
        case 'b':
        case 'B':
            VAR_0 = VAR_12;
            break;

        case 'c':
        case 'C':
            VAR_8 = FUNC_4(VAR_19);
            if (VAR_8 < 0 || VAR_8 > 3)
                FUNC_0("Unknown precalc mode '%d'", VAR_8);
            break;

        case 'd':
        case 'D': VAR_7 = FUNC_3(VAR_19);
            if (VAR_7 < 0 ||
                VAR_7 > 1.0)
                FUNC_2("Adaptation state should be 0..1");
            break;

        case 'e':
        case 'E':
            VAR_2 = VAR_12;
            break;

        case 'g':
        case 'G':
            VAR_3 = VAR_12;
            break;

        case 'v':
        case 'V':
            VAR_13 = VAR_12;
            break;

        case 'i':
        case 'I':
            if (VAR_18)
                FUNC_0("Device-link already specified");

            VAR_15 = VAR_19;
            break;

        case 'o':
        case 'O':
            if (VAR_18)
                FUNC_0("Device-link already specified");

            VAR_16 = VAR_19;
            break;

        case 'l':
        case 'L':
            if (VAR_15 != ((void*)0) || VAR_16 != ((void*)0))
                FUNC_0("input/output profiles already specified");

            VAR_15 = VAR_19;
            VAR_18 = VAR_12;
            break;

        case 'p':
        case 'P':
            VAR_17 = VAR_19;
            break;

        case 't':
        case 'T':
            VAR_6 = FUNC_4(VAR_19);
            break;

        case 'm':
        case 'M':
            VAR_9 = FUNC_4(VAR_19);
            break;

        case 'N':
        case 'n':
            VAR_4 = VAR_12;
            break;

        case 'W':
        case 'w':
            VAR_14 = FUNC_4(VAR_19);
            if (VAR_14 != 8 && VAR_14 != 16 && VAR_14 != 32)
                FUNC_0("Only 8, 16 and 32 bps are supported");
            break;

        case 'k':
        case 'K':
            VAR_5 = FUNC_3(VAR_19);
            if (VAR_5 < 0.0 || VAR_5 > 400.0)
                FUNC_0("Ink limit must be 0%%..400%%");
            break;


        case 's':
        case 'S': VAR_10 = VAR_19;
            break;

        case 'H':
        case 'h': {

            int VAR_23 = FUNC_4(VAR_19);
            FUNC_1(VAR_23);
            }
            break;

        default:

            FUNC_0("Unknown option - run without args to see valid ones");
        }

    }
}
