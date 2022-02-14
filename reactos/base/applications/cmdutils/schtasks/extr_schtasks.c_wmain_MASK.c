
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int **) ;
 int VAR_0 ;
 int FUNC_5 (int,int **) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int **) ;
 int VAR_2 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_3, WCHAR *VAR_4[])
{
    int VAR_5, VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        FUNC_3(" %s", FUNC_9(VAR_4[VAR_5]));
    FUNC_3("\n");

    FUNC_0(((void*)0));

    if (VAR_3 < 2)
        FUNC_2("Print current tasks state\n");
    else if (!FUNC_8(VAR_4[1], VAR_0))
        VAR_6 = FUNC_4(VAR_3 - 2, VAR_4 + 2);
    else if (!FUNC_8(VAR_4[1], VAR_1))
        VAR_6 = FUNC_5(VAR_3 - 2, VAR_4 + 2);
    else if (!FUNC_8(VAR_4[1], VAR_2))
        VAR_6 = FUNC_7(VAR_3 - 2, VAR_4 + 2);
    else
        FUNC_2("Unsupported command %s\n", FUNC_6(VAR_4[1]));

    FUNC_1();
    return VAR_6;
}
