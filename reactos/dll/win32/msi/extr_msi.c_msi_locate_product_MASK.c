
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ MSIINSTALLCONTEXT ;
typedef int LPCWSTR ;
typedef int * HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__,int **,int ) ;
 int FUNC_1 (int *) ;

UINT FUNC_2(LPCWSTR VAR_7, MSIINSTALLCONTEXT *VAR_8)
{
    HKEY VAR_9 = ((void*)0);

    *VAR_8 = VAR_4;
    if (!VAR_7) return VAR_1;

    if (FUNC_0(VAR_7, ((void*)0), VAR_5,
                              &VAR_9, VAR_2) == VAR_0)
        *VAR_8 = VAR_5;
    else if (FUNC_0(VAR_7, ((void*)0), VAR_3,
                                   &VAR_9, VAR_2) == VAR_0)
        *VAR_8 = VAR_3;
    else if (FUNC_0(VAR_7, ((void*)0),
                                   VAR_6,
                                   &VAR_9, VAR_2) == VAR_0)
        *VAR_8 = VAR_6;

    FUNC_1(VAR_9);

    if (*VAR_8 == VAR_4)
        return VAR_1;

    return VAR_0;
}
