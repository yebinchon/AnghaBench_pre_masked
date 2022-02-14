
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct l2tp_tunnel {int peer_tunnel_id; int tunnel_id; } ;
struct TYPE_2__ {int rx_errors; int rx_oos_packets; int rx_seq_discards; int rx_bytes; int rx_packets; int tx_errors; int tx_bytes; int tx_packets; } ;
struct l2tp_session {int recv_seq; int send_seq; int lns_mode; TYPE_1__ stats; scalar_t__ reorder_timeout; int * peer_cookie; scalar_t__ peer_cookie_len; int * cookie; scalar_t__ cookie_len; scalar_t__* ifname; int pwtype; int debug; int peer_session_id; int session_id; struct l2tp_tunnel* tunnel; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int ) ;
 int VAR_26 ;
 scalar_t__ FUNC_4 (struct l2tp_tunnel*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_27, u32 VAR_28, u32 VAR_29, int VAR_30,
    struct l2tp_session *VAR_31, u8 VAR_32)
{
 void *VAR_33;
 struct nlattr *VAR_34;
 struct l2tp_tunnel *VAR_35 = VAR_31->tunnel;

 VAR_33 = FUNC_3(VAR_27, VAR_28, VAR_29, &VAR_26, VAR_30, VAR_32);
 if (!VAR_33)
  return -VAR_0;

 if (FUNC_11(VAR_27, VAR_1, VAR_35->tunnel_id) ||
     FUNC_11(VAR_27, VAR_19, VAR_31->session_id) ||
     FUNC_11(VAR_27, VAR_7, VAR_35->peer_tunnel_id) ||
     FUNC_11(VAR_27, VAR_9,
   VAR_31->peer_session_id) ||
     FUNC_11(VAR_27, VAR_3, VAR_31->debug) ||
     FUNC_10(VAR_27, VAR_10, VAR_31->pwtype))
  goto nla_put_failure;

 if ((VAR_31->ifname[0] &&
      FUNC_9(VAR_27, VAR_4, VAR_31->ifname)) ||
     (VAR_31->cookie_len &&
      FUNC_7(VAR_27, VAR_2, VAR_31->cookie_len,
       &VAR_31->cookie[0])) ||
     (VAR_31->peer_cookie_len &&
      FUNC_7(VAR_27, VAR_8, VAR_31->peer_cookie_len,
       &VAR_31->peer_cookie[0])) ||
     FUNC_13(VAR_27, VAR_11, VAR_31->recv_seq) ||
     FUNC_13(VAR_27, VAR_18, VAR_31->send_seq) ||
     FUNC_13(VAR_27, VAR_5, VAR_31->lns_mode) ||
     (FUNC_4(VAR_35) &&
      FUNC_13(VAR_27, VAR_25, 1)) ||
     (VAR_31->reorder_timeout &&
      FUNC_8(VAR_27, VAR_12,
      VAR_31->reorder_timeout, VAR_6)))
  goto nla_put_failure;

 VAR_34 = FUNC_6(VAR_27, VAR_20);
 if (VAR_34 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_12(VAR_27, VAR_24,
         FUNC_0(&VAR_31->stats.tx_packets),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_22,
         FUNC_0(&VAR_31->stats.tx_bytes),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_23,
         FUNC_0(&VAR_31->stats.tx_errors),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_16,
         FUNC_0(&VAR_31->stats.rx_packets),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_13,
         FUNC_0(&VAR_31->stats.rx_bytes),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_17,
         FUNC_0(&VAR_31->stats.rx_seq_discards),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_15,
         FUNC_0(&VAR_31->stats.rx_oos_packets),
         VAR_21) ||
     FUNC_12(VAR_27, VAR_14,
         FUNC_0(&VAR_31->stats.rx_errors),
         VAR_21))
  goto nla_put_failure;
 FUNC_5(VAR_27, VAR_34);

 FUNC_2(VAR_27, VAR_33);
 return 0;

 nla_put_failure:
 FUNC_1(VAR_27, VAR_33);
 return -1;
}
