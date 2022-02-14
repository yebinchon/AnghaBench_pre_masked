
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef char WCHAR ;
typedef int ULONG ;
typedef int IWbemPath ;
typedef int HRESULT ;


 int FUNC_0 (int *,int*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int,char*,int) ;
 int VAR_4 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_5[] = {'W','i','n','3','2','_','L','o','g','i','c','a','l','D','i','s','k',0};
    IWbemPath *VAR_6;
    HRESULT VAR_7;
    WCHAR VAR_8[32];
    ULONG VAR_9;

    if (!(VAR_6 = FUNC_3())) return;

    VAR_7 = FUNC_0( VAR_6, ((void*)0), ((void*)0) );
    FUNC_6( VAR_7 == VAR_3, "got %08x\n", VAR_7 );

    VAR_9 = 0;
    VAR_7 = FUNC_0( VAR_6, &VAR_9, ((void*)0) );
    FUNC_6( VAR_7 == VAR_2, "got %08x\n", VAR_7 );

    VAR_9 = sizeof(VAR_8) / sizeof(VAR_8[0]);
    VAR_7 = FUNC_0( VAR_6, &VAR_9, VAR_8 );
    FUNC_6( VAR_7 == VAR_2, "got %08x\n", VAR_7 );

    VAR_9 = sizeof(VAR_8) / sizeof(VAR_8[0]);
    VAR_7 = FUNC_0( VAR_6, &VAR_9, ((void*)0) );
    FUNC_6( VAR_7 == VAR_3, "got %08x\n", VAR_7 );
    FUNC_6( VAR_9 == sizeof(VAR_8) / sizeof(VAR_8[0]), "unexpected length %u\n", VAR_9 );

    VAR_7 = FUNC_2( VAR_6, VAR_1, VAR_4 );
    FUNC_6( VAR_7 == VAR_0, "got %08x\n", VAR_7 );

    VAR_9 = 0;
    VAR_7 = FUNC_0( VAR_6, &VAR_9, ((void*)0) );
    FUNC_6( VAR_7 == VAR_0, "got %08x\n", VAR_7 );

    VAR_9 = sizeof(VAR_8) / sizeof(VAR_8[0]);
    VAR_7 = FUNC_0( VAR_6, &VAR_9, ((void*)0) );
    FUNC_6( VAR_7 == VAR_3, "got %08x\n", VAR_7 );
    FUNC_6( VAR_9 == sizeof(VAR_8) / sizeof(VAR_8[0]), "unexpected length %u\n", VAR_9 );

    VAR_8[0] = 0;
    VAR_9 = sizeof(VAR_8) / sizeof(VAR_8[0]);
    VAR_7 = FUNC_0( VAR_6, &VAR_9, VAR_8 );
    FUNC_6( VAR_7 == VAR_0, "got %08x\n", VAR_7 );
    FUNC_6( !FUNC_4( VAR_8, VAR_5 ), "unexpected buffer contents %s\n", FUNC_7(VAR_8) );
    FUNC_6( VAR_9 == FUNC_5( VAR_5 ) + 1, "unexpected length %u\n", VAR_9 );

    FUNC_1( VAR_6 );
}
