
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int*) ;
 int* FUNC_1 () ;
 int* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    int *VAR_0, *VAR_1;

    if (!&FUNC_2)
    {
        FUNC_4("__daylight() not available\n");
        return;
    }

    if (!&FUNC_1)
    {
        FUNC_3("__p__daylight not available\n");
        return;
    }

    VAR_0 = FUNC_2();
    VAR_1 = FUNC_1();
    FUNC_0(VAR_0 && VAR_0 == VAR_1, "got %p\n", VAR_0);
}
