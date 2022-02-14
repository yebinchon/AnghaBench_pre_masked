
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,scalar_t__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const WCHAR VAR_3[] = {'c','l','a','s','s',0};
    static const WCHAR VAR_4[] = {'h','o','s','t','.','d','o','m','a','i','n',0};
    static const WCHAR VAR_5[] = {'c','l','a','s','s','/','h','o','s','t','.','d','o','m','a','i','n',0};
    DWORD VAR_6, VAR_7;
    WCHAR VAR_8[256];

    VAR_6 = FUNC_1( ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
    FUNC_4( VAR_6 == VAR_1, "got %u\n", VAR_6 );

    VAR_6 = FUNC_1( VAR_3, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_4( VAR_6 == VAR_1, "got %u\n", VAR_6 );

    VAR_6 = FUNC_1( VAR_3, VAR_4, ((void*)0), ((void*)0) );
    FUNC_4( VAR_6 == VAR_1, "got %u\n", VAR_6 );

    VAR_7 = 0;
    VAR_6 = FUNC_1( VAR_3, VAR_4, &VAR_7, ((void*)0) );
    FUNC_4( VAR_6 == VAR_0, "got %u\n", VAR_6 );
    FUNC_4( VAR_7 == FUNC_3(VAR_5) + 1, "got %u\n", VAR_7 );

    VAR_7 = FUNC_0(VAR_8);
    VAR_8[0] = 0;
    VAR_6 = FUNC_1( VAR_3, VAR_4, &VAR_7, VAR_8 );
    FUNC_4( VAR_6 == VAR_2, "got %u\n", VAR_6 );
    FUNC_4( VAR_7 == FUNC_3(VAR_5) + 1, "got %u\n", VAR_7 );
    FUNC_4( !FUNC_2( VAR_8, VAR_5 ), "wrong data\n" );
}
