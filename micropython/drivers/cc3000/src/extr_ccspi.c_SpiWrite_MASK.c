
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ulSpiState; unsigned char* pTxPacket; unsigned short usTxPacketLength; } ;
struct TYPE_3__ {scalar_t__ (* ReadWlanInterruptPin ) () ;int (* WlanInterruptEnable ) () ;int (* WlanInterruptDisable ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__) ;
 unsigned char FUNC_3 (unsigned short) ;
 unsigned char FUNC_4 (unsigned short) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (unsigned char*,unsigned short) ;
 int FUNC_6 (unsigned char*,unsigned short) ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 TYPE_1__ VAR_9 ;
 scalar_t__* VAR_10 ;

long FUNC_10(unsigned char *VAR_11, unsigned short VAR_12)
{
    FUNC_2("SpiWrite %lu\n", VAR_8.ulSpiState);

    unsigned char VAR_13 = 0;



    if(!(VAR_12 & 0x0001)) {
        VAR_13++;
    }

    VAR_11[0] = VAR_3;
    VAR_11[1] = FUNC_3(VAR_12 + VAR_13);
    VAR_11[2] = FUNC_4(VAR_12 + VAR_13);
    VAR_11[3] = 0;
    VAR_11[4] = 0;

    VAR_12 += (VAR_2 + VAR_13);




    if (VAR_10[VAR_1 - 1] != VAR_0) {
        while (1);
    }

    if (VAR_8.ulSpiState == VAR_6) {
        while (VAR_8.ulSpiState != VAR_5);
    }

    if (VAR_8.ulSpiState == VAR_5) {


        FUNC_5(VAR_11, VAR_12);
    } else {




        VAR_9.WlanInterruptDisable();

        while (VAR_8.ulSpiState != VAR_4);

        VAR_8.ulSpiState = VAR_7;
        VAR_8.pTxPacket = VAR_11;
        VAR_8.usTxPacketLength = VAR_12;


        FUNC_1();


        VAR_9.WlanInterruptEnable();


        if (VAR_9.ReadWlanInterruptPin() == 0) {
            FUNC_6(VAR_8.pTxPacket, VAR_8.usTxPacketLength);

            VAR_8.ulSpiState = VAR_4;

            FUNC_0();
        }
    }



    while (VAR_4 != VAR_8.ulSpiState);

    return(0);
}
