
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fe_status_t ;
typedef int dvb_priv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(dvb_priv_t *VAR_6, fe_status_t VAR_7)
{
    FUNC_0(VAR_6, "FE_STATUS:");
    if (VAR_7 & VAR_2)
        FUNC_0(VAR_6, " FE_HAS_SIGNAL");
    if (VAR_7 & VAR_5)
        FUNC_0(VAR_6, " FE_TIMEDOUT");
    if (VAR_7 & VAR_1)
        FUNC_0(VAR_6, " FE_HAS_LOCK");
    if (VAR_7 & VAR_0)
        FUNC_0(VAR_6, " FE_HAS_CARRIER");
    if (VAR_7 & VAR_4)
        FUNC_0(VAR_6, " FE_HAS_VITERBI");
    if (VAR_7 & VAR_3)
        FUNC_0(VAR_6, " FE_HAS_SYNC");
    FUNC_0(VAR_6, "\n");
}
