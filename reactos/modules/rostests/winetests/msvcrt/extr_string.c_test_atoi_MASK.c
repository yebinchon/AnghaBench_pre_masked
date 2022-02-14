
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_0;

    VAR_0 = FUNC_0("0");
    FUNC_1(VAR_0 == 0, "atoi(0) = %d\n", VAR_0);

    VAR_0 = FUNC_0("-1");
    FUNC_1(VAR_0 == -1, "atoi(-1) = %d\n", VAR_0);

    VAR_0 = FUNC_0("1");
    FUNC_1(VAR_0 == 1, "atoi(1) = %d\n", VAR_0);

    VAR_0 = FUNC_0("4294967296");
    FUNC_1(VAR_0 == 0, "atoi(4294967296) = %d\n", VAR_0);
}
