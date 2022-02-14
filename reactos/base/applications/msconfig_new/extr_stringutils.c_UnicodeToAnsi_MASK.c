
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int LPCWSTR ;
typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int *,int,int *,int *) ;

LPSTR FUNC_2(LPCWSTR VAR_2)
{
    LPSTR VAR_3;
    int VAR_4;

    if (!VAR_2) return ((void*)0);

    VAR_4 = FUNC_1(VAR_0,
                                       VAR_1 ,
                                       VAR_2, -1, ((void*)0), 0, ((void*)0), ((void*)0));

    VAR_3 = (LPSTR)FUNC_0(0, VAR_4 * sizeof(CHAR));
    if (!VAR_3) return ((void*)0);

    FUNC_1(VAR_0,
                        VAR_1 ,
                        VAR_2, -1, VAR_3, VAR_4, ((void*)0), ((void*)0));

    return VAR_3;
}
