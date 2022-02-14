
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( void )
{
    BOOL VAR_2;
    INT VAR_3;

    FUNC_6("testing SPI_ICONVERTICALSPACING\n");
    FUNC_1(0xdeadbeef);

    VAR_2=FUNC_2( VAR_1, 0, &VAR_3, 0 );
    if (!FUNC_5(VAR_2,"SPI_ICONVERTICALSPACING"))
        return;

    if (!FUNC_3( VAR_3 - 1)) return;

    FUNC_3( 10);

    VAR_2=FUNC_2( VAR_1, VAR_3, 0,
                              VAR_0 );
    FUNC_4(VAR_2, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_2, FUNC_0());
}
