
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char***,char***,int ,int*) ;
 int ** FUNC_1 () ;
 char const** FUNC_2 () ;
 int FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (char*,char const*) ;

void
FUNC_5(const char* VAR_0, const char* VAR_1, const char* VAR_2, const char* VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;
    int VAR_6 = VAR_3 == ((void*)0) ? (VAR_2 == ((void*)0) ? 2 : 3) : 4;
    char** VAR_7, **VAR_8;


    *FUNC_1() = ((void*)0);
    *FUNC_2() = VAR_0;


    FUNC_0(&VAR_4, &VAR_7, &VAR_8, 0, &VAR_5);

    FUNC_3(VAR_4 == VAR_6, "Wrong value for argc, expected: %d, got: %d\n", VAR_6, VAR_4);
    if(VAR_4 != VAR_6)
        return;

    FUNC_4(VAR_7[0], "test.exe");
    FUNC_4(VAR_7[1], VAR_1);
    if (VAR_6 > 2)
    {
        FUNC_4(VAR_7[2], VAR_2);
        if (VAR_6 > 3)
            FUNC_4(VAR_7[3], VAR_3);
    }
}
