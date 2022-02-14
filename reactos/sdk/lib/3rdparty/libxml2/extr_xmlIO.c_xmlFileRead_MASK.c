
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2 (void * VAR_0, char * VAR_1, int VAR_2) {
    int VAR_3;
    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return(-1);
    VAR_3 = FUNC_0(&VAR_1[0], 1, VAR_2, (FILE *) VAR_0);
    if (VAR_3 < 0) FUNC_1(0, "fread()");
    return(VAR_3);
}
