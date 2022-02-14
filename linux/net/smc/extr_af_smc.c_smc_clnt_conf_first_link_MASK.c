
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
struct smc_link {int ibport; int gid; TYPE_3__* smcibdev; int llc_add; scalar_t__ llc_confirm_rc; int llc_confirm; } ;
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
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct smc_sock*,struct smc_clc_msg_decline*,int,int ,int ) ;
 int FUNC_1 (struct smc_link*) ;
 int FUNC_2 (struct smc_link*,int ) ;
 int FUNC_3 (struct smc_link*,int ,int ,int ) ;
 int FUNC_4 (struct smc_link*,int ) ;
 scalar_t__ FUNC_5 (struct smc_link*,int ,int) ;
 int FUNC_6 (struct smc_link*) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct smc_sock *VAR_12)
{
 struct net *VAR_13 = FUNC_7(VAR_12->clcsock->sk);
 struct smc_link_group *VAR_14 = VAR_12->conn.lgr;
 struct smc_link *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_15 = &VAR_14->lnk[VAR_11];

 VAR_16 = FUNC_8(
  &VAR_15->llc_confirm,
  VAR_9);
 if (VAR_16 <= 0) {
  struct smc_clc_msg_decline VAR_18;

  VAR_17 = FUNC_0(VAR_12, &VAR_18, sizeof(VAR_18),
          VAR_2, VAR_0);
  return VAR_17 == -VAR_1 ? VAR_7 : VAR_17;
 }

 if (VAR_15->llc_confirm_rc)
  return VAR_5;

 VAR_17 = FUNC_1(VAR_15);
 if (VAR_17)
  return VAR_3;

 FUNC_6(VAR_15);

 if (FUNC_5(VAR_15, VAR_12->conn.rmb_desc, 0))
  return VAR_4;


 VAR_17 = FUNC_4(VAR_15, VAR_8);
 if (VAR_17 < 0)
  return VAR_7;


 VAR_16 = FUNC_8(&VAR_15->llc_add,
        VAR_10);
 if (VAR_16 <= 0) {
  struct smc_clc_msg_decline VAR_19;

  VAR_17 = FUNC_0(VAR_12, &VAR_19, sizeof(VAR_19),
          VAR_2, VAR_0);
  return VAR_17 == -VAR_1 ? VAR_6 : VAR_17;
 }


 VAR_17 = FUNC_3(VAR_15,
       VAR_15->smcibdev->mac[VAR_15->ibport - 1],
       VAR_15->gid, VAR_8);
 if (VAR_17 < 0)
  return VAR_6;

 FUNC_2(VAR_15, VAR_13->ipv4.sysctl_tcp_keepalive_time);

 return 0;
}
