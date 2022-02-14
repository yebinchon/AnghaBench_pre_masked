
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * _INITTERMFUN ;


 int * VAR_0 ;
 int FUNC_0 (int **,int **,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
    int VAR_2;
    static _INITTERMFUN VAR_3[4];

    if (!VAR_1)
        return;

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
    {
        VAR_3[VAR_2] = VAR_0;
    }

    FUNC_0(&VAR_3[0], &VAR_3[1], 1);
    FUNC_0(&VAR_3[0], &VAR_3[2], 2);
    FUNC_0(&VAR_3[0], &VAR_3[3], 3);

    VAR_3[1] = ((void*)0);
    FUNC_0(&VAR_3[0], &VAR_3[3], 2);
}
