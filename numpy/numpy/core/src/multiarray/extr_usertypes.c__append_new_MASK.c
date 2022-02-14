
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int*,int) ;

__attribute__((used)) static int
FUNC_2(int **VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    int *VAR_4;
    int *VAR_5 = *VAR_1;

    while (VAR_5[VAR_3] != VAR_0) {
        VAR_3++;
    }
    VAR_4 = (int *)FUNC_1(VAR_5, (VAR_3 + 2)*sizeof(int));
    if (VAR_4 == ((void*)0)) {
        FUNC_0();
        return -1;
    }
    VAR_4[VAR_3] = VAR_2;
    VAR_4[VAR_3 + 1] = VAR_0;


    *VAR_1 = VAR_4;
    return 0;
}
