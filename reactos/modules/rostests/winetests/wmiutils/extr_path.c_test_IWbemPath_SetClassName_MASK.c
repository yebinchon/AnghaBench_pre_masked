
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef char WCHAR ;
typedef int ULONGLONG ;
typedef int ULONG ;
typedef int IWbemPath ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int*,char*) ;
 scalar_t__ FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const WCHAR VAR_7[] = {'c','l','a','s','s',0};
    static const WCHAR VAR_8[] = {0};
    IWbemPath *VAR_9;
    WCHAR VAR_10[16];
    ULONG VAR_11;
    ULONGLONG VAR_12;
    HRESULT VAR_13;

    if (!(VAR_9 = FUNC_4())) return;

    VAR_13 = FUNC_3( VAR_9, ((void*)0) );
    FUNC_6( VAR_13 == VAR_6, "got %08x\n", VAR_13 );

    VAR_13 = FUNC_3( VAR_9, VAR_8 );
    FUNC_6( VAR_13 == VAR_0, "got %08x\n", VAR_13 );

    VAR_13 = FUNC_3( VAR_9, VAR_7 );
    FUNC_6( VAR_13 == VAR_0, "got %08x\n", VAR_13 );

    VAR_10[0] = 0;
    VAR_11 = sizeof(VAR_10) / sizeof(VAR_10[0]);
    VAR_13 = FUNC_0( VAR_9, &VAR_11, VAR_10 );
    FUNC_6( VAR_13 == VAR_0, "got %08x\n", VAR_13 );
    FUNC_6( !FUNC_5( VAR_10, VAR_7 ), "unexpected buffer contents %s\n", FUNC_8(VAR_10) );

    VAR_12 = 0;
    VAR_13 = FUNC_1( VAR_9, 0, &VAR_12 );
    FUNC_6( VAR_13 == VAR_0, "got %08x\n", VAR_13 );
    FUNC_6( VAR_12 == (VAR_1 | VAR_4 |
                  VAR_3 | VAR_5 |
                  VAR_2),
        "got %s\n", FUNC_7(VAR_12) );

    FUNC_2( VAR_9 );
}
