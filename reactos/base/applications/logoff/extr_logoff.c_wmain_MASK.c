
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_7(int VAR_8, WCHAR *VAR_9[])
{

    FUNC_0();


    if (!FUNC_6(VAR_8, VAR_9))
    {
        FUNC_2(VAR_5, VAR_3);
        return 1;
    }


    if (VAR_7)
    {
        if (VAR_6)
            FUNC_2(VAR_5, VAR_2);


        FUNC_1(VAR_4, L"Remote Procedure Call in logoff.exe has not been implemented");
    }

    else
    {
        if (VAR_6)
        {

            FUNC_2(VAR_5, VAR_1);
        }


        if (!FUNC_4(VAR_0, 0))
        {
            FUNC_3(FUNC_5());
            return 1;
        }
    }

    return 0;
}
