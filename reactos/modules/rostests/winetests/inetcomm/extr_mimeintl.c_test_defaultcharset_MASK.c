
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMimeInternational ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HCHARSET ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    IMimeInternational *VAR_2;
    HRESULT VAR_3;
    HCHARSET VAR_4, VAR_5, VAR_6;

    VAR_3 = FUNC_6(&VAR_2);
    FUNC_7(VAR_3 == VAR_1, "ret %08x\n", VAR_3);

    VAR_3 = FUNC_3(VAR_2, &VAR_4);
    FUNC_7(VAR_3 == VAR_1, "ret %08x\n", VAR_3);
    VAR_3 = FUNC_2(VAR_2, FUNC_0(), VAR_0, &VAR_5);
    FUNC_7(VAR_3 == VAR_1, "ret %08x\n", VAR_3);
    FUNC_7(VAR_4 == VAR_5, "Unexpected default charset\n");

    VAR_3 = FUNC_1(VAR_2, "windows-1251", &VAR_6);
    FUNC_7(VAR_3 == VAR_1, "got %08x\n", VAR_3);
    VAR_3 = FUNC_5(VAR_2, VAR_6);
    FUNC_7(VAR_3 == VAR_1, "ret %08x\n", VAR_3);
    VAR_3 = FUNC_3(VAR_2, &VAR_5);
    FUNC_7(VAR_3 == VAR_1, "ret %08x\n", VAR_3);
    FUNC_7(VAR_5 == VAR_6, "didn't retrieve recently set default\n");

    VAR_3 = FUNC_5(VAR_2, VAR_4);
    FUNC_7(VAR_3 == VAR_1, "ret %08x\n", VAR_3);

    FUNC_4(VAR_2);
}
