
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_5__ {int descs_dma; } ;
struct TYPE_4__ {int descs_dma; } ;
struct ag71xx {scalar_t__ macNum; TYPE_3__* dev; TYPE_2__ rx_ring; TYPE_1__ tx_ring; int mii_if; } ;
struct TYPE_6__ {int enetaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*,int ) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (struct ag71xx*,int ,int) ;
 int FUNC_5 (struct ag71xx*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct ag71xx *VAR_24)
{
    int VAR_25 = 0;
 uint32_t VAR_26;
 uint32_t VAR_27, VAR_28;

    if (VAR_24->macNum == 0) {
        VAR_27 = (VAR_20 | VAR_21);
        VAR_28 = 0x13;
    } else {
        VAR_27 = (VAR_22 | VAR_23);
        VAR_28 = 0x11;
    }


    FUNC_4(VAR_24, VAR_5, VAR_15);
    FUNC_8(20);


 VAR_26 = FUNC_6(VAR_10);
 FUNC_7(VAR_10, VAR_26 | VAR_27);
 FUNC_8(100 * 1000);


    VAR_26 = FUNC_6(VAR_10);
    FUNC_7(VAR_10, VAR_26 & ~VAR_27);
    FUNC_8(100 * 1000);


    FUNC_5(VAR_24, VAR_5, (VAR_14 | VAR_16));

    FUNC_4(VAR_24, VAR_6,
          VAR_18 | VAR_17);


    FUNC_5(VAR_24, VAR_0, VAR_11);


    FUNC_2(VAR_24, VAR_24->mii_if);


    FUNC_5(VAR_24, VAR_7, VAR_19);


 FUNC_4(VAR_24, VAR_3, VAR_12);
    FUNC_5(VAR_24, VAR_1, 0x0fff0000);
    FUNC_5(VAR_24, VAR_2, 0x00001fff);
    FUNC_5(VAR_24, VAR_4, VAR_13);

    FUNC_0(VAR_24);

    VAR_25 = FUNC_3(VAR_24);
    if (VAR_25)
        return -1;

 FUNC_5(VAR_24, VAR_9,
    (u32) FUNC_9(VAR_24->tx_ring.descs_dma));
 FUNC_5(VAR_24, VAR_8,
    (u32) FUNC_9(VAR_24->rx_ring.descs_dma));

 FUNC_1(VAR_24, VAR_24->dev->enetaddr);

    return 0;
}
