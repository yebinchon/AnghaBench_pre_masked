
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEVMODEW ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    BOOL VAR_1;

    if (!&FUNC_1)
    {
        FUNC_2("IsValidDevmodeW not implemented.\n");
        return;
    }

    VAR_1 = FUNC_1(((void*)0), 0);
    FUNC_0(VAR_1 == VAR_0, "Got %d\n", VAR_1);

    VAR_1 = FUNC_1(((void*)0), 1);
    FUNC_0(VAR_1 == VAR_0, "Got %d\n", VAR_1);

    VAR_1 = FUNC_1(((void*)0), sizeof(DEVMODEW));
    FUNC_0(VAR_1 == VAR_0, "Got %d\n", VAR_1);
}
