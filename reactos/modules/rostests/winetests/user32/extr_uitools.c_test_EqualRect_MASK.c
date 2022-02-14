
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int BOOL ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    RECT VAR_0, VAR_1;
    BOOL VAR_2;

    FUNC_1(&VAR_0, 0, 0, 0, 0);
    FUNC_1(&VAR_1, 1, 1, 1, 1);

    VAR_2 = FUNC_0(((void*)0), ((void*)0));
    FUNC_2(!VAR_2, "got %d\n", VAR_2);

    VAR_2 = FUNC_0(&VAR_0, ((void*)0));
    FUNC_2(!VAR_2, "got %d\n", VAR_2);

    VAR_2 = FUNC_0(((void*)0), &VAR_1);
    FUNC_2(!VAR_2, "got %d\n", VAR_2);

    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    FUNC_2(!VAR_2, "got %d\n", VAR_2);

    FUNC_1(&VAR_0, 0, 0, 10, 10);
    FUNC_1(&VAR_1, 10, 10, 0, 0);

    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    FUNC_2(!VAR_2, "got %d\n", VAR_2);

    VAR_2 = FUNC_0(&VAR_0, &VAR_0);
    FUNC_2(VAR_2, "got %d\n", VAR_2);

    VAR_1 = VAR_0;
    VAR_2 = FUNC_0(&VAR_0, &VAR_1);
    FUNC_2(VAR_2, "got %d\n", VAR_2);
}
