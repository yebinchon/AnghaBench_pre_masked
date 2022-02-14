
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_1;

    VAR_1 = FUNC_4("xcopy /H/D:20-01-2000 xcopy1 xcopytest");
    FUNC_3(VAR_1 == 4, "xcopy /H/D:d-m-y test returned rc=%u\n", VAR_1);
    FUNC_3(FUNC_1("xcopytest\\xcopy1") == VAR_0,
       "xcopy should not have created xcopytest\\xcopy1\n");

    VAR_1 = FUNC_4("xcopy /D:01-20-2000/H xcopy1 xcopytest");
    FUNC_3(VAR_1 == 0, "xcopy /H/D:m-d-y test failed rc=%u\n", VAR_1);
    FUNC_3(FUNC_1("xcopytest\\xcopy1") != VAR_0,
       "xcopy did not create xcopytest\\xcopy1\n");
    FUNC_0("xcopytest\\xcopy1");
    VAR_1 = FUNC_4("xcopy /D/S xcopytest xcopytest2\\");
    FUNC_3(VAR_1 == 0, "xcopy /D/S test failed rc=%u\n", VAR_1);
    FUNC_3(FUNC_1("xcopytest2") == VAR_0,
       "xcopy copied empty directory incorrectly\n");

    VAR_1 = FUNC_4("xcopy /D/S/E xcopytest xcopytest2\\");
    FUNC_3(VAR_1 == 0, "xcopy /D/S/E test failed rc=%u\n", VAR_1);
    FUNC_3(FUNC_1("xcopytest2") != VAR_0,
       "xcopy failed to copy empty directory\n");
    FUNC_2("xcopytest2");
}
