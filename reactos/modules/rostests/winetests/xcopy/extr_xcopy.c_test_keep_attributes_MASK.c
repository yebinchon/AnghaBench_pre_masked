
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_2;

    FUNC_2("xcopy1", VAR_1);

    VAR_2 = FUNC_4("xcopy xcopy1 xcopytest");
    FUNC_3(VAR_2 == 0, "xcopy failed to copy read only file\n");
    FUNC_3((FUNC_1("xcopytest\\xcopy1") & VAR_1) != VAR_1,
       "xcopy should not have copied file permissions\n");
    FUNC_2("xcopytest\\xcopy1", VAR_0);
    FUNC_0("xcopytest\\xcopy1");

    VAR_2 = FUNC_4("xcopy /K xcopy1 xcopytest");
    FUNC_3(VAR_2 == 0, "xcopy failed to copy read only file with /k\n");
    FUNC_3((FUNC_1("xcopytest\\xcopy1") & VAR_1) == VAR_1,
       "xcopy did not keep file permissions\n");
    FUNC_2("xcopytest\\xcopy1", VAR_0);
    FUNC_0("xcopytest\\xcopy1");

    FUNC_2("xcopy1", VAR_0);

    }
