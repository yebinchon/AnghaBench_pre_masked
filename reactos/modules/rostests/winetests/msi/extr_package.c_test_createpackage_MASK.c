
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    MSIHANDLE VAR_3 = 0;
    UINT VAR_4;

    VAR_4 = FUNC_4(FUNC_2(), &VAR_3);
    if (VAR_4 == VAR_0)
    {
        FUNC_5("Not enough rights to perform tests\n");
        FUNC_0(VAR_2);
        return;
    }
    FUNC_3( VAR_4 == VAR_1, " Failed to create package %u\n", VAR_4 );

    VAR_4 = FUNC_1( VAR_3);
    FUNC_3( VAR_4 == VAR_1 , "Failed to close package\n" );
    FUNC_0(VAR_2);
}
