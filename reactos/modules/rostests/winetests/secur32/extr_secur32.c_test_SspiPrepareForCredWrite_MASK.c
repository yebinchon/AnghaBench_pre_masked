
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int passwordW ;
typedef unsigned char WCHAR ;
typedef int ULONG ;
typedef void UCHAR ;
typedef int SECURITY_STATUS ;
typedef int PSEC_WINNT_AUTH_IDENTITY_OPAQUE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 int FUNC_1 (void*,unsigned char const*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (unsigned char const*,unsigned char const*,unsigned char const*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,unsigned char const*,int*,unsigned char const**,unsigned char const**,void**,int*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned char const*) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const WCHAR VAR_2[] =
        {'u','s','e','r','n','a','m','e',0};
    static const WCHAR VAR_3[] =
        {'d','o','m','a','i','n','n','a','m','e',0};
    static const WCHAR VAR_4[] =
        {'p','a','s','s','w','o','r','d',0};
    static const WCHAR VAR_5[] =
        {'d','o','m','a','i','n','n','a','m','e','\\','u','s','e','r','n','a','m','e',0};
    static const WCHAR VAR_6[] =
        {'d','o','m','a','i','n','n','a','m','e','2','\\','u','s','e','r','n','a','m','e','2',0};
    const WCHAR *VAR_7, *VAR_8;
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE VAR_9;
    SECURITY_STATUS VAR_10;
    ULONG VAR_11, VAR_12;
    UCHAR *VAR_13;

    if (!&FUNC_6)
    {
        FUNC_7( "SspiPrepareForCredWrite not exported by secur32.dll\n" );
        return;
    }

    VAR_10 = FUNC_3( VAR_2, VAR_3, VAR_4, &VAR_9 );
    FUNC_2( VAR_10 == VAR_1, "got %08x\n", VAR_10 );

    VAR_11 = VAR_12 = 0;
    VAR_10 = FUNC_6( VAR_9, ((void*)0), &VAR_11, &VAR_7, &VAR_8, &VAR_13, &VAR_12 );
    FUNC_2( VAR_10 == VAR_1, "got %08x\n", VAR_10 );
    FUNC_2( VAR_11 == VAR_0, "got %u\n", VAR_11 );
    FUNC_2( !FUNC_0( VAR_7, VAR_5 ), "got %s\n", FUNC_8(VAR_7) );
    FUNC_2( !FUNC_0( VAR_8, VAR_5 ), "got %s\n", FUNC_8(VAR_8) );
    FUNC_2( !FUNC_1( VAR_13, VAR_4, sizeof(VAR_4) - sizeof(WCHAR) ), "wrong data\n" );
    FUNC_2( VAR_12 == sizeof(VAR_4) - sizeof(WCHAR), "got %u\n", VAR_12 );
    FUNC_5( (void *)VAR_7 );
    FUNC_5( (void *)VAR_8 );
    FUNC_5( VAR_13 );

    VAR_11 = VAR_12 = 0;
    VAR_10 = FUNC_6( VAR_9, VAR_6, &VAR_11, &VAR_7, &VAR_8, &VAR_13, &VAR_12 );
    FUNC_2( VAR_10 == VAR_1, "got %08x\n", VAR_10 );
    FUNC_2( VAR_11 == VAR_0, "got %u\n", VAR_11 );
    FUNC_2( !FUNC_0( VAR_7, VAR_6 ), "got %s\n", FUNC_8(VAR_7) );
    FUNC_2( !FUNC_0( VAR_8, VAR_5 ), "got %s\n", FUNC_8(VAR_8) );
    FUNC_2( !FUNC_1( VAR_13, VAR_4, sizeof(VAR_4) - sizeof(WCHAR) ), "wrong data\n" );
    FUNC_2( VAR_12 == sizeof(VAR_4) - sizeof(WCHAR), "got %u\n", VAR_12 );
    FUNC_5( (void *)VAR_7 );
    FUNC_5( (void *)VAR_8 );
    FUNC_5( VAR_13 );

    FUNC_4( VAR_9 );
}
