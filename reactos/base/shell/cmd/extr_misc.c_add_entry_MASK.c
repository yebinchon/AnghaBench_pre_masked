
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int* LPINT ;
typedef int LPCTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int ** FUNC_5 (int **,int) ;

BOOL FUNC_6 (LPINT VAR_2, LPTSTR **VAR_3, LPCTSTR VAR_4)
{
    LPTSTR VAR_5;
    LPTSTR *VAR_6;

    VAR_5 = FUNC_3 ((FUNC_2(VAR_4) + 1) * sizeof (TCHAR));
    if (!VAR_5)
    {
        FUNC_0("Cannot allocate memory for q!\n");
        return VAR_0;
    }

    FUNC_1 (VAR_5, VAR_4);
    VAR_6 = *VAR_3;
    *VAR_3 = FUNC_5 (VAR_6, (*VAR_2 + 2) * sizeof (LPTSTR));
    if (!*VAR_3)
    {
        FUNC_0("Cannot reallocate memory for arg!\n");
        *VAR_3 = VAR_6;
        FUNC_4 (VAR_5);
        return VAR_0;
    }


    (*VAR_3)[*VAR_2] = VAR_5;
    (*VAR_3)[++(*VAR_2)] = ((void*)0);

    return VAR_1;
}
