
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_1;
    DWORD VAR_2;

    FUNC_2(0xdeadbeef);
    VAR_1 = FUNC_0(((void*)0));
    VAR_2 = FUNC_1();
    FUNC_3(0 == VAR_1, "expected 0, got %d\n", VAR_1);
    FUNC_3(VAR_0 == VAR_2, "expected %d, got %d\n", VAR_0, VAR_2);
}
