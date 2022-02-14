
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;
 char** FUNC_2 () ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__* VAR_0 ;

void FUNC_4(void)
{
    int VAR_1;
    char **VAR_2 = FUNC_2();
    int VAR_3, VAR_4 = FUNC_1();

    if (VAR_4 > (int)FUNC_0(VAR_0))
        VAR_3 = (int)FUNC_0(VAR_0);
    else
        VAR_3 = VAR_4;
    for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
        if (VAR_0[VAR_1] == 0)
            FUNC_3("Warning ignored command-line argument %d: %s\n",
                               VAR_1, VAR_2[VAR_1]);
    }
    if (VAR_1 < VAR_4)
        FUNC_3("Warning arguments %d and later unchecked\n", VAR_1);
}
