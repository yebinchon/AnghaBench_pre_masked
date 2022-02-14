
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    MSIHANDLE VAR_5;
    MSIHANDLE VAR_6;
    UINT VAR_7;

    FUNC_3(VAR_3, ((void*)0));

    VAR_6 = FUNC_7();
    FUNC_8( VAR_6, "failed to create package database\n" );

    FUNC_6( VAR_6 );

    FUNC_5( VAR_6, "'X = \"1\"', 'one'" );


    FUNC_5( VAR_6, "'X != \"1\"', 'one'" );

    VAR_7 = FUNC_9( VAR_6, &VAR_5 );
    if (VAR_7 == VAR_1)
    {
        FUNC_10("Not enough rights to perform tests\n");
        FUNC_0(VAR_4);
        return;
    }
    FUNC_8( VAR_7 == VAR_2, "failed to create package %u\n", VAR_7 );

    FUNC_1( VAR_6 );

    VAR_7 = FUNC_4( VAR_5, "X", "1" );
    FUNC_8( VAR_7 == VAR_2, "failed to set property\n" );

    FUNC_3(VAR_3, ((void*)0));


    VAR_7 = FUNC_2( VAR_5, "LaunchConditions" );
    FUNC_8( VAR_7 == VAR_2, "cost init failed\n" );


    VAR_7 = FUNC_4( VAR_5, "X", "2" );
    FUNC_8( VAR_7 == VAR_2, "failed to set property\n" );

    VAR_7 = FUNC_2( VAR_5, "LaunchConditions" );
    FUNC_8( VAR_7 == VAR_0, "Expected ERROR_INSTALL_FAILURE, got %d\n", VAR_7 );

    FUNC_1( VAR_5 );
    FUNC_0( VAR_4 );
}
