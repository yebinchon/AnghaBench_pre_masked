
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int,int *,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_4, VAR_5, VAR_6;
    DWORD VAR_7;

    FUNC_3(0xdeadbeef);
    VAR_4 = -1;
    VAR_7 = FUNC_0(VAR_2, ((void*)0), 2, ((void*)0), 0, &VAR_4, &VAR_6);
    if (FUNC_4(VAR_7, FUNC_2())) return;
    if (!VAR_7)
    {

        FUNC_5(FUNC_2() == VAR_1, "gle %d\n", FUNC_2());
        FUNC_5(VAR_4 > 0, "Expected neededA to show the number of needed bytes\n");
    }
    else
    {

        FUNC_5(FUNC_2() == VAR_3, "gle %d\n", FUNC_2());
        FUNC_5(VAR_4 == 0, "Expected neededA to be zero\n");
    }
    FUNC_5(VAR_6 == 0, "num %d\n", VAR_6);

    FUNC_3(0xdeadbeef);
    VAR_5 = -1;
    VAR_7 = FUNC_1(VAR_2, ((void*)0), 2, ((void*)0), 0, &VAR_5, &VAR_6);

    if (!VAR_7 && (FUNC_2() == VAR_0))
    {
        FUNC_6("EnumPrintersW is not implemented\n");
        return;
    }

    if (!VAR_7)
    {

        FUNC_5(FUNC_2() == VAR_1, "gle %d\n", FUNC_2());
        FUNC_5(VAR_5 > 0, "Expected neededW to show the number of needed bytes\n");
    }
    else
    {

        FUNC_5(FUNC_2() == VAR_3, "gle %d\n", FUNC_2());
        FUNC_5(VAR_5 == 0, "Expected neededW to be zero\n");
    }
    FUNC_5(VAR_6 == 0, "num %d\n", VAR_6);



    FUNC_5(VAR_4 == VAR_5, "neededA %d neededW %d\n", VAR_4, VAR_5);
}
