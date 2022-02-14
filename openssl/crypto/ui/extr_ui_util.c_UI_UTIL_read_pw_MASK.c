
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI ;


 int FUNC_0 (int *,char const*,int ,char*,int ,int) ;
 int FUNC_1 (int *,char const*,int ,char*,int ,int,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

int FUNC_5(char *VAR_0, char *VAR_1, int VAR_2, const char *VAR_3,
                    int VAR_4)
{
    int VAR_5 = 0;
    UI *VAR_6;

    if (VAR_2 < 1)
        return -1;

    VAR_6 = FUNC_3();
    if (VAR_6 != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_6, VAR_3, 0, VAR_0, 0, VAR_2 - 1);
        if (VAR_5 >= 0 && VAR_4)
            VAR_5 = FUNC_1(VAR_6, VAR_3, 0, VAR_1, 0, VAR_2 - 1, VAR_0);
        if (VAR_5 >= 0)
            VAR_5 = FUNC_4(VAR_6);
        FUNC_2(VAR_6);
    }
    if (VAR_5 > 0)
        VAR_5 = 0;
    return VAR_5;
}
