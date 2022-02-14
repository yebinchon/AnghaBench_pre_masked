
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int TCHAR ;
typedef int SIZE_T ;
typedef int * PWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int const*,int,int *,int) ;
 int FUNC_2 (int *,int,int const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static PWSTR
FUNC_4(const TCHAR *VAR_2)
{
    SIZE_T VAR_3;
    PWSTR VAR_4;

    VAR_3 = FUNC_3(VAR_2) + 1;
    VAR_4 = (PWSTR)FUNC_0(VAR_1,
                            VAR_3 * sizeof(WCHAR));
    if (VAR_4 != ((void*)0))
    {




        FUNC_1(VAR_0,
                            0,
                            VAR_2,
                            -1,
                            VAR_4,
                            VAR_3);

    }

    return VAR_4;
}
