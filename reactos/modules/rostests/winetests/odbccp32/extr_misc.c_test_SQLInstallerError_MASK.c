
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RETCODE ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,int *,int *,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    RETCODE VAR_3;


    VAR_3 = FUNC_1(0, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_2(VAR_3 == VAR_0, "SQLInstallerError(0...) failed with %d instead of SQL_ERROR\n", VAR_3);




    VAR_3 = FUNC_1(65535, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_2(VAR_3 == VAR_1, "SQLInstallerError(>8...) failed with %d instead of SQL_NO_DATA\n", VAR_3);


    FUNC_2(!FUNC_0(0, 0, 0), "Failed to force an error for testing\n");
    VAR_3 = FUNC_1(2, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_2(VAR_3 == VAR_1, "Too many errors when forcing an error for testing\n");


    VAR_3 = FUNC_1(1, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_2(VAR_3 == VAR_2, "SQLInstallerError(null addresses) failed with %d instead of SQL_SUCCESS_WITH_INFO\n", VAR_3);
}
