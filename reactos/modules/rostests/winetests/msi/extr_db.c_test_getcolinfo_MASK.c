
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int,char*,int*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    MSIHANDLE VAR_5, VAR_6 = 0, VAR_7 = 0;
    UINT VAR_8;
    DWORD VAR_9;
    char VAR_10[0x20];


    VAR_5 = FUNC_6();
    FUNC_7( VAR_5, "failed to create db\n");


    VAR_8 = FUNC_1(VAR_5, "select * from _Tables", &VAR_6);
    FUNC_7( VAR_8 == VAR_2, "failed to open query\n");

    VAR_8 = FUNC_4(VAR_6, 0);
    FUNC_7( VAR_8 == VAR_2, "failed to execute query\n");


    VAR_7 = 0;
    VAR_8 = FUNC_5( VAR_6, VAR_3, &VAR_7 );
    FUNC_7( VAR_8 == VAR_2, "failed to get names\n");
    VAR_9 = sizeof VAR_10;
    VAR_8 = FUNC_2(VAR_7, 1, VAR_10, &VAR_9 );
    FUNC_7( VAR_8 == VAR_2, "failed to get string\n");
    FUNC_7( !FUNC_8(VAR_10,"Name"), "_Tables has wrong column name\n");
    VAR_8 = FUNC_0( VAR_7 );
    FUNC_7( VAR_8 == VAR_2, "failed to close record handle\n");


    VAR_7 = 0;
    VAR_8 = FUNC_5( VAR_6, VAR_4, &VAR_7 );
    FUNC_7( VAR_8 == VAR_2, "failed to get names\n");
    VAR_9 = sizeof VAR_10;
    VAR_8 = FUNC_2(VAR_7, 1, VAR_10, &VAR_9 );
    FUNC_7( VAR_8 == VAR_2, "failed to get string\n");
    FUNC_7( !FUNC_8(VAR_10,"s64"), "_Tables has wrong column type\n");
    VAR_8 = FUNC_0( VAR_7 );
    FUNC_7( VAR_8 == VAR_2, "failed to close record handle\n");


    VAR_7 = 0;
    VAR_8 = FUNC_5( VAR_6, 100, &VAR_7 );
    FUNC_7( VAR_8 == VAR_1, "wrong error code\n");
    FUNC_7( VAR_7 == 0, "returned a record\n");

    VAR_8 = FUNC_5( VAR_6, VAR_4, ((void*)0) );
    FUNC_7( VAR_8 == VAR_1, "wrong error code\n");

    VAR_8 = FUNC_5( 0, VAR_4, &VAR_7 );
    FUNC_7( VAR_8 == VAR_0, "wrong error code\n");

    VAR_8 = FUNC_3(VAR_6);
    FUNC_7( VAR_8 == VAR_2, "failed to close view\n");
    VAR_8 = FUNC_0(VAR_6);
    FUNC_7( VAR_8 == VAR_2, "failed to close view handle\n");
    VAR_8 = FUNC_0(VAR_5);
    FUNC_7( VAR_8 == VAR_2, "failed to close database\n");
}
