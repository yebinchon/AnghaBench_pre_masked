
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int user_mss; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct tcp_request_sock_ops {int (* send_synack ) (struct sock*,struct dst_entry*,struct flowi*,struct request_sock*,struct tcp_fastopen_cookie*,int ) ;scalar_t__ (* init_seq ) (struct sk_buff*) ;struct dst_entry* (* route_req ) (struct sock*,struct flowi*,struct request_sock*) ;scalar_t__ (* init_ts_off ) (struct net*,struct sk_buff*) ;int (* init_req ) (struct request_sock*,struct sock*,struct sk_buff*) ;int mss_clamp; } ;
struct tcp_options_received {scalar_t__ tstamp_ok; scalar_t__ saw_tstamp; scalar_t__ smc_ok; int user_mss; int mss_clamp; } ;
struct tcp_fastopen_cookie {int len; } ;
struct sock {int (* sk_data_ready ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct request_sock_ops {int family; int slab_name; } ;
struct request_sock {scalar_t__ cookie_ts; int mss; } ;
struct TYPE_9__ {int sysctl_tcp_syncookies; int sysctl_max_syn_backlog; } ;
struct net {TYPE_2__ ipv4; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_14__ {scalar_t__ tcp_tw_isn; } ;
struct TYPE_13__ {scalar_t__ ecn_ok; int ir_iif; int no_srccheck; } ;
struct TYPE_12__ {int transparent; } ;
struct TYPE_11__ {int source; } ;
struct TYPE_10__ {int tfo_listener; int txhash; scalar_t__ snt_isn; scalar_t__ ts_off; struct tcp_request_sock_ops const* af_specific; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct net*,int ) ;
 TYPE_7__* FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct request_sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct tcp_request_sock_ops const*,struct sock*,struct sk_buff*,int *) ;
 int FUNC_6 (struct dst_entry*) ;
 int FUNC_7 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_8 (struct sock*,struct request_sock*,int ) ;
 scalar_t__ FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 struct request_sock* FUNC_11 (struct request_sock_ops*,struct sock*,int) ;
 int FUNC_12 (struct sock*,struct sk_buff*) ;
 TYPE_6__* FUNC_13 (struct request_sock*) ;
 TYPE_5__* FUNC_14 (struct sock*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct request_sock*,int ,int ) ;
 int FUNC_18 (struct request_sock*) ;
 int FUNC_19 (struct sock*,struct request_sock*,int) ;
 int FUNC_20 (struct request_sock*) ;
 int FUNC_21 (struct request_sock*) ;
 scalar_t__ FUNC_22 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_23 (struct sock*) ;
 int FUNC_24 (int ,struct sk_buff*) ;
 struct net* FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*) ;
 int FUNC_27 (struct request_sock*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_28 (struct net*,struct sk_buff*) ;
 struct dst_entry* FUNC_29 (struct sock*,struct flowi*,struct request_sock*) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 int FUNC_31 (struct sock*,struct dst_entry*,struct flowi*,struct request_sock*,struct tcp_fastopen_cookie*,int ) ;
 int FUNC_32 (struct sock*) ;
 int FUNC_33 (struct sock*,struct dst_entry*,struct flowi*,struct request_sock*,struct tcp_fastopen_cookie*,int ) ;
 int FUNC_34 (struct tcp_options_received*) ;
 int FUNC_35 (struct request_sock*,struct sk_buff*,struct sock*,struct dst_entry*) ;
 TYPE_4__* FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (struct sock*) ;
 int FUNC_38 (struct request_sock*,struct tcp_options_received*,struct sk_buff*,struct sock*) ;
 int FUNC_39 (struct request_sock*,struct sock*,struct dst_entry*) ;
 int FUNC_40 (struct net*,struct sk_buff*,struct tcp_options_received*,int ,struct tcp_fastopen_cookie*) ;
 int FUNC_41 (struct request_sock*,struct dst_entry*) ;
 int FUNC_42 (struct sock*,struct request_sock*,struct sk_buff*) ;
 TYPE_3__* FUNC_43 (struct request_sock*) ;
 struct tcp_sock* FUNC_44 (struct sock*) ;
 int FUNC_45 (struct sock*,int ) ;
 int FUNC_46 (struct sock*) ;
 struct sock* FUNC_47 (struct sock*,struct sk_buff*,struct request_sock*,struct tcp_fastopen_cookie*,struct dst_entry*) ;

int FUNC_48(struct request_sock_ops *VAR_5,
       const struct tcp_request_sock_ops *VAR_6,
       struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct tcp_fastopen_cookie VAR_9 = { .len = -1 };
 __u32 VAR_10 = FUNC_2(VAR_8)->tcp_tw_isn;
 struct tcp_options_received VAR_11;
 struct tcp_sock *VAR_12 = FUNC_44(VAR_7);
 struct net *VAR_13 = FUNC_25(VAR_7);
 struct sock *VAR_14 = ((void*)0);
 struct request_sock *VAR_15;
 bool VAR_16 = 0;
 struct dst_entry *VAR_17;
 struct flowi VAR_18;





 if ((VAR_13->ipv4.sysctl_tcp_syncookies == 2 ||
      FUNC_9(VAR_7)) && !VAR_10) {
  VAR_16 = FUNC_45(VAR_7, VAR_5->slab_name);
  if (!VAR_16)
   goto drop;
 }

 if (FUNC_23(VAR_7)) {
  FUNC_1(FUNC_25(VAR_7), VAR_1);
  goto drop;
 }

 VAR_15 = FUNC_11(VAR_5, VAR_7, !VAR_16);
 if (!VAR_15)
  goto drop;

 FUNC_43(VAR_15)->af_specific = VAR_6;
 FUNC_43(VAR_15)->ts_off = 0;

 FUNC_34(&VAR_11);
 VAR_11.mss_clamp = VAR_6->mss_clamp;
 VAR_11.user_mss = VAR_12->rx_opt.user_mss;
 FUNC_40(FUNC_25(VAR_7), VAR_8, &VAR_11, 0,
     VAR_16 ? ((void*)0) : &VAR_9);

 if (VAR_16 && !VAR_11.saw_tstamp)
  FUNC_34(&VAR_11);

 if (FUNC_0(VAR_0) && VAR_16)
  VAR_11.smc_ok = 0;

 VAR_11.tstamp_ok = VAR_11.saw_tstamp;
 FUNC_38(VAR_15, &VAR_11, VAR_8, VAR_7);
 FUNC_13(VAR_15)->no_srccheck = FUNC_14(VAR_7)->transparent;


 FUNC_13(VAR_15)->ir_iif = FUNC_12(VAR_7, VAR_8);

 VAR_6->init_req(VAR_15, VAR_7, VAR_8);

 if (FUNC_22(VAR_7, VAR_8, VAR_15))
  goto drop_and_free;

 if (VAR_11.tstamp_ok)
  FUNC_43(VAR_15)->ts_off = VAR_6->init_ts_off(VAR_13, VAR_8);

 VAR_17 = VAR_6->route_req(VAR_7, &VAR_18, VAR_15);
 if (!VAR_17)
  goto drop_and_free;

 if (!VAR_16 && !VAR_10) {

  if (!VAR_13->ipv4.sysctl_tcp_syncookies &&
      (VAR_13->ipv4.sysctl_max_syn_backlog - FUNC_10(VAR_7) <
       (VAR_13->ipv4.sysctl_max_syn_backlog >> 2)) &&
      !FUNC_41(VAR_15, VAR_17)) {







   FUNC_17(VAR_15, FUNC_16(FUNC_36(VAR_8)->source),
        VAR_5->family);
   goto drop_and_release;
  }

  VAR_10 = VAR_6->init_seq(VAR_8);
 }

 FUNC_35(VAR_15, VAR_8, VAR_7, VAR_17);

 if (VAR_16) {
  VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_8, &VAR_15->mss);
  VAR_15->cookie_ts = VAR_11.tstamp_ok;
  if (!VAR_11.tstamp_ok)
   FUNC_13(VAR_15)->ecn_ok = 0;
 }

 FUNC_43(VAR_15)->snt_isn = VAR_10;
 FUNC_43(VAR_15)->txhash = FUNC_15();
 FUNC_39(VAR_15, VAR_7, VAR_17);
 FUNC_24(FUNC_18(VAR_15), VAR_8);
 if (!VAR_16) {
  FUNC_42(VAR_7, VAR_15, VAR_8);
  VAR_14 = FUNC_47(VAR_7, VAR_8, VAR_15, &VAR_9, VAR_17);
 }
 if (VAR_14) {
  VAR_6->send_synack(VAR_14, VAR_17, &VAR_18, VAR_15,
        &VAR_9, VAR_3);

  if (!FUNC_7(VAR_7, VAR_15, VAR_14)) {
   FUNC_19(VAR_14, VAR_15, 0);
   FUNC_4(VAR_14);
   FUNC_26(VAR_14);
   goto drop_and_free;
  }
  VAR_7->sk_data_ready(VAR_7);
  FUNC_4(VAR_14);
  FUNC_26(VAR_14);
 } else {
  FUNC_43(VAR_15)->tfo_listener = 0;
  if (!VAR_16)
   FUNC_8(VAR_7, VAR_15,
    FUNC_46((struct sock *)VAR_15));
  VAR_6->send_synack(VAR_7, VAR_17, &VAR_18, VAR_15, &VAR_9,
        !VAR_16 ? VAR_4 :
         VAR_2);
  if (VAR_16) {
   FUNC_20(VAR_15);
   return 0;
  }
 }
 FUNC_21(VAR_15);
 return 0;

drop_and_release:
 FUNC_6(VAR_17);
drop_and_free:
 FUNC_3(VAR_15);
drop:
 FUNC_37(VAR_7);
 return 0;
}
