
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_1 (void*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (int,char**,char*) ;
 void* VAR_9 ;

__attribute__((used)) static
void FUNC_3(int VAR_10, char *VAR_11[])
{
       int VAR_12;

       while ((VAR_12 = FUNC_2(VAR_10,VAR_11,"uUbBI:i:O:o:T:t:c:C:n:N:")) != VAR_1) {

       switch (VAR_12){


       case 'i':
       case 'I':
            VAR_7 = VAR_9;
            break;

       case 'o':
       case 'O':
           VAR_8 = VAR_9;
            break;

       case 'b':
       case 'B': VAR_0 =VAR_5;
            break;


       case 't':
       case 'T':
            VAR_2 = FUNC_1(VAR_9);
            if (VAR_2 > 3) VAR_2 = 3;
            if (VAR_2 < 0) VAR_2 = 0;
            break;

       case 'U':
       case 'u':
            VAR_6 = VAR_5;
            break;

       case 'c':
       case 'C':
            VAR_4 = FUNC_1(VAR_9);
            if (VAR_4 < 0 || VAR_4 > 2)
                    FUNC_0("ERROR: Unknown precalc mode '%d'", VAR_4);
            break;


       case 'n':
       case 'N':
                if (VAR_4 != 1)
                    FUNC_0("Precalc mode already specified");
                VAR_3 = FUNC_1(VAR_9);
                break;


  default:

       FUNC_0("Unknown option - run without args to see valid ones.\n");
    }
    }
}
