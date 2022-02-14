
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int startup ;
typedef int sa ;
typedef int buffer ;
struct TYPE_8__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
struct TYPE_7__ {int cb; int cbReserved2; scalar_t__ lpReserved2; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int,TYPE_2__*,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,char const*,char const**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int,scalar_t__*) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int,int ,int ) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (char*,char*,...) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*,char*,scalar_t__,int ,char*) ;
 scalar_t__ FUNC_17 (char*) ;

__attribute__((used)) static void FUNC_18( const char* VAR_18 )
{
    int VAR_19;
    const char* VAR_20[5];
    char VAR_21[16];
    char VAR_22[VAR_6];
    STARTUPINFOA VAR_23;
    SECURITY_ATTRIBUTES VAR_24;
    HANDLE VAR_25[3];

    VAR_19 = FUNC_12 ("fdopen.tst", VAR_8 | VAR_10 | VAR_7, VAR_16 |VAR_17);
    FUNC_11(VAR_19 != -1, "Couldn't create test file\n");
    VAR_20[0] = FUNC_8(VAR_18);
    VAR_20[1] = "tests/file.c";
    VAR_20[2] = "inherit";
    VAR_20[3] = VAR_21; FUNC_14(VAR_21, "%d", VAR_19);
    VAR_20[4] = 0;
    FUNC_5(VAR_15, VAR_18, VAR_20);
    FUNC_11(FUNC_15(VAR_19) == 8, "bad position %u expecting 8\n", FUNC_15(VAR_19));
    FUNC_9(VAR_19, 0, VAR_11);
    FUNC_11(FUNC_13(VAR_19, VAR_21, sizeof (VAR_21)) == 8 && FUNC_10(VAR_21, "Success", 8) == 0, "Couldn't read back the data\n");
    FUNC_6 (VAR_19);
    FUNC_11(FUNC_17("fdopen.tst") == 0, "Couldn't unlink\n");

    VAR_19 = FUNC_12 ("fdopen.tst", VAR_8 | VAR_10 | VAR_7 | VAR_9, VAR_16 |VAR_17);
    FUNC_11(VAR_19 != -1, "Couldn't create test file\n");
    VAR_20[1] = "tests/file.c";
    VAR_20[2] = "inherit_no";
    VAR_20[3] = VAR_21; FUNC_14(VAR_21, "%d", VAR_19);
    VAR_20[4] = 0;
    FUNC_5(VAR_15, VAR_18, VAR_20);
    FUNC_11(FUNC_15(VAR_19) == 0, "bad position %u expecting 0\n", FUNC_15(VAR_19));
    FUNC_11(FUNC_13(VAR_19, VAR_21, sizeof (VAR_21)) == 0, "Found unexpected data (%s)\n", VAR_21);
    FUNC_6 (VAR_19);
    FUNC_11(FUNC_17("fdopen.tst") == 0, "Couldn't unlink\n");


    VAR_24.nLength = sizeof(VAR_24);
    VAR_24.lpSecurityDescriptor = ((void*)0);
    VAR_24.bInheritHandle = VAR_14;
    FUNC_14(VAR_22, "%s file inherit 1", VAR_18);


    FUNC_4(&VAR_23, sizeof(VAR_23));
    VAR_23.cb = sizeof(VAR_23);
    FUNC_7( &VAR_23, 0, ((void*)0) );
    FUNC_16( &VAR_23, VAR_22, 0, VAR_1, "empty block" );


    VAR_25[0] = FUNC_3( VAR_13 );
    VAR_25[1] = FUNC_1( "fdopen.tst", VAR_4|VAR_5,
                              VAR_2 | VAR_3, &VAR_24, VAR_0, 0, ((void*)0) );
    VAR_25[2] = FUNC_3( VAR_12 );
    FUNC_7( &VAR_23, 3, VAR_25 );
    FUNC_16( &VAR_23, VAR_22, VAR_25[1], VAR_14, "valid block" );
    FUNC_0( VAR_25[1] );
    FUNC_2("fdopen.tst");


    VAR_25[1] = FUNC_1( "fdopen.tst", VAR_4|VAR_5,
                              VAR_2 | VAR_3, &VAR_24, VAR_0, 0, ((void*)0) );
    FUNC_7( &VAR_23, 3, VAR_25 );
    *(unsigned int *)VAR_23.lpReserved2 = 0;
    FUNC_16( &VAR_23, VAR_22, VAR_25[1], VAR_1, "zero count block" );
    FUNC_0( VAR_25[1] );
    FUNC_2("fdopen.tst");


    VAR_25[1] = FUNC_1( "fdopen.tst", VAR_4|VAR_5,
                              VAR_2 | VAR_3, &VAR_24, VAR_0, 0, ((void*)0) );
    FUNC_7( &VAR_23, 3, VAR_25 );
    VAR_23.cbReserved2 -= 3;
    FUNC_16( &VAR_23, VAR_22, VAR_25[1], VAR_14, "small size block" );
    FUNC_0( VAR_25[1] );
    FUNC_2("fdopen.tst");


    VAR_25[1] = FUNC_1( "fdopen.tst", VAR_4|VAR_5,
                              VAR_2 | VAR_3, &VAR_24, VAR_0, 0, ((void*)0) );
    FUNC_7( &VAR_23, 3, VAR_25 );
    VAR_23.cbReserved2 = sizeof(unsigned int) + sizeof(HANDLE) + sizeof(char);
    FUNC_16( &VAR_23, VAR_22, VAR_25[1], VAR_1, "smaller size block" );
    FUNC_0( VAR_25[1] );
    FUNC_2("fdopen.tst");


    VAR_25[1] = FUNC_1( "fdopen.tst", VAR_4|VAR_5,
                              VAR_2 | VAR_3, &VAR_24, VAR_0, 0, ((void*)0) );
    FUNC_7( &VAR_23, 3, VAR_25 );
    VAR_23.cbReserved2 += 7;
    FUNC_16( &VAR_23, VAR_22, VAR_25[1], VAR_14, "large size block" );
    FUNC_0( VAR_25[1] );
    FUNC_2("fdopen.tst");
}
