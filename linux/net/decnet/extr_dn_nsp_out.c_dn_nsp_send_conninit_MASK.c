
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_allocation; } ;
struct sk_buff {int dummy; } ;
struct nsp_conn_init_msg {unsigned char msgflg; int dstaddr; int segsize; int info; int services; int srcaddr; } ;
struct dn_skb_cb {int rt_flags; } ;
struct TYPE_5__ {int opt_data; int opt_optl; } ;
struct TYPE_4__ {unsigned char acc_userl; unsigned char acc_passl; unsigned char acc_accl; int acc_acc; int acc_pass; int acc_user; } ;
struct TYPE_6__ {int sdn_flags; scalar_t__ sdn_objnum; } ;
struct dn_scp {int persist_fxn; int persist; TYPE_2__ conndata_out; TYPE_1__ accessdata; TYPE_3__ peer; TYPE_3__ addr; int segsize_loc; int info_loc; int services_loc; int addrloc; } ;
typedef int gfp_t ;
typedef unsigned char __u8 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int ) ;
 int FUNC_4 (struct sock*) ;
 int VAR_9 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 struct nsp_conn_init_msg* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int ,unsigned char) ;
 int FUNC_10 (struct sk_buff*,unsigned char) ;
 int FUNC_11 (struct sk_buff*) ;

void FUNC_12(struct sock *VAR_10, unsigned char VAR_11)
{
 struct dn_scp *VAR_12 = FUNC_0(VAR_10);
 struct nsp_conn_init_msg *VAR_13;
 unsigned char VAR_14;
 unsigned char VAR_15;
 struct dn_skb_cb *VAR_16;
 unsigned char VAR_17 = 1;
 gfp_t VAR_18 = (VAR_11 == VAR_6) ? VAR_10->sk_allocation : VAR_5;
 struct sk_buff *VAR_19 = FUNC_3(VAR_10, 200, VAR_18);

 if (!VAR_19)
  return;

 VAR_16 = FUNC_1(VAR_19);
 VAR_13 = FUNC_8(VAR_19, sizeof(*VAR_13));

 VAR_13->msgflg = VAR_11;
 VAR_13->dstaddr = 0x0000;

 VAR_13->srcaddr = VAR_12->addrloc;
 VAR_13->services = VAR_12->services_loc;
 VAR_13->info = VAR_12->info_loc;
 VAR_13->segsize = FUNC_2(VAR_12->segsize_loc);

 if (VAR_12->peer.sdn_objnum)
  VAR_17 = 0;

 FUNC_8(VAR_19, FUNC_6(&VAR_12->peer,
       FUNC_11(VAR_19), VAR_17));
 FUNC_8(VAR_19, FUNC_6(&VAR_12->addr,
       FUNC_11(VAR_19), 2));

 VAR_15 = VAR_0 | VAR_3;
 if (VAR_12->peer.sdn_flags & VAR_7)
  VAR_15 |= VAR_1;
 if (VAR_12->peer.sdn_flags & VAR_8)
  VAR_15 |= VAR_2;

 FUNC_10(VAR_19, VAR_15);

 VAR_14 = VAR_12->accessdata.acc_userl;
 FUNC_10(VAR_19, VAR_14);
 if (VAR_14 > 0)
  FUNC_9(VAR_19, VAR_12->accessdata.acc_user, VAR_14);

 VAR_14 = VAR_12->accessdata.acc_passl;
 FUNC_10(VAR_19, VAR_14);
 if (VAR_14 > 0)
  FUNC_9(VAR_19, VAR_12->accessdata.acc_pass, VAR_14);

 VAR_14 = VAR_12->accessdata.acc_accl;
 FUNC_10(VAR_19, VAR_14);
 if (VAR_14 > 0)
  FUNC_9(VAR_19, VAR_12->accessdata.acc_acc, VAR_14);

 VAR_14 = (__u8)FUNC_7(VAR_12->conndata_out.opt_optl);
 FUNC_10(VAR_19, VAR_14);
 if (VAR_14 > 0)
  FUNC_9(VAR_19, VAR_12->conndata_out.opt_data, VAR_14);

 VAR_12->persist = FUNC_4(VAR_10);
 VAR_12->persist_fxn = VAR_9;

 VAR_16->rt_flags = VAR_4;

 FUNC_5(VAR_19);
}
