
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;

int FUNC_9(int VAR_6, WCHAR* VAR_7[])
{
    UINT VAR_8, VAR_9;


    FUNC_0();


    if (VAR_6 > 1 && FUNC_8(VAR_7[1], L"/?") == 0)
    {
        FUNC_2(VAR_5, VAR_2);
        return 0;
    }

    if (VAR_6 == 1)
    {

        FUNC_1(VAR_5, VAR_0, FUNC_4());
        return 0;
    }

    if (VAR_6 > 2)
    {

        FUNC_1(VAR_4, VAR_3, VAR_7[2]);
        return 1;
    }

    VAR_9 = (UINT)FUNC_7(VAR_7[1]);

    if (VAR_9 == 0)
    {
        FUNC_1(VAR_4, VAR_3, VAR_7[1]);
        return 1;
    }





    VAR_8 = FUNC_3();





    if (FUNC_5(VAR_9))
    {
        if (FUNC_6(VAR_9))
        {

            FUNC_1(VAR_5, VAR_0, FUNC_4());
            return 0;
        }
        else
        {

            FUNC_5(VAR_8);
        }
    }


    FUNC_2(VAR_4, VAR_1);
    return 1;
}
