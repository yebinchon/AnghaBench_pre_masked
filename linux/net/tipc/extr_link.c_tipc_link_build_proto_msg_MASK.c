
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_mon_state {int dummy; } ;
struct TYPE_4__ {int sent_nacks; int sent_probes; int sent_states; } ;
struct sk_buff_head {int dummy; } ;
struct tipc_link {int rcv_nxt; int peer_caps; int name; TYPE_2__ stats; int if_name; int advertised_mtu; int peer_session; scalar_t__ rcv_unacked; int bearer_id; int net; int snd_nxt_state; scalar_t__ snd_nxt; TYPE_1__* bc_sndlink; int net_plane; int session; int addr; struct tipc_mon_state mon_state; struct sk_buff_head deferdq; struct tipc_link* bc_rcvlink; } ;
struct sk_buff {int priority; } ;
struct TYPE_3__ {scalar_t__ snd_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tipc_link*) ;
 int FUNC_4 (struct tipc_link*) ;
 void* FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (struct tipc_msg*,int) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int) ;
 int FUNC_10 (struct tipc_msg*,int ) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 int FUNC_12 (struct tipc_msg*,int) ;
 int FUNC_13 (struct tipc_msg*,int) ;
 int FUNC_14 (struct tipc_msg*,scalar_t__) ;
 int FUNC_15 (struct tipc_msg*,int) ;
 int FUNC_16 (struct tipc_msg*,int) ;
 int FUNC_17 (struct tipc_msg*,int ) ;
 int FUNC_18 (struct tipc_msg*,int ) ;
 int FUNC_19 (struct tipc_msg*,scalar_t__) ;
 int FUNC_20 (struct tipc_msg*,int) ;
 int FUNC_21 (struct tipc_msg*,int) ;
 int FUNC_22 (struct tipc_msg*,int) ;
 int FUNC_23 (struct tipc_msg*,scalar_t__) ;
 int FUNC_24 (struct tipc_msg*,int ) ;
 int FUNC_25 (struct tipc_msg*,int) ;
 int FUNC_26 (struct sk_buff_head*) ;
 int FUNC_27 (struct sk_buff_head*) ;
 int FUNC_28 (struct sk_buff*,int) ;
 int FUNC_29 (void*,int ) ;
 int FUNC_30 (struct tipc_link*,void*) ;
 scalar_t__ FUNC_31 (struct tipc_link*) ;
 int FUNC_32 (struct tipc_link*) ;
 scalar_t__ VAR_10 ;
 int FUNC_33 (int ,void*,int*,struct tipc_mon_state*,int ) ;
 struct sk_buff* FUNC_34 (int ,int,int,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (struct sk_buff*,int,int ) ;

__attribute__((used)) static void FUNC_37(struct tipc_link *VAR_11, int VAR_12, bool VAR_13,
          bool VAR_14, u16 VAR_15,
          int VAR_16, int VAR_17,
          struct sk_buff_head *VAR_18)
{
 struct tipc_link *VAR_19 = VAR_11->bc_rcvlink;
 struct sk_buff *VAR_20;
 struct tipc_msg *VAR_21;
 struct sk_buff_head *VAR_22 = &VAR_11->deferdq;
 bool VAR_23 = FUNC_4(VAR_19);
 struct tipc_mon_state *VAR_24 = &VAR_11->mon_state;
 int VAR_25 = 0;
 void *VAR_26;
 u16 VAR_27 = 0;


 if (FUNC_31(VAR_11))
  return;

 if (!FUNC_32(VAR_11) && (VAR_12 == VAR_4))
  return;

 if (!FUNC_27(VAR_22))
  VAR_15 = FUNC_2(FUNC_26(VAR_22)) - VAR_11->rcv_nxt;

 VAR_20 = FUNC_34(VAR_2, VAR_12, VAR_1,
         VAR_10 + VAR_3,
         VAR_11->addr, FUNC_35(VAR_11->net), 0, 0, 0);
 if (!VAR_20)
  return;

 VAR_21 = FUNC_1(VAR_20);
 VAR_26 = FUNC_5(VAR_21);
 FUNC_24(VAR_21, VAR_11->session);
 FUNC_10(VAR_21, VAR_11->bearer_id);
 FUNC_18(VAR_21, VAR_11->net_plane);
 FUNC_19(VAR_21, VAR_11->snd_nxt);
 FUNC_6(VAR_21, VAR_11->rcv_nxt - 1);
 FUNC_9(VAR_21, VAR_19->rcv_nxt - 1);
 FUNC_7(VAR_21, !VAR_23);
 FUNC_14(VAR_21, VAR_11->bc_sndlink->snd_nxt - 1);
 FUNC_15(VAR_21, VAR_16);
 FUNC_16(VAR_21, VAR_17);
 FUNC_21(VAR_21, VAR_23);
 FUNC_22(VAR_21, 0);
 FUNC_23(VAR_21, VAR_11->snd_nxt + VAR_9 / 2);

 if (VAR_12 == VAR_4) {
  if (VAR_11->peer_caps & VAR_7)
   FUNC_23(VAR_21, VAR_11->snd_nxt_state++);
  FUNC_22(VAR_21, VAR_15);
  FUNC_8(VAR_21, FUNC_3(VAR_19));
  FUNC_20(VAR_21, VAR_13);
  FUNC_13(VAR_21, VAR_13 || VAR_14);
  if (VAR_11->peer_caps & VAR_6)
   VAR_27 = FUNC_30(VAR_11, VAR_26);
  FUNC_33(VAR_11->net, VAR_26 + VAR_27, &VAR_25, VAR_24, VAR_11->bearer_id);
  FUNC_25(VAR_21, VAR_1 + VAR_27 + VAR_25);
  FUNC_28(VAR_20, VAR_1 + VAR_27 + VAR_25);
  VAR_11->stats.sent_states++;
  VAR_11->rcv_unacked = 0;
 } else {

  if (VAR_12 == VAR_0) {
   FUNC_12(VAR_21, 1);
   FUNC_11(VAR_21, VAR_11->peer_session);
  }
  FUNC_17(VAR_21, VAR_11->advertised_mtu);
  FUNC_29(VAR_26, VAR_11->if_name);
  FUNC_25(VAR_21, VAR_1 + VAR_8);
  FUNC_28(VAR_20, VAR_1 + VAR_8);
 }
 if (VAR_13)
  VAR_11->stats.sent_probes++;
 if (VAR_15)
  VAR_11->stats.sent_nacks++;
 VAR_20->priority = VAR_5;
 FUNC_0(VAR_18, VAR_20);
 FUNC_36(VAR_20, 0, VAR_11->name);
}
