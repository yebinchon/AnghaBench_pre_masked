
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link {int peer_mtu; void* peer_psn; int peer_mac; int peer_gid; void* peer_qpn; } ;
struct TYPE_2__ {int mac; int gid; } ;
struct smc_clc_msg_accept_confirm {int qp_mtu; int psn; TYPE_1__ lcl; int qpn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct smc_link *VAR_1,
        struct smc_clc_msg_accept_confirm *VAR_2)
{
 VAR_1->peer_qpn = FUNC_1(VAR_2->qpn);
 FUNC_0(VAR_1->peer_gid, VAR_2->lcl.gid, VAR_0);
 FUNC_0(VAR_1->peer_mac, VAR_2->lcl.mac, sizeof(VAR_1->peer_mac));
 VAR_1->peer_psn = FUNC_1(VAR_2->psn);
 VAR_1->peer_mtu = VAR_2->qp_mtu;
}
