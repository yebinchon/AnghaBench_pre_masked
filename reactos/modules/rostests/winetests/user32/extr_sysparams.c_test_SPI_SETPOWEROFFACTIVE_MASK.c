
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vals ;
typedef int UINT ;
typedef int BOOL ;


 int const VAR_0 ;
 int const FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int const,int*,int) ;
 int const VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int,int const,...) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( void )
{
    BOOL VAR_8;
    BOOL VAR_9;
    const UINT VAR_10[]={VAR_7,VAR_0};
    unsigned int VAR_11;

    FUNC_8("testing SPI_{GET,SET}POWEROFFACTIVE\n");
    FUNC_1(0xdeadbeef);
    VAR_8=FUNC_2( VAR_3, 0, &VAR_9, 0 );
    if (!FUNC_6(VAR_8,"SPI_{GET,SET}POWEROFFACTIVE"))
        return;

    for (VAR_11=0;VAR_11<sizeof(VAR_10)/sizeof(*VAR_10);VAR_11++)
    {
        UINT VAR_12;

        VAR_8=FUNC_2( VAR_4, VAR_10[VAR_11], 0,
                                  VAR_2 | VAR_1 );
        if (!FUNC_6(VAR_8,"SPI_SETPOWEROFFACTIVE")) return;
        FUNC_4(VAR_8, "%d: rc=%d err=%d\n", VAR_11, VAR_8, FUNC_0());
        FUNC_5( VAR_4, 1 );
        FUNC_7( VAR_5,
                               VAR_6,
                               VAR_10[VAR_11] ? "1" : "0" );


        VAR_12 = 0xdeadbeef;
        VAR_8=FUNC_2( VAR_3, 0, &VAR_12, 0 );
        FUNC_4(VAR_8, "%d: rc=%d err=%d\n", VAR_11, VAR_8, FUNC_0());
        FUNC_4(VAR_12 == VAR_10[VAR_11] ||
           FUNC_3(VAR_12 == (0xdead0000 | VAR_10[VAR_11])) ||
           VAR_12 == 0,
           "SPI_GETPOWEROFFACTIVE: got %d instead of 0 or %d\n", VAR_12, VAR_10[VAR_11]);
    }

    VAR_8=FUNC_2( VAR_4, VAR_9, 0, VAR_2 );
    FUNC_4(VAR_8, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_8, FUNC_0());
}
