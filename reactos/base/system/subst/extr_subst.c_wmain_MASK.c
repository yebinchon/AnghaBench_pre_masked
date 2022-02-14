
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INT ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,char*) ;

int FUNC_7(int VAR_5, WCHAR* VAR_6[])
{
    INT VAR_7;


    FUNC_1();

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        if (!FUNC_6(VAR_6[VAR_7], L"/?"))
        {
            FUNC_3(VAR_4, VAR_2);
            return 0;
        }
    }

    if (VAR_5 < 3)
    {
        if (VAR_5 >= 2)
        {
            FUNC_2(VAR_3, VAR_1, VAR_6[1]);
            return 1;
        }
        FUNC_5();
        return 0;
    }

    if (VAR_5 > 3)
    {
        FUNC_2(VAR_3, VAR_0, VAR_6[3]);
        return 1;
    }

    if (!FUNC_6(VAR_6[1], L"/D"))
        return FUNC_4(VAR_6[2]);
    if (!FUNC_6(VAR_6[2], L"/D"))
        return FUNC_4(VAR_6[1]);
    return FUNC_0(VAR_6[1], VAR_6[2]);
}
