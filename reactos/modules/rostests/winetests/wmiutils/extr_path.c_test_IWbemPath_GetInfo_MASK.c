
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int IWbemPath ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_3 () ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    IWbemPath *VAR_14;
    HRESULT VAR_15;
    ULONGLONG VAR_16;

    if (!(VAR_14 = FUNC_3())) return;

    VAR_15 = FUNC_0( VAR_14, 0, ((void*)0) );
    FUNC_4( VAR_15 == VAR_10, "got %08x\n", VAR_15 );

    VAR_15 = FUNC_0( VAR_14, 1, ((void*)0) );
    FUNC_4( VAR_15 == VAR_10, "got %08x\n", VAR_15 );

    VAR_16 = 0xdeadbeef;
    VAR_15 = FUNC_0( VAR_14, 0, &VAR_16 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_4( VAR_16 == (VAR_2 | VAR_8),
        "got %s\n", FUNC_5(VAR_16) );

    VAR_15 = FUNC_2( VAR_14, VAR_1, VAR_13 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_15 = FUNC_0( VAR_14, 0, ((void*)0) );
    FUNC_4( VAR_15 == VAR_10, "got %08x\n", VAR_15 );

    VAR_15 = FUNC_0( VAR_14, 1, ((void*)0) );
    FUNC_4( VAR_15 == VAR_10, "got %08x\n", VAR_15 );

    VAR_16 = 0xdeadbeef;
    VAR_15 = FUNC_0( VAR_14, 0, &VAR_16 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_4( VAR_16 == (VAR_2 | VAR_6 |
                 VAR_4 | VAR_9 |
                 VAR_3 | VAR_7),
        "got %s\n", FUNC_5(VAR_16) );

    FUNC_1( VAR_14 );
    if (!(VAR_14 = FUNC_3())) return;

    VAR_15 = FUNC_2( VAR_14, VAR_1, VAR_12 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_16 = 0xdeadbeef;
    VAR_15 = FUNC_0( VAR_14, 0, &VAR_16 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_4( VAR_16 == (VAR_2 | VAR_5 |
                 VAR_4 | VAR_9 |
                 VAR_3),
        "got %s\n", FUNC_5(VAR_16) );

    VAR_15 = FUNC_2( VAR_14, VAR_1, VAR_11 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );

    VAR_16 = 0xdeadbeef;
    VAR_15 = FUNC_0( VAR_14, 0, &VAR_16 );
    FUNC_4( VAR_15 == VAR_0, "got %08x\n", VAR_15 );
    FUNC_4( VAR_16 == (VAR_2 | VAR_8),
        "got %s\n", FUNC_5(VAR_16) );

    FUNC_1( VAR_14 );
}
