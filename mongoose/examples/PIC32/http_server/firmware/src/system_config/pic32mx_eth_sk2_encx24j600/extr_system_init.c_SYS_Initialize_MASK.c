
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tcpip; int sysTmr; int sysDebug; int sysConsole0; int drvUsart0; int drvTmr0; int spiObjectIdx0; int sysDevcon; } ;
typedef int SYS_MODULE_INIT ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int const* const) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int FUNC_9 (int ,int *) ;
 int VAR_13 ;
 int FUNC_10 (int ,int *) ;
 int VAR_14 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 int VAR_16 ;
 int FUNC_20 (int ,int const* const) ;
 scalar_t__ FUNC_21 () ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__ VAR_24 ;
 int VAR_25 ;

void FUNC_22 ( void* VAR_26 )
{

    FUNC_6( ((void*)0) );
    VAR_24.sysDevcon = FUNC_11(VAR_14, (SYS_MODULE_INIT*)&VAR_23);
    FUNC_13(FUNC_7());
    FUNC_12();
    FUNC_18();

    FUNC_1();





    FUNC_16(VAR_3, VAR_1);
    FUNC_17(VAR_3, VAR_2);
    VAR_24.spiObjectIdx0 = FUNC_2(VAR_0, (const SYS_MODULE_INIT * const)&VAR_19);

    VAR_24.drvTmr0 = FUNC_3(VAR_4, (SYS_MODULE_INIT *)&VAR_20);

    FUNC_16(VAR_11, VAR_6);
    FUNC_17(VAR_11, VAR_8);


     VAR_24.drvUsart0 = FUNC_4(VAR_5, (SYS_MODULE_INIT *)&VAR_21);




    FUNC_8((SYS_MODULE_INIT*)&VAR_22);
    VAR_24.sysConsole0 = FUNC_9(VAR_12, (SYS_MODULE_INIT *)&VAR_17);



    VAR_24.sysDebug = FUNC_10(VAR_13, (SYS_MODULE_INIT*)&VAR_18);


    FUNC_15();


    FUNC_19(0, 0);


    VAR_24.sysTmr = FUNC_20(VAR_16, (const SYS_MODULE_INIT * const)&VAR_25);




    FUNC_16(VAR_10, VAR_7);


    FUNC_17(VAR_10, VAR_9);


    VAR_24.tcpip = FUNC_21();
    FUNC_5(VAR_24.tcpip != VAR_15, "TCPIP_STACK_Init Failed" );



    FUNC_14();


    FUNC_0();
}
