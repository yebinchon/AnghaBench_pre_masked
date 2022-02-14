
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


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
 int FUNC_0 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

int FUNC_2(char *VAR_32, char **VAR_33, off_t VAR_34, int VAR_35, int *VAR_36, void *VAR_37)
{
    int VAR_38 = 0;

    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "EMA:\n");
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  SB_MST_PRI0 - 0x%08X, SB_MST_PRI1 - 0x%08X\n", FUNC_0(VAR_24), FUNC_0(VAR_25));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  EMA_CMDCFG  - 0x%08X, EMA_DATACFG - 0x%08X\n", FUNC_0(VAR_10), FUNC_0(VAR_11));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  EMA_IER     - 0x%08X, EMA_CFG     - 0x%08X\n", FUNC_0(VAR_12), FUNC_0(VAR_9));

    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "Mailbox:\n");
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  MBOX_IGU1_IER - 0x%08X, MBOX_IGU1_ISR - 0x%08X\n", FUNC_0(VAR_19), FUNC_0(VAR_20));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  MBOX_IGU3_IER - 0x%08X, MBOX_IGU3_ISR - 0x%08X\n", FUNC_0(VAR_21), FUNC_0(VAR_22));

    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "TC:\n");
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  RFBI_CFG  - 0x%08X\n", FUNC_0(VAR_23));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  SFSM_DBA0 - 0x%08X, SFSM_CBA0 - 0x%08X, SFSM_CFG0 - 0x%08X\n", FUNC_0(VAR_30), FUNC_0(VAR_26), FUNC_0(VAR_28));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  SFSM_DBA1 - 0x%08X, SFSM_CBA1 - 0x%08X, SFSM_CFG1 - 0x%08X\n", FUNC_0(VAR_31), FUNC_0(VAR_27), FUNC_0(VAR_29));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  FFSM_DBA0 - 0x%08X, FFSM_CFG0 - 0x%08X, IDLE_HEAD - 0x%08X\n", FUNC_0(VAR_15), FUNC_0(VAR_13), FUNC_0(VAR_17));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  FFSM_DBA1 - 0x%08X, FFSM_CFG1 - 0x%08X, IDLE_HEAD - 0x%08X\n", FUNC_0(VAR_16), FUNC_0(VAR_14), FUNC_0(VAR_18));

    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "DPlus:\n");
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  DM_RXDB    - 0x%08X, DM_RXCB     - 0x%08X, DM_RXCFG - 0x%08X\n", FUNC_0(VAR_2), FUNC_0(VAR_0), FUNC_0(VAR_1));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  DM_RXPGCNT - 0x%08X, DM_RXPKTCNT - 0x%08X\n", FUNC_0(VAR_3), FUNC_0(VAR_4));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  DS_RXDB    - 0x%08X, DS_RXCB     - 0x%08X, DS_RXCFG - 0x%08X\n", FUNC_0(VAR_7), FUNC_0(VAR_5), FUNC_0(VAR_6));
    VAR_38 += FUNC_1(VAR_32 + VAR_34 + VAR_38, "  DS_RXPGCNT - 0x%08X\n", FUNC_0(VAR_8));

    *VAR_36 = 1;

    return VAR_38;
}
