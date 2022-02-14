
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cert ;
typedef char WCHAR ;
struct TYPE_4__ {int* rgbHashOfCert; int cbSize; char* UserName; } ;
typedef TYPE_1__ USERNAME_TARGET_CREDENTIAL_INFO ;
typedef char* DWORD ;
typedef TYPE_1__ CERT_CREDENTIAL_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,TYPE_1__*,char**) ;

__attribute__((used)) static void FUNC_7(void)
{
    static WCHAR VAR_3[] = {0};
    static WCHAR VAR_4[] = {'t',0};
    static WCHAR VAR_5[] = {'t','e',0};
    static WCHAR VAR_6[] = {'t','e','s',0};
    static WCHAR VAR_7[] = {'t','e','s','t',0};
    static WCHAR VAR_8[] = {'t','e','s','t','1',0};
    CERT_CREDENTIAL_INFO VAR_9;
    USERNAME_TARGET_CREDENTIAL_INFO VAR_10;
    DWORD VAR_11;
    char *VAR_12;
    BOOL VAR_13;

    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( 0, ((void*)0), ((void*)0) );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );

    FUNC_3( VAR_9.rgbHashOfCert, 0, sizeof(VAR_9.rgbHashOfCert) );
    VAR_9.cbSize = sizeof(VAR_9);
    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( 0, &VAR_9, ((void*)0) );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );

    VAR_12 = (char *)0xdeadbeef;
    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( 0, &VAR_9, &VAR_12 );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );
    FUNC_4( VAR_12 == (char *)0xdeadbeef, "got %p\n", VAR_12 );

    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( VAR_0, ((void*)0), ((void*)0) );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );

    if (0) {
    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( VAR_0, &VAR_9, ((void*)0) );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );
    }

    VAR_9.cbSize = 0;
    VAR_12 = (char *)0xdeadbeef;
    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );
    FUNC_4( VAR_12 == (char *)0xdeadbeef, "got %p\n", VAR_12 );

    VAR_9.cbSize = sizeof(VAR_9) + 4;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@BAAAAAAAAAAAAAAAAAAAAAAAAAAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_9.cbSize = sizeof(VAR_9);
    VAR_9.rgbHashOfCert[0] = 2;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@BCAAAAAAAAAAAAAAAAAAAAAAAAAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_9.rgbHashOfCert[0] = 255;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@B-DAAAAAAAAAAAAAAAAAAAAAAAAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_9.rgbHashOfCert[0] = 1;
    VAR_9.rgbHashOfCert[1] = 1;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@BBEAAAAAAAAAAAAAAAAAAAAAAAAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_9.rgbHashOfCert[0] = 1;
    VAR_9.rgbHashOfCert[1] = 1;
    VAR_9.rgbHashOfCert[2] = 1;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@BBEQAAAAAAAAAAAAAAAAAAAAAAAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    FUNC_3( VAR_9.rgbHashOfCert, 0, sizeof(VAR_9.rgbHashOfCert) );
    VAR_9.rgbHashOfCert[0] = 'W';
    VAR_9.rgbHashOfCert[1] = 'i';
    VAR_9.rgbHashOfCert[2] = 'n';
    VAR_9.rgbHashOfCert[3] = 'e';
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@BXlmblBAAAAAAAAAAAAAAAAAAAAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    FUNC_3( VAR_9.rgbHashOfCert, 0xff, sizeof(VAR_9.rgbHashOfCert) );
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_0, &VAR_9, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@B--------------------------P" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_10.UserName = ((void*)0);
    VAR_12 = (char *)0xdeadbeef;
    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );
    FUNC_4( VAR_12 == (char *)0xdeadbeef, "got %p\n", VAR_12 );

    VAR_10.UserName = VAR_3;
    VAR_12 = (char *)0xdeadbeef;
    FUNC_1( 0xdeadbeef );
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    VAR_11 = FUNC_0();
    FUNC_4( !VAR_13, "unexpected success\n" );
    FUNC_4( VAR_11 == VAR_1, "got %u\n", VAR_11 );
    FUNC_4( VAR_12 == (char *)0xdeadbeef, "got %p\n", VAR_12 );

    VAR_10.UserName = VAR_4;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@CCAAAAA0BA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_10.UserName = VAR_5;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@CEAAAAA0BQZAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_10.UserName = VAR_6;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@CGAAAAA0BQZAMHA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_10.UserName = VAR_7;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@CIAAAAA0BQZAMHA0BA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );

    VAR_10.UserName = VAR_8;
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_6( VAR_2, &VAR_10, &VAR_12 );
    FUNC_4( VAR_13, "unexpected failure %u\n", FUNC_0() );
    FUNC_4( VAR_12 != ((void*)0), "str not set\n" );
    FUNC_4( !FUNC_2( VAR_12, "@@CKAAAAA0BQZAMHA0BQMAA" ), "got %s\n", VAR_12 );
    FUNC_5( VAR_12 );
}
