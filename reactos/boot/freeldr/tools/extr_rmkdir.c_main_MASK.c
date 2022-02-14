
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

int FUNC_4(int VAR_1, char* VAR_2[])
{
    if (VAR_1 != 2)
    {
        FUNC_3(VAR_0, "Wrong number of arguments\n");
        FUNC_2(1);
    }

    FUNC_0(VAR_2[1]);

    return FUNC_1(VAR_2[1]);
}
