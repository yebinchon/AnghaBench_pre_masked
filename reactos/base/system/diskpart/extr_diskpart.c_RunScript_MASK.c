
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int FILE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int,int *) ;

BOOL
FUNC_5(LPCWSTR VAR_5)
{
    FILE *VAR_6;
    WCHAR VAR_7[VAR_2];


    VAR_6 = FUNC_2(VAR_5, L"r");
    if (VAR_6 == ((void*)0))
    {

        FUNC_0(VAR_3, VAR_1, VAR_5);
        return VAR_0;
    }


    while (FUNC_4(VAR_7, VAR_2, VAR_6) != ((void*)0))
    {
        if (FUNC_1(VAR_7) == VAR_0)
        {
            FUNC_3(VAR_6);
            return VAR_0;
        }
    }


    FUNC_3(VAR_6);

    return VAR_4;
}
