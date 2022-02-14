
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lgr; } ;
struct smc_sock {TYPE_2__ conn; } ;
struct smc_init_info {scalar_t__ cln_first_contact; int ism_gid; } ;
struct smc_clc_msg_smcd {int gid; } ;
struct smc_clc_msg_proposal {int dummy; } ;
struct TYPE_3__ {int smcd; int vlan_id; int peer_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct smc_sock*,int) ;
 int FUNC_1 (struct smc_sock*,struct smc_init_info*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct smc_clc_msg_smcd* FUNC_3 (struct smc_clc_msg_proposal*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct smc_sock *VAR_3,
          struct smc_clc_msg_proposal *VAR_4,
          struct smc_init_info *VAR_5)
{
 struct smc_clc_msg_smcd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4);
 VAR_5->ism_gid = VAR_6->gid;
 VAR_7 = FUNC_1(VAR_3, VAR_5);
 if (VAR_7)
  return VAR_7;


 if (FUNC_4(VAR_3->conn.lgr->peer_gid,
       VAR_3->conn.lgr->vlan_id,
       VAR_3->conn.lgr->smcd)) {
  if (VAR_5->cln_first_contact == VAR_2)
   FUNC_5(VAR_3->conn.lgr);
  FUNC_2(&VAR_3->conn);
  return VAR_1;
 }


 if (FUNC_0(VAR_3, 1)) {
  if (VAR_5->cln_first_contact == VAR_2)
   FUNC_5(VAR_3->conn.lgr);
  FUNC_2(&VAR_3->conn);
  return VAR_0;
 }

 return 0;
}
