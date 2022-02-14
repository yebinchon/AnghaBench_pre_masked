
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


 scalar_t__ FUNC_0 (int *,int ,int*) ;
 scalar_t__ FUNC_1 (int *,int*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const WCHAR VAR_9[] = {'s','e','r','v','e','r',0};
    static const WCHAR VAR_10[] = {0};
    IWbemPath *VAR_11;
    WCHAR VAR_12[16];
    ULONG VAR_13;
    ULONGLONG VAR_14;
    HRESULT VAR_15;

    if (!(VAR_11 = FUNC_4())) return;

    VAR_15 = FUNC_3( VAR_11, ((void*)0) );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_13 = sizeof(VAR_12) / sizeof(VAR_12[0]);
    VAR_15 = FUNC_1( VAR_11, &VAR_13, VAR_12 );
    FUNC_6( VAR_15 == VAR_8, "got %08x\n", VAR_15 );

    VAR_15 = FUNC_3( VAR_11, VAR_10 );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_15 = FUNC_3( VAR_11, VAR_9 );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_12[0] = 0;
    VAR_13 = sizeof(VAR_12) / sizeof(VAR_12[0]);
    VAR_15 = FUNC_1( VAR_11, &VAR_13, VAR_12 );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_6( !FUNC_5( VAR_12, VAR_9 ), "unexpected buffer contents %s\n", FUNC_8(VAR_12) );

    VAR_14 = 0;
    VAR_15 = FUNC_0( VAR_11, 0, &VAR_14 );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_6( VAR_14 == (VAR_3 | VAR_6 |
                  VAR_7 | VAR_2 |
                  VAR_5 | VAR_4),
        "got %s\n", FUNC_7(VAR_14) );

    VAR_15 = FUNC_3( VAR_11, ((void*)0) );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_13 = sizeof(VAR_12) / sizeof(VAR_12[0]);
    VAR_15 = FUNC_1( VAR_11, &VAR_13, VAR_12 );
    FUNC_6( VAR_15 == VAR_8, "got %08x\n", VAR_15 );

    VAR_14 = 0;
    VAR_15 = FUNC_0( VAR_11, 0, &VAR_14 );
    FUNC_6( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_6( VAR_14 == (VAR_1 | VAR_5),
        "got %s\n", FUNC_7(VAR_14) );

    FUNC_2( VAR_11 );
}
