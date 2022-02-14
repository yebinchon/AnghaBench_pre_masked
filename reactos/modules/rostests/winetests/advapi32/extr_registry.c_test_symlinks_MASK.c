
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int targetW ;
typedef int dw ;
typedef int buffer ;
typedef char WCHAR ;
struct TYPE_4__ {int Length; char const* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int NTSTATUS ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int *,int,int ,int *,int *,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (int ,char*,int,int ,int *) ;
 int FUNC_9 (int ,char*,int *,int*,int *,int*) ;
 int FUNC_10 (int ,char*,int ,int ,int *,int) ;
 int VAR_10 ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    static const WCHAR VAR_11[] = {'\\','S','o','f','t','w','a','r','e','\\','W','i','n','e',
                                    '\\','T','e','s','t','\\','t','a','r','g','e','t',0};
    BYTE VAR_12[1024];
    UNICODE_STRING VAR_13;
    WCHAR *VAR_14;
    HKEY VAR_15, VAR_16;
    NTSTATUS VAR_17;
    DWORD VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    if (!&FUNC_14 || !&FUNC_13)
    {
        FUNC_16( "Can't perform symlink tests\n" );
        return;
    }

    FUNC_14( &VAR_13 );

    VAR_18 = VAR_13.Length + sizeof(VAR_11);
    VAR_14 = FUNC_1( FUNC_0(), 0, VAR_18 );
    FUNC_11( VAR_14, VAR_13.Buffer, VAR_13.Length );
    FUNC_11( VAR_14 + VAR_13.Length/sizeof(WCHAR), VAR_11, sizeof(VAR_11) );

    VAR_22 = FUNC_4( VAR_10, "link", 0, ((void*)0), VAR_7,
                           VAR_4, ((void*)0), &VAR_16, ((void*)0) );
    FUNC_12( VAR_22 == VAR_3, "RegCreateKeyEx failed: %u\n", VAR_22 );


    VAR_22 = FUNC_10( VAR_16, "SymbolicLinkValue", 0, VAR_9, (BYTE *)"foobar", sizeof("foobar") );
    FUNC_12( VAR_22 == VAR_0, "RegSetValueEx wrong error %u\n", VAR_22 );
    VAR_22 = FUNC_10( VAR_16, "SymbolicLinkValue", 0, VAR_6,
                          (BYTE *)VAR_14, VAR_18 - sizeof(WCHAR) );
    FUNC_12( VAR_22 == VAR_3, "RegSetValueEx failed error %u\n", VAR_22 );

    VAR_22 = FUNC_10( VAR_16, "link", 0, VAR_6, (BYTE *)VAR_14, VAR_18 - sizeof(WCHAR) );
    FUNC_12( VAR_22 == VAR_0, "RegSetValueEx wrong error %u\n", VAR_22 );



    VAR_22 = FUNC_7( VAR_10, "link", &VAR_15 );
    FUNC_12( VAR_22 == VAR_2, "RegOpenKey wrong error %u\n", VAR_22 );

    VAR_22 = FUNC_4( VAR_10, "target", 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_15, ((void*)0) );
    FUNC_12( VAR_22 == VAR_3, "RegCreateKeyEx failed error %u\n", VAR_22 );

    VAR_21 = 0xbeef;
    VAR_22 = FUNC_10( VAR_15, "value", 0, VAR_5, (BYTE *)&VAR_21, sizeof(VAR_21) );
    FUNC_12( VAR_22 == VAR_3, "RegSetValueEx failed error %u\n", VAR_22 );
    FUNC_3( VAR_15 );

    VAR_22 = FUNC_7( VAR_10, "link", &VAR_15 );
    FUNC_12( VAR_22 == VAR_3, "RegOpenKey failed error %u\n", VAR_22 );

    VAR_20 = sizeof(VAR_12);
    VAR_22 = FUNC_9( VAR_15, "value", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_3, "RegOpenKey failed error %u\n", VAR_22 );
    FUNC_12( VAR_20 == sizeof(DWORD), "wrong len %u\n", VAR_20 );

    VAR_20 = sizeof(VAR_12);
    VAR_22 = FUNC_9( VAR_15, "SymbolicLinkValue", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_2, "RegQueryValueEx wrong error %u\n", VAR_22 );


