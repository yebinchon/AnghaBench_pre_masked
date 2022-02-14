
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int*,int,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_0, VAR_1, VAR_2 = 0xdeadbeef;

    FUNC_2(0xdeadbeef);
    VAR_1 = FUNC_0(((void*)0), 0, &VAR_2);
    FUNC_3(VAR_1 == 1, "failed with %d\n", FUNC_1());
    FUNC_3(VAR_2 == 0, "cbUsed=%d\n", VAR_2);

    FUNC_2(0xdeadbeef);
    VAR_1 = FUNC_0(&VAR_0, 4, &VAR_2);
    FUNC_3(VAR_1 == 1, "failed with %d\n", FUNC_1());
    FUNC_3(VAR_2 == 4, "cbUsed=%d\n", VAR_2);
}
