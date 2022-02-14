
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PWCHAR ;
typedef int PCHAR ;
typedef int HINF ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;

BOOL
FUNC_4(PCHAR VAR_4)
{
    HINF VAR_5;
    ULONG VAR_6;


    if (FUNC_2(&VAR_5, VAR_4, 0, &VAR_6) != 0)
    {
        FUNC_0("InfHostOpenFile(%s) failed\n", VAR_4);
        return VAR_2;
    }

    if (!FUNC_3(VAR_5, (PWCHAR)VAR_1, VAR_3))
    {
        FUNC_0("registry_callback() for DelReg failed\n");
        FUNC_1(VAR_5);
        return VAR_2;
    }

    if (!FUNC_3(VAR_5, (PWCHAR)VAR_0, VAR_2))
    {
        FUNC_0("registry_callback() for AddReg failed\n");
        FUNC_1(VAR_5);
        return VAR_2;
    }

    FUNC_1(VAR_5);
    return VAR_3;
}
