
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INT ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,char*) ;

INT
FUNC_6(INT VAR_3, WCHAR **VAR_4)
{
    INT VAR_5;

    if (VAR_3 == 2)
    {
        return FUNC_1();
    }

    for (VAR_5 = 2; VAR_5 < VAR_3; VAR_5++)
    {
        if (FUNC_5(VAR_4[VAR_5], L"/help") == 0)
        {
            FUNC_2(4381);
            FUNC_0(VAR_2, L"\n");
            FUNC_3(VAR_1);
            FUNC_3(VAR_0);
            return 1;
        }
    }

    return FUNC_4(VAR_3, VAR_4);
}
