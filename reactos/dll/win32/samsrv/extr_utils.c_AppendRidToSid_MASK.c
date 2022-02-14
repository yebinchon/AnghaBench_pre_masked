
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;
typedef int * PSID ;


 int FUNC_0 (int ,int,int,int,int,int,int,int,int,int,int **) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int* FUNC_3 (int *,int) ;

PSID
FUNC_4(PSID VAR_0,
               ULONG VAR_1)
{
    ULONG VAR_2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    UCHAR VAR_3;
    PSID VAR_4;
    ULONG VAR_5;

    VAR_3 = *FUNC_2(VAR_0);
    if (VAR_3 >= 8)
        return ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        VAR_2[VAR_5] = *FUNC_3(VAR_0, VAR_5);

    VAR_2[VAR_3] = VAR_1;
    VAR_3++;

    FUNC_0(FUNC_1(VAR_0),
                                VAR_3,
                                VAR_2[0],
                                VAR_2[1],
                                VAR_2[2],
                                VAR_2[3],
                                VAR_2[4],
                                VAR_2[5],
                                VAR_2[6],
                                VAR_2[7],
                                &VAR_4);

    return VAR_4;
}
