
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (void*) ;
 double VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 double VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 double VAR_13 ;
 double FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* VAR_14 ;
 int FUNC_4 (int ,char*) ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int,char**,char*) ;
 void* VAR_17 ;

__attribute__((used)) static
void FUNC_6(int VAR_18, char *VAR_19[])
{
    int VAR_20;

    while ((VAR_20 = FUNC_5(VAR_18,VAR_19,"a:A:BbC:c:D:d:h:H:k:K:lLn:N:O:o:r:R:T:t:V:v:xX8y:Y:")) != VAR_3) {

    switch (VAR_20) {


        case 'a':
        case 'A':
            VAR_8 = FUNC_2(VAR_17);
            if (VAR_8 < 0 ||
                VAR_8 > 1.0)
                       FUNC_0("Adaptation state should be 0..1");
            break;

        case 'b':
        case 'B':
            VAR_0 = VAR_10;
           break;

        case 'c':
        case 'C':
            VAR_9 = FUNC_3(VAR_17);
            if (VAR_9 < 0 || VAR_9 > 2) {
                FUNC_0("Unknown precalc mode '%d'", VAR_9);
            }
           break;

       case 'd':
       case 'D':


           VAR_2 = VAR_17;
           break;

        case 'h':
        case 'H':
            FUNC_1(FUNC_3(VAR_17));
            return;

        case 'k':
        case 'K':
            VAR_4 = FUNC_2(VAR_17);
            if (VAR_4 < 0.0 || VAR_4 > 400.0) {
                FUNC_0("Ink limit must be 0%%..400%%");
            }
           break;


        case 'l':
        case 'L': VAR_6 = VAR_10;
           break;

       case 'n':
       case 'N':
           if (VAR_9 != 1) {
               FUNC_0("Precalc mode already specified");
           }
           VAR_7 = FUNC_3(VAR_17);
           break;

        case 'o':
        case 'O':
            VAR_14 = VAR_17;
           break;


       case 'r':
       case 'R':
          VAR_13 = FUNC_2(VAR_17);
          if (VAR_13 < 2.0 || VAR_13 > 4.3) {
              FUNC_4(VAR_16, "WARNING: lcms was not aware of this version, tag types may be wrong!\n");
          }
          break;

        case 't':
        case 'T':
            VAR_5 = FUNC_3(VAR_17);
            break;

        case 'V':
        case 'v':
            VAR_12 = FUNC_3(VAR_17);
            if (VAR_12 < 0 || VAR_12 > 3) {
                FUNC_0("Unknown verbosity level '%d'", VAR_12);
            }
            break;

        case '8':
            VAR_15 = VAR_10;
            break;



        case 'y':
        case 'Y':
            VAR_1 = VAR_17;
            break;



       case 'x':
       case 'X': VAR_11 = VAR_10;
           break;



       default:

           FUNC_0("Unknown option - run without args to see valid ones.\n");
        }
    }
}
