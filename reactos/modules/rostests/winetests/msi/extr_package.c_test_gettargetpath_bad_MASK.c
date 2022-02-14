
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,char*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,char const*,char*,scalar_t__*) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_6[] = {'b','o','o',0};
    static const WCHAR VAR_7[] = {0};
    char VAR_8[0x80];
    WCHAR VAR_9[0x80];
    MSIHANDLE VAR_10;
    DWORD VAR_11;
    UINT VAR_12;

    VAR_12 = FUNC_6(FUNC_4(), &VAR_10);
    if (VAR_12 == VAR_1)
    {
        FUNC_7("Not enough rights to perform tests\n");
        FUNC_0(VAR_5);
        return;
    }
    FUNC_5( VAR_12 == VAR_4, "failed to create package %u\n", VAR_12);

    VAR_12 = FUNC_2( 0, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_3, "wrong return val\n");

    VAR_12 = FUNC_2( 0, ((void*)0), ((void*)0), &VAR_11 );
    FUNC_5( VAR_12 == VAR_3, "wrong return val\n");

    VAR_12 = FUNC_2( 0, "boo", ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_2, "wrong return val\n");

    VAR_12 = FUNC_2( 0, "boo", ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_2, "wrong return val\n");

    VAR_12 = FUNC_2( VAR_10, "boo", ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_0, "wrong return val\n");

    VAR_12 = FUNC_2( VAR_10, "boo", VAR_8, ((void*)0) );
    FUNC_5( VAR_12 == VAR_0, "wrong return val\n");

    VAR_11 = 0;
    VAR_12 = FUNC_2( VAR_10, "", VAR_8, &VAR_11 );
    FUNC_5( VAR_12 == VAR_0, "wrong return val\n");

    VAR_12 = FUNC_3( 0, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_3, "wrong return val\n");

    VAR_12 = FUNC_3( 0, ((void*)0), ((void*)0), &VAR_11 );
    FUNC_5( VAR_12 == VAR_3, "wrong return val\n");

    VAR_12 = FUNC_3( 0, VAR_6, ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_2, "wrong return val\n");

    VAR_12 = FUNC_3( 0, VAR_6, ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_2, "wrong return val\n");

    VAR_12 = FUNC_3( VAR_10, VAR_6, ((void*)0), ((void*)0) );
    FUNC_5( VAR_12 == VAR_0, "wrong return val\n");

    VAR_12 = FUNC_3( VAR_10, VAR_6, VAR_9, ((void*)0) );
    FUNC_5( VAR_12 == VAR_0, "wrong return val\n");

    VAR_11 = 0;
    VAR_12 = FUNC_3( VAR_10, VAR_7, VAR_9, &VAR_11 );
    FUNC_5( VAR_12 == VAR_0, "wrong return val\n");

    FUNC_1( VAR_10 );
    FUNC_0(VAR_5);
}
