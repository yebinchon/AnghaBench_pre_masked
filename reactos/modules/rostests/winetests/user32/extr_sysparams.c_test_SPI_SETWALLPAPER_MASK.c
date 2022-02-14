
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( void )
{
    BOOL VAR_6;
    char VAR_7[260];
    char VAR_8[260];

    FUNC_8("testing SPI_{GET,SET}DESKWALLPAPER\n");
    FUNC_1(0xdeadbeef);
    VAR_6=FUNC_2(VAR_2, 260, VAR_7, 0);



    if (!FUNC_6(VAR_6,"SPI_{GET,SET}DESKWALLPAPER"))
        return;

    FUNC_4(VAR_8, "");
    VAR_6=FUNC_2(VAR_3, 0, VAR_8, VAR_1 | VAR_0);
    if (!FUNC_6(VAR_6,"SPI_SETDESKWALLPAPER")) return;
    FUNC_3(VAR_6, "SystemParametersInfoA: rc=%d err=%d\n", VAR_6, FUNC_0());
    FUNC_5(VAR_3, 0);

    VAR_6=FUNC_2(VAR_3, 0, VAR_7, VAR_1);
    FUNC_3(VAR_6, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_6, FUNC_0());

    FUNC_7(VAR_4, VAR_5, VAR_7);
}
