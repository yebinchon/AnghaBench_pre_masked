
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_19__ {int mss_clamp; scalar_t__ ts_recent_stamp; scalar_t__ ts_recent; } ;
struct tcp_sock {int tsoffset; int write_seq; int repair; TYPE_7__ rx_opt; } ;
struct TYPE_14__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_route_caps; int sk_gso_type; int sk_bound_dev_if; } ;
struct rtable {int rt_flags; int dst; } ;
struct TYPE_18__ {scalar_t__ faddr; scalar_t__ optlen; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_6__ opt; } ;
struct inet_timewait_death_row {int dummy; } ;
struct flowi4 {scalar_t__ daddr; scalar_t__ saddr; } ;
struct TYPE_15__ {struct flowi4 ip4; } ;
struct TYPE_16__ {TYPE_3__ u; } ;
struct TYPE_17__ {TYPE_4__ fl; } ;
struct inet_sock {scalar_t__ inet_daddr; scalar_t__ inet_dport; int inet_id; scalar_t__ inet_saddr; scalar_t__ inet_sport; TYPE_5__ cork; int inet_opt; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_13__ {struct inet_timewait_death_row tcp_death_row; } ;
struct TYPE_20__ {TYPE_1__ ipv4; } ;
struct TYPE_12__ {scalar_t__ icsk_ext_hdr_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct rtable*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 TYPE_10__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct inet_timewait_death_row*,struct sock*) ;
 struct inet_sock* FUNC_7 (struct sock*) ;
 struct rtable* FUNC_8 (struct flowi4*,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,struct sock*) ;
 struct rtable* FUNC_9 (struct flowi4*,struct rtable*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct sock*) ;
 int FUNC_10 (struct rtable*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 () ;
 struct ip_options_rcu* FUNC_14 (int ,int ) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (TYPE_8__*,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct sock*,scalar_t__) ;
 int FUNC_18 (struct sock*,scalar_t__) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,int *) ;
 TYPE_8__* FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 scalar_t__ FUNC_23 (struct sock*,int*) ;
 int FUNC_24 (struct sock*,int ) ;
 struct tcp_sock* FUNC_25 (struct sock*) ;

int FUNC_26(struct sock *VAR_12, struct sockaddr *VAR_13, int VAR_14)
{
 struct sockaddr_in *VAR_15 = (struct sockaddr_in *)VAR_13;
 struct inet_sock *VAR_16 = FUNC_7(VAR_12);
 struct tcp_sock *VAR_17 = FUNC_25(VAR_12);
 __be16 VAR_18, VAR_19;
 __be32 VAR_20, VAR_21;
 struct flowi4 *VAR_22;
 struct rtable *VAR_23;
 int VAR_24;
 struct ip_options_rcu *VAR_25;
 struct inet_timewait_death_row *VAR_26 = &FUNC_21(VAR_12)->ipv4.tcp_death_row;

 if (VAR_14 < sizeof(struct sockaddr_in))
  return -VAR_2;

 if (VAR_15->sin_family != VAR_0)
  return -VAR_1;

 VAR_21 = VAR_20 = VAR_15->sin_addr.s_addr;
 VAR_25 = FUNC_14(VAR_16->inet_opt,
          FUNC_12(VAR_12));
 if (VAR_25 && VAR_25->opt.srr) {
  if (!VAR_20)
   return -VAR_2;
  VAR_21 = VAR_25->opt.faddr;
 }

 VAR_18 = VAR_16->inet_sport;
 VAR_19 = VAR_15->sin_port;
 VAR_22 = &VAR_16->cork.fl.u.ip4;
 VAR_23 = FUNC_8(VAR_22, VAR_21, VAR_16->inet_saddr,
         FUNC_3(VAR_12), VAR_12->sk_bound_dev_if,
         VAR_4,
         VAR_18, VAR_19, VAR_12);
 if (FUNC_1(VAR_23)) {
  VAR_24 = FUNC_2(VAR_23);
  if (VAR_24 == -VAR_3)
   FUNC_0(FUNC_21(VAR_12), VAR_5);
  return VAR_24;
 }

 if (VAR_23->rt_flags & (VAR_7 | VAR_6)) {
  FUNC_10(VAR_23);
  return -VAR_3;
 }

 if (!VAR_25 || !VAR_25->opt.srr)
  VAR_20 = VAR_22->daddr;

 if (!VAR_16->inet_saddr)
  VAR_16->inet_saddr = VAR_22->saddr;
 FUNC_18(VAR_12, VAR_16->inet_saddr);

 if (VAR_17->rx_opt.ts_recent_stamp && VAR_16->inet_daddr != VAR_20) {

  VAR_17->rx_opt.ts_recent = 0;
  VAR_17->rx_opt.ts_recent_stamp = 0;
  if (FUNC_11(!VAR_17->repair))
   FUNC_4(VAR_17->write_seq, 0);
 }

 VAR_16->inet_dport = VAR_15->sin_port;
 FUNC_17(VAR_12, VAR_20);

 FUNC_5(VAR_12)->icsk_ext_hdr_len = 0;
 if (VAR_25)
  FUNC_5(VAR_12)->icsk_ext_hdr_len = VAR_25->opt.optlen;

 VAR_17->rx_opt.mss_clamp = VAR_10;






 FUNC_24(VAR_12, VAR_11);
 VAR_24 = FUNC_6(VAR_26, VAR_12);
 if (VAR_24)
  goto failure;

 FUNC_19(VAR_12);

 VAR_23 = FUNC_9(VAR_22, VAR_23, VAR_18, VAR_19,
          VAR_16->inet_sport, VAR_16->inet_dport, VAR_12);
 if (FUNC_1(VAR_23)) {
  VAR_24 = FUNC_2(VAR_23);
  VAR_23 = ((void*)0);
  goto failure;
 }

 VAR_12->sk_gso_type = VAR_8;
 FUNC_20(VAR_12, &VAR_23->dst);
 VAR_23 = ((void*)0);

 if (FUNC_11(!VAR_17->repair)) {
  if (!VAR_17->write_seq)
   FUNC_4(VAR_17->write_seq,
       FUNC_15(VAR_16->inet_saddr,
        VAR_16->inet_daddr,
        VAR_16->inet_sport,
        VAR_15->sin_port));
  VAR_17->tsoffset = FUNC_16(FUNC_21(VAR_12),
       VAR_16->inet_saddr,
       VAR_16->inet_daddr);
 }

 VAR_16->inet_id = FUNC_13();

 if (FUNC_23(VAR_12, &VAR_24))
  return VAR_24;
 if (VAR_24)
  goto failure;

 VAR_24 = FUNC_22(VAR_12);

 if (VAR_24)
  goto failure;

 return 0;

failure:




 FUNC_24(VAR_12, VAR_9);
 FUNC_10(VAR_23);
 VAR_12->sk_route_caps = 0;
 VAR_16->inet_dport = 0;
 return VAR_24;
}
