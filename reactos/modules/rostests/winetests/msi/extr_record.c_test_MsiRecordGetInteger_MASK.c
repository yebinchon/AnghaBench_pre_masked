
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int,char*) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    MSIHANDLE VAR_2;
    INT VAR_3;
    UINT VAR_4;

    VAR_2 = FUNC_1(1);
    FUNC_4(VAR_2 != 0, "Expected a valid handle\n");

    VAR_4 = FUNC_3(VAR_2, 1, "5");
    FUNC_4(VAR_4 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_4);

    VAR_3 = FUNC_2(VAR_2, 1);
    FUNC_4(VAR_3 == 5, "Expected 5, got %d\n", VAR_3);

    VAR_4 = FUNC_3(VAR_2, 1, "-5");
    FUNC_4(VAR_4 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_4);

    VAR_3 = FUNC_2(VAR_2, 1);
    FUNC_4(VAR_3 == -5, "Expected -5, got %d\n", VAR_3);

    VAR_4 = FUNC_3(VAR_2, 1, "5apple");
    FUNC_4(VAR_4 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_4);

    VAR_3 = FUNC_2(VAR_2, 1);
    FUNC_4(VAR_3 == VAR_1, "Expected MSI_NULL_INTEGER, got %d\n", VAR_3);

    FUNC_0(VAR_2);
}
