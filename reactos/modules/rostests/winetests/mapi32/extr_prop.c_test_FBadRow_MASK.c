
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ULONG VAR_0;

    if (!&FUNC_1)
    {
        FUNC_2("FBadRow is not available\n");
        return;
    }

    VAR_0 = FUNC_1(((void*)0));
    FUNC_0(VAR_0 != 0, "FBadRow(null): Expected non-zero, got 0\n");


}
