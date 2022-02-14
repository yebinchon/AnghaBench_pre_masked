
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,int ,int ,int *,int **,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int **) ;

__attribute__((used)) static LONG FUNC_3(WCHAR* VAR_6)
{
    HKEY VAR_7;
    WCHAR* VAR_8;
    DWORD VAR_9;
    LONG VAR_10;


    if (VAR_6 == ((void*)0))
        return VAR_0;


    if (!FUNC_2(VAR_6, &VAR_7, &VAR_8))
        return VAR_0;

    VAR_10 = FUNC_1(
               VAR_7,
               VAR_8,
               0,
               ((void*)0),
               VAR_3,
               VAR_2,
               ((void*)0),
               &VAR_4,
               &VAR_9);


    if (VAR_10 == VAR_1)
        VAR_5 = FUNC_0(VAR_6);
    else
        VAR_4 = ((void*)0);

    return VAR_10;

}
