
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int* LPINT ;
typedef int LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 int ** FUNC_2 (int ,int ,int **,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;

BOOL
FUNC_5(
    LPINT VAR_3,
    LPSTR **VAR_4,
    LPCSTR VAR_5)
{
    LPSTR VAR_6;
    LPSTR *VAR_7;

    VAR_6 = FUNC_0(VAR_1, 0, FUNC_4(VAR_5) + 1);
    if (VAR_6 == ((void*)0))
        return VAR_0;

    FUNC_3(VAR_6, VAR_5);
    VAR_7 = *VAR_4;
    *VAR_4 = FUNC_2(VAR_1, 0, VAR_7, (*VAR_3 + 2) * sizeof(LPSTR));
    if (*VAR_4 == ((void*)0))
    {
        FUNC_1(VAR_1, 0, VAR_6);
        *VAR_4 = VAR_7;
        return VAR_0;
    }


    (*VAR_4)[*VAR_3] = VAR_6;
    (*VAR_4)[++(*VAR_3)] = ((void*)0);

    return VAR_2;
}
