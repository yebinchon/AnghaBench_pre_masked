
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;
typedef char CHAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    MSIHANDLE VAR_4 = 0;
    char VAR_5[100];
    static CHAR VAR_6[] = "";
    DWORD VAR_7;
    UINT VAR_8;

    VAR_8 = FUNC_7(FUNC_4(), &VAR_4);
    if (VAR_8 == VAR_0)
    {
        FUNC_8("Not enough rights to perform tests\n");
        FUNC_0(VAR_3);
        return;
    }
    FUNC_6( VAR_8 == VAR_2, "Failed to create package %u\n", VAR_8 );


    VAR_8 = FUNC_3(VAR_4, "Name", "Value");
    FUNC_6( VAR_8 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_8);


    VAR_7 = 0;
    VAR_8 = FUNC_2(VAR_4, "Name", ((void*)0), &VAR_7);
    FUNC_6( VAR_8 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_8);
    FUNC_6( VAR_7 == 5, "Expected 5, got %d\n", VAR_7);


    VAR_7 = 0;
    VAR_8 = FUNC_2(VAR_4, "Name", VAR_6, &VAR_7);
    FUNC_6( VAR_8 == VAR_1, "Expected ERROR_MORE_DATA, got %d\n", VAR_8);
    FUNC_6( VAR_7 == 5, "Expected 5, got %d\n", VAR_7);


    VAR_8 = FUNC_2(VAR_4, "Name", VAR_5, &VAR_7);
    FUNC_6( VAR_8 == VAR_1, "Expected ERROR_MORE_DATA, got %d\n", VAR_8);
    FUNC_6( VAR_7 == 5, "Expected 5, got %d\n", VAR_7);
    FUNC_6( !FUNC_5(VAR_5, "Valu"), "Expected Valu, got %s\n", VAR_5);


    VAR_7++;
    VAR_8 = FUNC_2(VAR_4, "Name", VAR_5, &VAR_7);
    FUNC_6( VAR_8 == VAR_2, "Expected ERROR_SUCCESS, got %d\n", VAR_8);
    FUNC_6( VAR_7 == 5, "Expected 5, got %d\n", VAR_7);
    FUNC_6( !FUNC_5(VAR_5, "Value"), "Expected Value, got %s\n", VAR_5);

    VAR_8 = FUNC_1( VAR_4);
    FUNC_6( VAR_8 == VAR_2 , "Failed to close package\n" );
    FUNC_0(VAR_3);
}
