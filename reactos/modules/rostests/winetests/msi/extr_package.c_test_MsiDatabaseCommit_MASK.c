
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef char* UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int,char*,char*,int*) ;
 char* FUNC_4 (char*,int*) ;
 char* FUNC_5 (int,char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;
 int VAR_2 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static void FUNC_12(void)
{
    UINT VAR_3;
    MSIHANDLE VAR_4, VAR_5 = 0;
    char VAR_6[32], VAR_7[12];
    DWORD VAR_8;

    VAR_4 = FUNC_6();
    FUNC_9( VAR_4, "failed to create database\n" );

    FUNC_7( VAR_4 );

    FUNC_11( VAR_7, "#%u", VAR_4 );
    VAR_3 = FUNC_4( VAR_7, &VAR_5 );
    if (VAR_3 == VAR_0)
    {
        FUNC_10("Not enough rights to perform tests\n");
        goto error;
    }
    FUNC_9( VAR_3 == VAR_1, "got %u\n", VAR_3 );

    VAR_3 = FUNC_5( VAR_5, "PROP", "value" );
    FUNC_9( VAR_3 == VAR_1, "got %u\n", VAR_3 );

    VAR_6[0] = 0;
    VAR_8 = sizeof(VAR_6);
    VAR_3 = FUNC_3( VAR_5, "PROP", VAR_6, &VAR_8 );
    FUNC_9( VAR_3 == VAR_1, "MsiGetPropertyA returned %u\n", VAR_3 );
    FUNC_9( !FUNC_8( VAR_6, "value" ), "got \"%s\"\n", VAR_6 );

    VAR_3 = FUNC_2( VAR_4 );
    FUNC_9( VAR_3 == VAR_1, "MsiDatabaseCommit returned %u\n", VAR_3 );

    VAR_6[0] = 0;
    VAR_8 = sizeof(VAR_6);
    VAR_3 = FUNC_3( VAR_5, "PROP", VAR_6, &VAR_8 );
    FUNC_9( VAR_3 == VAR_1, "MsiGetPropertyA returned %u\n", VAR_3 );
    FUNC_9( !FUNC_8( VAR_6, "value" ), "got \"%s\"\n", VAR_6 );

    FUNC_1( VAR_5 );
error:
    FUNC_1( VAR_4 );
    FUNC_0( VAR_2 );
}
