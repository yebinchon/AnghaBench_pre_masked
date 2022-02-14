
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HINTERNET ;
typedef size_t DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int,char*,char*,int *,int *,char const**,int,int) ;
 int FUNC_5 (int,int ,...) ;
 int FUNC_6 (int,char*,int,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,int ,int *,int *,int ,int,int) ;
 int FUNC_9 (char*,int ,int *,int *,int ) ;
 int FUNC_10 (int,size_t*,int,int) ;
 int FUNC_11 (int,char*,int,size_t*) ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (int,char*,...) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void FUNC_18(void)
{
    BOOL VAR_11;
    CHAR VAR_12[4000];
    DWORD VAR_13, VAR_14;
    const char *VAR_15[2] = { "*", ((void*)0) };
    HINTERNET VAR_16, VAR_17 = 0, VAR_18 = 0;

    FUNC_17("Starting InternetReadFile chunked test\n");

    FUNC_17("InternetOpenA <--\n");
    VAR_16 = FUNC_9("", VAR_8, ((void*)0), ((void*)0), 0);
    FUNC_13((VAR_16 != 0x0),"InternetOpen failed with error %u\n", FUNC_0());
    FUNC_17("InternetOpenA -->\n");

    if (VAR_16 == 0x0) goto abort;

    FUNC_17("InternetConnectA <--\n");
    VAR_17=FUNC_8(VAR_16, "test.winehq.org", VAR_7,
                         ((void*)0), ((void*)0), VAR_9, 0x0, 0xdeadbeef);
    FUNC_13((VAR_17 != 0x0),"InternetConnect failed with error %u\n", FUNC_0());
    FUNC_17("InternetConnectA -->\n");

    if (VAR_17 == 0x0) goto abort;

    FUNC_17("HttpOpenRequestA <--\n");
    VAR_18 = FUNC_4(VAR_17, "GET", "/tests/chunked", ((void*)0), ((void*)0), VAR_15,
                           VAR_5 | VAR_6,
                           0xdeadbead);
    if (VAR_18 == 0x0 && FUNC_0() == VAR_1) {






    } else {
        FUNC_13((VAR_18 != 0x0),"HttpOpenRequest failed with error %u\n", FUNC_0());
    }
    FUNC_17("HttpOpenRequestA -->\n");

    if (VAR_18 == 0x0) goto abort;

    FUNC_17("HttpSendRequestA -->\n");
    FUNC_12(0xdeadbeef);
    VAR_11 = FUNC_6(VAR_18, "", -1, ((void*)0), 0);
    FUNC_13(VAR_11 || (FUNC_0() == VAR_1),
       "Synchronous HttpSendRequest returning 0, error %u\n", FUNC_0());
    FUNC_17("HttpSendRequestA <--\n");

    FUNC_16(VAR_18, 0);

    VAR_13 = 100;
    VAR_11 = FUNC_5(VAR_18,VAR_3,VAR_12,&VAR_13,0x0);
    VAR_12[VAR_13]=0;
    FUNC_17("Option CONTENT_TYPE -> %i  %s\n",VAR_11,VAR_12);

    FUNC_12( 0xdeadbeef );
    VAR_13 = 100;
    VAR_11 = FUNC_5(VAR_18,VAR_4,VAR_12,&VAR_13,0x0);
    VAR_12[VAR_13]=0;
    FUNC_17("Option TRANSFER_ENCODING -> %i  %s\n",VAR_11,VAR_12);
    FUNC_13( VAR_11 || ( FUNC_14() && FUNC_0() == VAR_0 ),
        "Failed to get TRANSFER_ENCODING option, error %u\n", FUNC_0() );
    FUNC_13( !FUNC_15( VAR_12, "chunked" ) || ( ! VAR_11 && FUNC_14() && FUNC_0() == VAR_0 ),
        "Wrong transfer encoding '%s'\n", VAR_12 );

    FUNC_12( 0xdeadbeef );
    VAR_13 = 16;
    VAR_11 = FUNC_5(VAR_18,VAR_2,&VAR_12,&VAR_13,0x0);
    FUNC_13( !VAR_11, "Found CONTENT_LENGTH option '%s'\n", VAR_12 );
    FUNC_13( FUNC_0() == VAR_0, "Wrong error %u\n", FUNC_0() );

    VAR_13 = 100;
    FUNC_17("Entering Query loop\n");

    while (VAR_10)
    {
        VAR_11 = FUNC_10(VAR_18,&VAR_13,0x0,0x0);
        FUNC_13(!(!VAR_11 && VAR_13 != 0),"InternetQueryDataAvailable failed with non-zero length\n");
        FUNC_13(VAR_11, "InternetQueryDataAvailable failed, error %d\n", FUNC_0());
        FUNC_17("got %u available\n",VAR_13);
        if (VAR_13)
        {
            char *VAR_19 = FUNC_2(FUNC_1(),0,VAR_13+1);

            VAR_11 = FUNC_11(VAR_18,VAR_19,VAR_13,&VAR_14);

            VAR_19[VAR_14]=0;
            FUNC_17("ReadFile -> %i %i\n",VAR_11,VAR_14);
            FUNC_13( VAR_13 == VAR_14, "only got %u of %u available\n", VAR_14, VAR_13 );
            FUNC_13( VAR_19[VAR_14-1] == '\n', "received partial line '%s'\n", VAR_19 );

            FUNC_3(FUNC_1(),0,VAR_19);
            if (!VAR_14) break;
        }
        if (VAR_13 == 0)
        {
            VAR_14 = 0xdeadbeef;
            VAR_11 = FUNC_11( VAR_18, VAR_12, 1, &VAR_14 );
            FUNC_13( VAR_11, "InternetReadFile failed: %u\n", FUNC_0() );
            FUNC_13( !VAR_14, "got %u\n", VAR_14 );
            break;
        }
    }
abort:
    FUNC_17("aborting\n");
    if (VAR_18 != 0x0) {
        VAR_11 = FUNC_7(VAR_18);
        FUNC_13 (VAR_11, "InternetCloseHandle of handle opened by HttpOpenRequestA failed\n");
    }
    if (VAR_16 != 0x0) {
        VAR_11 = FUNC_7(VAR_16);
        FUNC_13 (VAR_11, "InternetCloseHandle of handle opened by InternetOpenA failed\n");
    }
}
