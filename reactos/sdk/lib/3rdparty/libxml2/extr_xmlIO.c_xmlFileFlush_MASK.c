
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2 (void * VAR_1) {
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return(-1);
    VAR_2 = ( FUNC_0((FILE *) VAR_1) == VAR_0 ) ? -1 : 0;
    if (VAR_2 < 0)
        FUNC_1(0, "fflush()");
    return(VAR_2);
}
