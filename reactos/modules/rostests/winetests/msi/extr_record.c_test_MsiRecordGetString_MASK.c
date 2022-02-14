
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,int *,int*) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    MSIHANDLE VAR_2;
    CHAR VAR_3[VAR_1];
    DWORD VAR_4;
    UINT VAR_5;

    VAR_2 = FUNC_1(2);
    FUNC_6(VAR_2 != 0, "Expected a valid handle\n");

    VAR_4 = VAR_1;
    VAR_5 = FUNC_2(VAR_2, 1, ((void*)0), &VAR_4);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n",VAR_5);
    FUNC_6(VAR_4 == 0, "Expected 0, got %d\n",VAR_4);

    VAR_4 = VAR_1;
    FUNC_5(VAR_3, "apple");
    VAR_5 = FUNC_2(VAR_2, 1, VAR_3, &VAR_4);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_5);
    FUNC_6(!FUNC_4(VAR_3, ""), "Expected \"\", got \"%s\"\n", VAR_3);
    FUNC_6(VAR_4 == 0, "Expected 0, got %d\n", VAR_4);

    VAR_4 = VAR_1;
    FUNC_5(VAR_3, "apple");
    VAR_5 = FUNC_2(VAR_2, 10, VAR_3, &VAR_4);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_5);
    FUNC_6(!FUNC_4(VAR_3, ""), "Expected \"\", got \"%s\"\n", VAR_3);
    FUNC_6(VAR_4 == 0, "Expected 0, got %d\n", VAR_4);

    FUNC_0(VAR_2);

    VAR_2 = FUNC_1(1);
    FUNC_6(VAR_2 != 0, "Expected a valid handle\n");

    VAR_5 = FUNC_3(VAR_2, 1, 5);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_5);

    VAR_4 = VAR_1;
    VAR_5 = FUNC_2(VAR_2, 1, ((void*)0), &VAR_4);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n",VAR_5);
    FUNC_6(VAR_4 == 1, "Expected 1, got %d\n",VAR_4);

    VAR_4 = VAR_1;
    FUNC_5(VAR_3, "apple");
    VAR_5 = FUNC_2(VAR_2, 1, VAR_3, &VAR_4);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_5);
    FUNC_6(!FUNC_4(VAR_3, "5"), "Expected \"5\", got \"%s\"\n", VAR_3);
    FUNC_6(VAR_4 == 1, "Expected 1, got %d\n", VAR_4);

    VAR_5 = FUNC_3(VAR_2, 1, -5);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_5);

    VAR_4 = VAR_1;
    FUNC_5(VAR_3, "apple");
    VAR_5 = FUNC_2(VAR_2, 1, VAR_3, &VAR_4);
    FUNC_6(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %d\n", VAR_5);
    FUNC_6(!FUNC_4(VAR_3, "-5"), "Expected \"-5\", got \"%s\"\n", VAR_3);
    FUNC_6(VAR_4 == 2, "Expected 2, got %d\n", VAR_4);

    FUNC_0(VAR_2);
}