    VAR_22 = FUNC_10( VAR_15, "SymbolicLinkValue", 0, VAR_6,
                          (BYTE *)VAR_14, VAR_18 - sizeof(WCHAR) );
    FUNC_12( VAR_22 == VAR_3, "RegSetValueEx failed error %u\n", VAR_22 );
    VAR_20 = sizeof(VAR_12);
    VAR_22 = FUNC_9( VAR_15, "SymbolicLinkValue", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_3, "RegQueryValueEx failed error %u\n", VAR_22 );
    FUNC_12( VAR_20 == VAR_18 - sizeof(WCHAR), "wrong len %u\n", VAR_20 );
    VAR_22 = FUNC_6( VAR_15, "SymbolicLinkValue" );
    FUNC_12( VAR_22 == VAR_3, "RegDeleteValue failed error %u\n", VAR_22 );

    FUNC_3( VAR_15 );

    VAR_22 = FUNC_4( VAR_10, "link", 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_15, ((void*)0) );
    FUNC_12( VAR_22 == VAR_3, "RegCreateKeyEx failed error %u\n", VAR_22 );

    VAR_20 = sizeof(VAR_12);
    VAR_22 = FUNC_9( VAR_15, "value", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_3, "RegQueryValueEx failed error %u\n", VAR_22 );
    FUNC_12( VAR_20 == sizeof(DWORD), "wrong len %u\n", VAR_20 );

    VAR_22 = FUNC_9( VAR_15, "SymbolicLinkValue", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_2, "RegQueryValueEx wrong error %u\n", VAR_22 );
    FUNC_3( VAR_15 );



    VAR_22 = FUNC_8( VAR_10, "link", VAR_8, VAR_4, &VAR_15 );
    FUNC_12( VAR_22 == VAR_3, "RegOpenKeyEx failed error %u\n", VAR_22 );
    VAR_20 = sizeof(VAR_12);
    VAR_22 = FUNC_9( VAR_15, "SymbolicLinkValue", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_3, "RegQueryValueEx failed error %u\n", VAR_22 );
    FUNC_12( VAR_20 == VAR_18 - sizeof(WCHAR), "wrong len %u\n", VAR_20 );
    FUNC_3( VAR_15 );

    VAR_22 = FUNC_4( VAR_10, "link", 0, ((void*)0), VAR_8,
                           VAR_4, ((void*)0), &VAR_15, ((void*)0) );
    FUNC_12( VAR_22 == VAR_3, "RegCreateKeyEx failed error %u\n", VAR_22 );
    VAR_20 = sizeof(VAR_12);
    VAR_22 = FUNC_9( VAR_15, "SymbolicLinkValue", ((void*)0), &VAR_19, VAR_12, &VAR_20 );
    FUNC_12( VAR_22 == VAR_3, "RegQueryValueEx failed error %u\n", VAR_22 );
    FUNC_12( VAR_20 == VAR_18 - sizeof(WCHAR), "wrong len %u\n", VAR_20 );
    FUNC_3( VAR_15 );

    VAR_22 = FUNC_4( VAR_10, "link", 0, ((void*)0), VAR_7,
                           VAR_4, ((void*)0), &VAR_15, ((void*)0) );
    FUNC_12( VAR_22 == VAR_1, "RegCreateKeyEx wrong error %u\n", VAR_22 );

    VAR_22 = FUNC_4( VAR_10, "link", 0, ((void*)0), VAR_7 | VAR_8,
                           VAR_4, ((void*)0), &VAR_15, ((void*)0) );
    FUNC_12( VAR_22 == VAR_1, "RegCreateKeyEx wrong error %u\n", VAR_22 );

    VAR_22 = FUNC_5( VAR_10, "target" );
    FUNC_12( VAR_22 == VAR_3, "RegDeleteKey failed error %u\n", VAR_22 );

    VAR_22 = FUNC_5( VAR_10, "link" );
    FUNC_12( VAR_22 == VAR_2, "RegDeleteKey wrong error %u\n", VAR_22 );

    VAR_17 = FUNC_13( VAR_16 );
    FUNC_12( !VAR_17, "NtDeleteKey failed: 0x%08x\n", VAR_17 );
    FUNC_3( VAR_16 );

    FUNC_2( FUNC_0(), 0, VAR_14 );
    FUNC_15( &VAR_13 );
}
