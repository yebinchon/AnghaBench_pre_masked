
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double cmsFloat64Number ;
typedef int cmsContext ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,...) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 double FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_3 (int ,double) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_4 (int,char**,char*) ;
 void* VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static
void FUNC_5(cmsContext VAR_21, int VAR_22, char *VAR_23[])
{
    int VAR_24;

    while ((VAR_24 = FUNC_4(VAR_22, VAR_23,
        "bBC:c:d:D:eEgGI:i:L:l:m:M:nNO:o:p:P:QqSsT:t:V:v:WwxX!:")) != VAR_1) {

    switch (VAR_24){

        case '!':
            VAR_5 = VAR_19;
            break;

        case 'b':
        case 'B':
            VAR_0 = VAR_9;
            break;

        case 'c':
        case 'C':
            VAR_7 = FUNC_2(VAR_19);
            if (VAR_7 < 0 || VAR_7 > 3)
                FUNC_0("Unknown precalc mode '%d'", VAR_7);
            break;

        case 'd':
        case 'D': {
            cmsFloat64Number VAR_25 = FUNC_1(VAR_19);
            if (VAR_25 < 0 ||
                VAR_25 > 1.0)
                FUNC_0("Adaptation states should be between 0 and 1");

            FUNC_3(VAR_21, VAR_25);
                  }
                  break;

        case 'e':
        case 'E':
            VAR_16 = VAR_2;
            break;

        case 'g':
        case 'G':
            VAR_3 = VAR_9;
            break;

        case 'i':
        case 'I':
            if (VAR_15)
                FUNC_0("icctrans: Device-link already specified");

            VAR_12 = VAR_19;
            break;

        case 'l':
        case 'L':
            VAR_12 = VAR_19;
            VAR_15 = VAR_9;
            break;


        case 'm':
        case 'M':
            VAR_8 = FUNC_2(VAR_19);
            if (VAR_8 > 3)
                FUNC_0("Unknown Proofing Intent '%d'", VAR_8);
            break;


        case 'n':
        case 'N':
            VAR_10 = 0;
            break;


        case 'o':
        case 'O':
            if (VAR_15)
                FUNC_0("icctrans: Device-link already specified");
            VAR_13 = VAR_19;
            break;


        case 'p':
        case 'P':
            VAR_14 = VAR_19;
            break;


        case 'q':
        case 'Q':
            VAR_17 = VAR_9;
            break;


        case 's':
        case 'S':
               VAR_18 = VAR_2;
               break;


        case 't':
        case 'T':
            VAR_6 = FUNC_2(VAR_19);
            break;


        case 'V':
        case 'v':
            VAR_10 = FUNC_2(VAR_19);
            if (VAR_10 < 0 || VAR_10 > 3) {
                FUNC_0("Unknown verbosity level '%d'", VAR_10);
            }
            break;


        case 'W':
        case 'w':
            VAR_11 = VAR_9;
            break;


        case 'x':
        case 'X':
            VAR_4 = VAR_9;
            break;

        default:
            FUNC_0("Unknown option - run without args to see valid ones.\n");
            }
    }



    if ((VAR_22 - VAR_20) > 2) {
        VAR_16 = VAR_9;
    }
}
