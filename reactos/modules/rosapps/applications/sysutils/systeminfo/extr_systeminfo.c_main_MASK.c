
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(int VAR_1, char *VAR_2[])
{
    WSADATA VAR_3;
    int VAR_4;

    FUNC_5(VAR_0, "");

    FUNC_3(FUNC_1(2, 2), &VAR_3);

    for (VAR_4 = 1; VAR_4 < VAR_1; ++VAR_4)
    {
        if (!FUNC_6(VAR_2[VAR_4], "/?") || !FUNC_6(VAR_2[VAR_4], "-?"))
        {
            FUNC_2();
            return 0;
        }
        else
        {
            FUNC_4("Unsupported argument: %s\n", VAR_2[VAR_4]);
            return -1;
        }
    }

    FUNC_0();

    return 0;
}
