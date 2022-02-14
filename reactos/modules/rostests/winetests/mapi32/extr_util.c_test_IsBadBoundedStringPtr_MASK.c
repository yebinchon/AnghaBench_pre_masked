
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    if (!&FUNC_1)
    {
        FUNC_2("IsBadBoundedStringPtr is not available\n");
        return;
    }

    FUNC_0(FUNC_1(((void*)0), 0) == VAR_1, "IsBadBoundedStringPtr: expected TRUE\n");
    FUNC_0(FUNC_1("TEST", 4) == VAR_1, "IsBadBoundedStringPtr: expected TRUE\n");
    FUNC_0(FUNC_1("TEST", 5) == VAR_0, "IsBadBoundedStringPtr: expected FALSE\n");
}
