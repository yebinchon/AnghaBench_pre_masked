
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WSADATA ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int **) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ VAR_5 ;

int FUNC_9(int VAR_6, wchar_t *VAR_7[])
{
    BOOL VAR_8;
    WSADATA VAR_9;


    FUNC_0();

    if (!FUNC_4(VAR_6, VAR_7))
        return VAR_0;

    if (FUNC_8(FUNC_3(2, 2), &VAR_9) != 0)
    {
        FUNC_1(VAR_4, VAR_2, FUNC_7());
        return VAR_0;
    }

    VAR_8 = FUNC_2();
    while (VAR_5 && VAR_8)
    {
        FUNC_5(VAR_3*1000);
        VAR_8 = FUNC_2();
    }

    FUNC_6();
    return (VAR_8 ? VAR_1 : VAR_0);
}
