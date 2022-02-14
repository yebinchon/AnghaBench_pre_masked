
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,int **,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int * FUNC_6 (int,int ,int ) ;
 int * FUNC_7 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(void)
{
    HANDLE VAR_13, VAR_14;
    BOOL VAR_15;
    DWORD VAR_16;

    VAR_13 = FUNC_6( VAR_6, VAR_2, FUNC_3() );
    FUNC_11(VAR_13 != ((void*)0), "OpenProcess(PROCESS_TERMINATE) with err:%d\n", FUNC_5());
    FUNC_9( VAR_13, VAR_6 );

    VAR_15 = FUNC_1( FUNC_2(), VAR_13, FUNC_2(),
                           &VAR_14, 0, VAR_12, VAR_0 );
    FUNC_11(VAR_15, "duplicating handle err:%d\n", FUNC_5());
    FUNC_9( VAR_14, VAR_6 );

    FUNC_0( VAR_14 );

    FUNC_8( 0xdeadbeef );
    VAR_15 = FUNC_1( FUNC_2(), VAR_13, FUNC_2(),
                           &VAR_14, VAR_3, VAR_12, 0 );
    VAR_16 = FUNC_5();
    FUNC_11(!VAR_15 && VAR_16 == VAR_1, "duplicating handle should have failed "
       "with STATUS_ACCESS_DENIED, instead of err:%d\n", VAR_16);

    FUNC_0( VAR_13 );


    VAR_13 = FUNC_6( VAR_7, VAR_2, FUNC_3() );
    FUNC_11(VAR_13 == ((void*)0), "OpenProcess(PROCESS_VM_READ) should have failed\n");
    VAR_13 = FUNC_6( VAR_3, VAR_2, FUNC_3() );
    FUNC_11(VAR_13 == ((void*)0), "OpenProcess(PROCESS_ALL_ACCESS) should have failed\n");


    VAR_15 = FUNC_1( FUNC_2(), FUNC_2(), FUNC_2(),
                           &VAR_13, 0, VAR_12, VAR_0 );
    FUNC_11(VAR_15, "duplicating handle err:%d\n", FUNC_5());
    FUNC_10( VAR_13, VAR_4,
                          VAR_9 | VAR_8 );

    FUNC_0( VAR_13 );


    VAR_15 = FUNC_1( FUNC_2(), FUNC_2(), FUNC_2(),
                           &VAR_13, VAR_3, VAR_12, 0 );
    FUNC_11(VAR_15, "duplicating handle err:%d\n", FUNC_5());
    FUNC_10( VAR_13, VAR_4,
                          VAR_3 | VAR_5 );
    VAR_15 = FUNC_1( FUNC_2(), VAR_13, FUNC_2(),
                           &VAR_14, VAR_7, VAR_12, 0 );
    FUNC_11(VAR_15, "duplicating handle err:%d\n", FUNC_5());
    FUNC_9( VAR_14, VAR_7 );
    FUNC_0( VAR_14 );
    FUNC_0( VAR_13 );


    VAR_13 = FUNC_7( VAR_11, VAR_2, FUNC_4() );
    FUNC_11(VAR_13 != ((void*)0), "OpenThread(THREAD_TERMINATE) with err:%d\n", FUNC_5());
    FUNC_9( VAR_13, VAR_6 );
    FUNC_0( VAR_13 );

    VAR_13 = FUNC_7( VAR_10, VAR_2, FUNC_4() );
    FUNC_11(VAR_13 == ((void*)0), "OpenThread(THREAD_SET_THREAD_TOKEN) should have failed\n");
}
