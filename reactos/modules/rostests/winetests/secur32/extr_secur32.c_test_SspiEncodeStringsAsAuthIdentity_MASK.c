
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char WCHAR ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int * PSEC_WINNT_AUTH_IDENTITY_OPAQUE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *,unsigned char const**,unsigned char const**,unsigned char const**) ;
 scalar_t__ FUNC_3 (unsigned char const*,unsigned char const*,unsigned char const*,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_2[] = {'u','s','e','r','n','a','m','e',0};
    static const WCHAR VAR_3[] = {'d','o','m','a','i','n','n','a','m','e',0};
    static const WCHAR VAR_4[] = {'p','a','s','s','w','o','r','d',0};
    const WCHAR *VAR_5, *VAR_6, *VAR_7;
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE VAR_8;
    SECURITY_STATUS VAR_9;

    if (!&FUNC_3)
    {
        FUNC_7( "SspiEncodeAuthIdentityAsStrings not exported by secur32.dll\n" );
        return;
    }

    VAR_9 = FUNC_3( ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
    FUNC_1( VAR_9 == VAR_0, "got %08x\n", VAR_9 );

    VAR_8 = (PSEC_WINNT_AUTH_IDENTITY_OPAQUE)0xdeadbeef;
    VAR_9 = FUNC_3( ((void*)0), ((void*)0), ((void*)0), &VAR_8 );
    FUNC_1( VAR_9 == VAR_0, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 == (PSEC_WINNT_AUTH_IDENTITY_OPAQUE)0xdeadbeef, "id set\n" );

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_3( ((void*)0), ((void*)0), VAR_4, &VAR_8 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 != ((void*)0), "id not set\n" );
    FUNC_4( VAR_8 );

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_3( ((void*)0), VAR_3, VAR_4, &VAR_8 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 != ((void*)0), "id not set\n" );
    FUNC_4( VAR_8 );

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_3( VAR_2, ((void*)0), VAR_4, &VAR_8 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 != ((void*)0), "id not set\n" );
    FUNC_4( VAR_8 );

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_3( VAR_2, ((void*)0), ((void*)0), &VAR_8 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 != ((void*)0), "id not set\n" );
    FUNC_4( VAR_8 );

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_3( VAR_2, VAR_3, VAR_4, &VAR_8 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 != ((void*)0), "id not set\n" );

    VAR_5 = VAR_6 = VAR_7 = ((void*)0);
    VAR_9 = FUNC_2( VAR_8, &VAR_5, &VAR_6, &VAR_7 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( !FUNC_0( VAR_2, VAR_5 ), "wrong username\n" );
    FUNC_1( !FUNC_0( VAR_3, VAR_6 ), "wrong domainname\n" );
    FUNC_1( !FUNC_0( VAR_4, VAR_7 ), "wrong password\n" );

    FUNC_6( VAR_8 );

    FUNC_5( (void *)VAR_5 );
    FUNC_5( (void *)VAR_6 );
    FUNC_5( (void *)VAR_7 );
    FUNC_4( VAR_8 );

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_3( VAR_2, ((void*)0), VAR_4, &VAR_8 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( VAR_8 != ((void*)0), "id not set\n" );

    VAR_5 = VAR_7 = ((void*)0);
    VAR_6 = (const WCHAR *)0xdeadbeef;
    VAR_9 = FUNC_2( VAR_8, &VAR_5, &VAR_6, &VAR_7 );
    FUNC_1( VAR_9 == VAR_1, "got %08x\n", VAR_9 );
    FUNC_1( !FUNC_0( VAR_2, VAR_5 ), "wrong username\n" );
    FUNC_1( VAR_6 == ((void*)0), "domainname_ptr not cleared\n" );
    FUNC_1( !FUNC_0( VAR_4, VAR_7 ), "wrong password\n" );

    FUNC_5( (void *)VAR_5 );
    FUNC_5( (void *)VAR_7 );
    FUNC_4( VAR_8 );
}
