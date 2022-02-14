
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_10__ {int rx_tc_crc_len; int tx_tc_crc_len; scalar_t__ tx_eth_crc_gen; scalar_t__ tx_tc_crc_gen; scalar_t__ rx_eth_crc_present; scalar_t__ rx_eth_crc_check; scalar_t__ rx_tc_crc_check; } ;
struct TYPE_9__ {int desba; int deslen; int vlddes; } ;
struct TYPE_8__ {int mfs; unsigned int dmach; int local_state; int partner_state; } ;
struct TYPE_7__ {int desba; int deslen; int vlddes; } ;
struct TYPE_6__ {int tx_cwth2; int tx_cwth1; } ;


 TYPE_5__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*,...) ;

__attribute__((used)) static int FUNC_8(char *VAR_8, char **VAR_9, off_t VAR_10, int VAR_11, int *VAR_12, void *VAR_13)
{
    int VAR_14 = 0;
    int VAR_15 = VAR_10 + VAR_11;
    char *VAR_16;
    char VAR_17[2048];
    int VAR_18 = 0;
    int VAR_19;
    unsigned long VAR_20;

    VAR_16 = *VAR_9 = VAR_8;

    FUNC_5();

    VAR_18 += FUNC_7(VAR_17 + VAR_18, "CFG_WAN_WRDES_DELAY (0x%08X): %d\n", (unsigned int)VAR_1, FUNC_0(VAR_1));
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "CFG_WRX_DMACH_ON    (0x%08X):", (unsigned int)VAR_2);
    for ( VAR_19 = 0, VAR_20 = 1; VAR_19 < VAR_6; VAR_19++, VAR_20 <<= 1 )
        VAR_18 += FUNC_7(VAR_17 + VAR_18, " %d - %s", VAR_19, (FUNC_0(VAR_2) & VAR_20) ? "on " : "off");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "\n");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "CFG_WTX_DMACH_ON    (0x%08X):", (unsigned int)VAR_4);
    for ( VAR_19 = 0, VAR_20 = 1; VAR_19 < VAR_7; VAR_19++, VAR_20 <<= 1 )
        VAR_18 += FUNC_7(VAR_17 + VAR_18, " %d - %s", VAR_19, (FUNC_0(VAR_4) & VAR_20) ? "on " : "off");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "\n");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "CFG_WRX_LOOK_BITTH  (0x%08X): %d\n", (unsigned int)VAR_3, FUNC_0(VAR_3));
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "CFG_ETH_EFMTC_CRC   (0x%08X): rx_tc_crc_len    - %2d,  rx_tc_crc_check    - %s\n", (unsigned int)VAR_0, VAR_0->rx_tc_crc_len, VAR_0->rx_tc_crc_check ? " on" : "off");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "                                  rx_eth_crc_check - %s, rx_eth_crc_present - %s\n", VAR_0->rx_eth_crc_check ? " on" : "off", VAR_0->rx_eth_crc_present ? " on" : "off");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "                                  tx_tc_crc_len    - %2d,  tx_tc_crc_gen      - %s\n", VAR_0->tx_tc_crc_len, VAR_0->tx_tc_crc_gen ? " on" : "off");
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "                                  tx_eth_crc_gen   - %s\n", VAR_0->tx_eth_crc_gen ? " on" : "off");

    VAR_18 += FUNC_7(VAR_17 + VAR_18, "RX Port:\n");
    for ( VAR_19 = 0; VAR_19 < VAR_6; VAR_19++ )
        VAR_18 += FUNC_7(VAR_17 + VAR_18, "  %d (0x%08X). mfs - %5d, dmach - %d, local_state - %d, partner_state - %d\n", VAR_19, (unsigned int)FUNC_2(VAR_19), FUNC_2(VAR_19)->mfs, FUNC_2(VAR_19)->dmach, FUNC_2(VAR_19)->local_state, FUNC_2(VAR_19)->partner_state);
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "RX DMA Channel:\n");
    for ( VAR_19 = 0; VAR_19 < VAR_6; VAR_19++ )
        VAR_18 += FUNC_7(VAR_17 + VAR_18, "  %d (0x%08X). desba - 0x%08X (0x%08X), deslen - %d, vlddes - %d\n", VAR_19, (unsigned int)FUNC_1(VAR_19), FUNC_1(VAR_19)->desba, ((unsigned int)FUNC_1(VAR_19)->desba << 2) | VAR_5, FUNC_1(VAR_19)->deslen, FUNC_1(VAR_19)->vlddes);

    VAR_18 += FUNC_7(VAR_17 + VAR_18, "TX Port:\n");
    for ( VAR_19 = 0; VAR_19 < VAR_7; VAR_19++ )
        VAR_18 += FUNC_7(VAR_17 + VAR_18, "  %d (0x%08X). tx_cwth2 - %d, tx_cwth1 - %d\n", VAR_19, (unsigned int)FUNC_4(VAR_19), FUNC_4(VAR_19)->tx_cwth2, FUNC_4(VAR_19)->tx_cwth1);
    VAR_18 += FUNC_7(VAR_17 + VAR_18, "TX DMA Channel:\n");
    for ( VAR_19 = 0; VAR_19 < VAR_7; VAR_19++ )
        VAR_18 += FUNC_7(VAR_17 + VAR_18, "  %d (0x%08X). desba - 0x%08X (0x%08X), deslen - %d, vlddes - %d\n", VAR_19, (unsigned int)FUNC_3(VAR_19), FUNC_3(VAR_19)->desba, ((unsigned int)FUNC_3(VAR_19)->desba << 2) | VAR_5, FUNC_3(VAR_19)->deslen, FUNC_3(VAR_19)->vlddes);

    if ( VAR_14 <= VAR_10 && VAR_14 + VAR_18 > VAR_10 )
    {
        FUNC_6(VAR_16, VAR_17 + VAR_10 - VAR_14, VAR_14 + VAR_18 - VAR_10);
        VAR_16 += VAR_14 + VAR_18 - VAR_10;
    }
    else if ( VAR_14 > VAR_10 )
    {
        FUNC_6(VAR_16, VAR_17, VAR_18);
        VAR_16 += VAR_18;
    }
    VAR_14 += VAR_18;
    if ( VAR_14 >= VAR_15 )
        goto PROC_READ_GENCONF_OVERRUN_END;

    *VAR_12 = 1;

    return VAR_14 - VAR_10;

PROC_READ_GENCONF_OVERRUN_END:
    return VAR_14 - VAR_18 - VAR_10;
}
