
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rmb_desc; struct smc_link_group* lgr; } ;
struct smc_sock {TYPE_2__ conn; TYPE_1__* clcsock; } ;
struct smc_link_group {struct smc_link* lnk; } ;
struct smc_link {int ibport; int llc_add_resp; int gid; TYPE_3__* smcibdev; scalar_t__ llc_confirm_resp_rc; int llc_confirm_resp; } ;
struct smc_clc_msg_decline {int dummy; } ;
struct TYPE_8__ {int sysctl_tcp_keepalive_time; } ;
struct net {TYPE_4__ ipv4; } ;
typedef int dclc ;
struct TYPE_7__ {int * mac; } ;
struct TYPE_5__ {int sk; } ;


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
 size_t VAR_10 ;
 int FUNC_0 (struct smc_sock*,struct smc_clc_msg_decline*,int,int ,int ) ;
 int FUNC_1 (struct smc_link*,int ) ;
 int FUNC_2 (struct smc_link*,int ,int ,int ) ;
 int FUNC_3 (struct smc_link*,int ) ;
 scalar_t__ FUNC_4 (struct smc_link*,int ,int) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct smc_sock *VAR_11)
{
 struct net *VAR_12 = FUNC_5(VAR_11->clcsock->sk);
 struct smc_link_group *VAR_13 = VAR_11->conn.lgr;
 struct smc_link *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = &VAR_13->lnk[VAR_10];

 if (FUNC_4(VAR_14, VAR_11->conn.rmb_desc, 0))
  return VAR_3;


 VAR_16 = FUNC_3(VAR_14, VAR_7);
 if (VAR_16 < 0)
  return VAR_6;


 VAR_15 = FUNC_6(
  &VAR_14->llc_confirm_resp,
  VAR_8);
 if (VAR_15 <= 0) {
  struct smc_clc_msg_decline VAR_17;

  VAR_16 = FUNC_0(VAR_11, &VAR_17, sizeof(VAR_17),
          VAR_2, VAR_0);
  return VAR_16 == -VAR_1 ? VAR_6 : VAR_16;
 }

 if (VAR_14->llc_confirm_resp_rc)
  return VAR_4;


 VAR_16 = FUNC_2(VAR_14,
       VAR_14->smcibdev->mac[VAR_14->ibport - 1],
       VAR_14->gid, VAR_7);
 if (VAR_16 < 0)
  return VAR_5;


 VAR_15 = FUNC_6(&VAR_14->llc_add_resp,
        VAR_9);
 if (VAR_15 <= 0) {
  struct smc_clc_msg_decline VAR_18;

  VAR_16 = FUNC_0(VAR_11, &VAR_18, sizeof(VAR_18),
          VAR_2, VAR_0);
  return VAR_16 == -VAR_1 ? VAR_5 : VAR_16;
 }

 FUNC_1(VAR_14, VAR_12->ipv4.sysctl_tcp_keepalive_time);

 return 0;
}
