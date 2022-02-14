
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*,char*,int*) ;
 char* FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int,char*,...) ;
 char* FUNC_9 (int ,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    MSIHANDLE VAR_7, VAR_8;
    UINT VAR_9;
    DWORD VAR_10;
    char VAR_11[0x100];

    VAR_8 = FUNC_6();

    FUNC_7(VAR_8);
    FUNC_4(VAR_8, "'MetadataCompName', 'Photoshop.dll'");

    VAR_9 = FUNC_9( VAR_8, &VAR_7 );
    if (VAR_9 == VAR_1)
    {
        FUNC_10("Not enough rights to perform tests\n");
        FUNC_0(VAR_6);
        return;
    }
    FUNC_8( VAR_9 == VAR_5, "failed to create package %u\n", VAR_9);


    VAR_9 = FUNC_2( 0, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_8( VAR_9 == VAR_3, "wrong return val\n");

    VAR_9 = FUNC_2( VAR_7, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_8( VAR_9 == VAR_3, "wrong return val\n");

    VAR_9 = FUNC_2( VAR_7, "boo", ((void*)0), ((void*)0) );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_9 = FUNC_2( VAR_7, "boo", VAR_11, ((void*)0) );
    FUNC_8( VAR_9 == VAR_3, "wrong return val\n");


    VAR_10 = sizeof VAR_11;
    VAR_9 = FUNC_2( VAR_7, "boo", ((void*)0), &VAR_10 );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( VAR_10 == 0, "wrong size returned\n");

    FUNC_5( VAR_7, "boo");
    VAR_10 = 0;
    FUNC_12(VAR_11,"x");
    VAR_9 = FUNC_2( VAR_7, "boo", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_4, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,"x"), "buffer was changed\n");
    FUNC_8( VAR_10 == 0, "wrong size returned\n");

    VAR_10 = 1;
    FUNC_12(VAR_11,"x");
    VAR_9 = FUNC_2( VAR_7, "boo", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( VAR_11[0] == 0, "buffer was not changed\n");
    FUNC_8( VAR_10 == 0, "wrong size returned\n");


    VAR_9 = FUNC_3( 0, ((void*)0), ((void*)0) );
    FUNC_8( VAR_9 == VAR_2, "wrong return val\n");

    VAR_9 = FUNC_3( VAR_7, ((void*)0), ((void*)0) );
    FUNC_8( VAR_9 == VAR_3, "wrong return val\n");

    VAR_9 = FUNC_3( VAR_7, "", ((void*)0) );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");


    VAR_9 = FUNC_3( VAR_7, "", "asdf" );
    FUNC_8( VAR_9 == VAR_0, "wrong return val\n");

    VAR_9 = FUNC_3( VAR_7, "=", "asdf" );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_9 = FUNC_3( VAR_7, " ", "asdf" );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_9 = FUNC_3( VAR_7, "'", "asdf" );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_10 = sizeof VAR_11;
    VAR_11[0]=0;
    VAR_9 = FUNC_2( VAR_7, "'", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,"asdf"), "buffer was not changed\n");


    VAR_9 = FUNC_3( VAR_7, "boo", ((void*)0) );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( FUNC_5( VAR_7, "boo"), "prop wasn't empty\n");

    VAR_9 = FUNC_3( VAR_7, "boo", "" );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( FUNC_5( VAR_7, "boo"), "prop wasn't empty\n");


    VAR_9 = FUNC_3( VAR_7, "boo", "xyz" );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_10 = 1;
    FUNC_12(VAR_11,"x");
    VAR_9 = FUNC_2( VAR_7, "boo", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_4, "wrong return val\n");
    FUNC_8( VAR_11[0] == 0, "buffer was not changed\n");
    FUNC_8( VAR_10 == 3, "wrong size returned\n");

    VAR_10 = 4;
    FUNC_12(VAR_11,"x");
    VAR_9 = FUNC_2( VAR_7, "boo", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,"xyz"), "buffer was not changed\n");
    FUNC_8( VAR_10 == 3, "wrong size returned\n");

    VAR_10 = 3;
    FUNC_12(VAR_11,"x");
    VAR_9 = FUNC_2( VAR_7, "boo", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_4, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,"xy"), "buffer was not changed\n");
    FUNC_8( VAR_10 == 3, "wrong size returned\n");

    VAR_9 = FUNC_3(VAR_7, "SourceDir", "foo");
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_10 = 4;
    VAR_9 = FUNC_2(VAR_7, "SOURCEDIR", VAR_11, &VAR_10);
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,""), "buffer wrong\n");
    FUNC_8( VAR_10 == 0, "wrong size returned\n");

    VAR_10 = 4;
    VAR_9 = FUNC_2(VAR_7, "SOMERANDOMNAME", VAR_11, &VAR_10);
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,""), "buffer wrong\n");
    FUNC_8( VAR_10 == 0, "wrong size returned\n");

    VAR_10 = 4;
    VAR_9 = FUNC_2(VAR_7, "SourceDir", VAR_11, &VAR_10);
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");
    FUNC_8( !FUNC_11(VAR_11,"foo"), "buffer wrong\n");
    FUNC_8( VAR_10 == 3, "wrong size returned\n");

    VAR_9 = FUNC_3(VAR_7, "MetadataCompName", "Photoshop.dll");
    FUNC_8( VAR_9 == VAR_5, "wrong return val\n");

    VAR_10 = 0;
    VAR_9 = FUNC_2(VAR_7, "MetadataCompName", ((void*)0), &VAR_10 );
    FUNC_8( VAR_9 == VAR_5, "return wrong\n");
    FUNC_8( VAR_10 == 13, "size wrong (%d)\n", VAR_10);

    VAR_10 = 13;
    VAR_9 = FUNC_2(VAR_7, "MetadataCompName", VAR_11, &VAR_10 );
    FUNC_8( VAR_9 == VAR_4, "return wrong\n");
    FUNC_8( !FUNC_11(VAR_11,"Photoshop.dl"), "buffer wrong\n");

    VAR_9 = FUNC_3(VAR_7, "property", "value");
    FUNC_8( VAR_9 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = 6;
    VAR_9 = FUNC_2(VAR_7, "property", VAR_11, &VAR_10);
    FUNC_8( VAR_9 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    FUNC_8( !FUNC_11(VAR_11, "value"), "Expected value, got %s\n", VAR_11);

    VAR_9 = FUNC_3(VAR_7, "property", ((void*)0));
    FUNC_8( VAR_9 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_9);

    VAR_10 = 6;
    VAR_9 = FUNC_2(VAR_7, "property", VAR_11, &VAR_10);
    FUNC_8( VAR_9 == VAR_5, "Expected ERROR_SUCCESS, got %d\n", VAR_9);
    FUNC_8(!VAR_11[0], "Expected empty string, got %s\n", VAR_11);

    FUNC_1( VAR_7 );
    FUNC_0(VAR_6);
}
