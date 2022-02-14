
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3 (void * VAR_4) {
    FILE *VAR_5;
    int VAR_6;

    if (VAR_4 == ((void*)0))
        return(-1);
    VAR_5 = (FILE *) VAR_4;
    if ((VAR_5 == VAR_3) || (VAR_5 == VAR_1)) {
        VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
     FUNC_2(0, "fflush()");
 return(0);
    }
    if (VAR_5 == VAR_2)
 return(0);
    VAR_6 = ( FUNC_0((FILE *) VAR_4) == VAR_0 ) ? -1 : 0;
    if (VAR_6 < 0)
        FUNC_2(0, "fclose()");
    return(VAR_6);
}
