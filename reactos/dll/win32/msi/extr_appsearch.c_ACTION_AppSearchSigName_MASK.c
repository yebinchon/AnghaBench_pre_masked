
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSISIGNATURE ;
typedef int MSIPACKAGE ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;


 scalar_t__ FUNC_0 (int *,int **,int *) ;
 scalar_t__ FUNC_1 (int *,int **,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int **,int *) ;
 scalar_t__ FUNC_4 (int *,int **,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static UINT FUNC_5(MSIPACKAGE *VAR_1, LPCWSTR VAR_2,
 MSISIGNATURE *VAR_3, LPWSTR *VAR_4)
{
    UINT VAR_5;

    *VAR_4 = ((void*)0);
    VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_2);
    if (VAR_5 == VAR_0)
    {
        VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_3);
        if (VAR_5 == VAR_0 && !*VAR_4)
        {
            VAR_5 = FUNC_4(VAR_1, VAR_4, VAR_3);
            if (VAR_5 == VAR_0 && !*VAR_4)
            {
                VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_3);
                if (VAR_5 == VAR_0 && !*VAR_4)
                    VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_3);
            }
        }
    }
    return VAR_5;
}
