
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int CmdLine ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,int,char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*) ;

int FUNC_8(int VAR_6, WCHAR* VAR_7[])
{
    WCHAR VAR_8[VAR_0];


    FUNC_0();





    if (VAR_6 <= 1)
    {
        FUNC_2(VAR_5, VAR_1);
        FUNC_2(VAR_5, VAR_2);
        return 0;
    }





    if ((VAR_6 > 2) || (FUNC_7(VAR_7[1], L"/?") == 0))
    {
        FUNC_2(VAR_5, VAR_4);
        return 0;
    }





    if (!FUNC_3(VAR_7[1]))
    {
        FUNC_1(VAR_5, VAR_3, VAR_7[1]);
        return 0;
    }




    FUNC_4(VAR_8, sizeof(VAR_8), L"%ls /?", VAR_7[1]);

    FUNC_5();
    return FUNC_6(VAR_8);
}
