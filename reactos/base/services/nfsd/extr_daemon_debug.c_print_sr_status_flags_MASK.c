
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
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
 int FUNC_1 (int ,char*,...) ;
 int VAR_14 ;

void FUNC_2(int VAR_15, int VAR_16)
{
    if (VAR_15 > VAR_14) return;
    FUNC_1(VAR_13, "%04x: sr_status_flags: ", FUNC_0());
    if (VAR_16 & VAR_4)
        FUNC_1(VAR_13, "SEQ4_STATUS_CB_PATH_DOWN ");
    if (VAR_16 & VAR_3)
        FUNC_1(VAR_13, "SEQ4_STATUS_CB_GSS_CONTEXTS_EXPIRING ");
    if (VAR_16 & VAR_2)
        FUNC_1(VAR_13, "SEQ4_STATUS_CB_GSS_CONTEXTS_EXPIRED ");
    if (VAR_16 & VAR_8)
        FUNC_1(VAR_13, "SEQ4_STATUS_EXPIRED_ALL_STATE_REVOKED ");
    if (VAR_16 & VAR_9)
        FUNC_1(VAR_13, "SEQ4_STATUS_EXPIRED_SOME_STATE_REVOKED ");
    if (VAR_16 & VAR_0)
        FUNC_1(VAR_13, "SEQ4_STATUS_ADMIN_STATE_REVOKED ");
    if (VAR_16 & VAR_11)
        FUNC_1(VAR_13, "SEQ4_STATUS_RECALLABLE_STATE_REVOKED ");
    if (VAR_16 & VAR_10)
        FUNC_1(VAR_13, "SEQ4_STATUS_LEASE_MOVED ");
    if (VAR_16 & VAR_12)
        FUNC_1(VAR_13, "SEQ4_STATUS_RESTART_RECLAIM_NEEDED ");
    if (VAR_16 & VAR_5)
        FUNC_1(VAR_13, "SEQ4_STATUS_CB_PATH_DOWN_SESSION ");
    if (VAR_16 & VAR_1)
        FUNC_1(VAR_13, "SEQ4_STATUS_BACKCHANNEL_FAULT ");
    if (VAR_16 & VAR_6)
        FUNC_1(VAR_13, "SEQ4_STATUS_DEVID_CHANGED ");
    if (VAR_16 & VAR_7)
        FUNC_1(VAR_13, "SEQ4_STATUS_DEVID_DELETED ");
    FUNC_1(VAR_13, "\n");
}
