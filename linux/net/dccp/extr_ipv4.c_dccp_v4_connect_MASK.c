
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_route_caps; int sk_bound_dev_if; } ;
struct rtable {int rt_flags; int dst; } ;
struct TYPE_11__ {scalar_t__ faddr; scalar_t__ optlen; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_5__ opt; } ;
struct flowi4 {scalar_t__ daddr; scalar_t__ saddr; } ;
struct TYPE_8__ {struct flowi4 ip4; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ fl; } ;
struct inet_sock {scalar_t__ inet_saddr; scalar_t__ inet_dport; int inet_id; scalar_t__ inet_sport; int inet_daddr; TYPE_4__ cork; int inet_opt; } ;
struct dccp_sock {int dccps_iss; int dccps_role; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_12__ {scalar_t__ icsk_ext_hdr_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct rtable*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int VAR_10 ;
 int FUNC_4 (struct sock*,int ) ;
 struct dccp_sock* FUNC_5 (struct sock*) ;
 TYPE_6__* FUNC_6 (struct sock*) ;
 int FUNC_7 (int *,struct sock*) ;
 struct inet_sock* FUNC_8 (struct sock*) ;
 struct rtable* FUNC_9 (struct flowi4*,scalar_t__,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,struct sock*) ;
 struct rtable* FUNC_10 (struct flowi4*,struct rtable*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct sock*) ;
 int FUNC_11 (struct rtable*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 () ;
 struct ip_options_rcu* FUNC_14 (int ,int ) ;
 int FUNC_15 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct sock*,scalar_t__) ;
 int FUNC_17 (struct sock*,scalar_t__) ;
 int FUNC_18 (struct sock*,int *) ;

int FUNC_19(struct sock *VAR_11, struct sockaddr *VAR_12, int VAR_13)
{
 const struct sockaddr_in *VAR_14 = (struct sockaddr_in *)VAR_12;
 struct inet_sock *VAR_15 = FUNC_8(VAR_11);
 struct dccp_sock *VAR_16 = FUNC_5(VAR_11);
 __be16 VAR_17, VAR_18;
 __be32 VAR_19, VAR_20;
 struct flowi4 *VAR_21;
 struct rtable *VAR_22;
 int VAR_23;
 struct ip_options_rcu *VAR_24;

 VAR_16->dccps_role = VAR_3;

 if (VAR_13 < sizeof(struct sockaddr_in))
  return -VAR_5;

 if (VAR_14->sin_family != VAR_0)
  return -VAR_4;

 VAR_20 = VAR_19 = VAR_14->sin_addr.s_addr;

 VAR_24 = FUNC_14(VAR_15->inet_opt,
          FUNC_12(VAR_11));
 if (VAR_24 != ((void*)0) && VAR_24->opt.srr) {
  if (VAR_19 == 0)
   return -VAR_5;
  VAR_20 = VAR_24->opt.faddr;
 }

 VAR_17 = VAR_15->inet_sport;
 VAR_18 = VAR_14->sin_port;
 VAR_21 = &VAR_15->cork.fl.u.ip4;
 VAR_22 = FUNC_9(VAR_21, VAR_20, VAR_15->inet_saddr,
         FUNC_2(VAR_11), VAR_11->sk_bound_dev_if,
         VAR_7,
         VAR_17, VAR_18, VAR_11);
 if (FUNC_0(VAR_22))
  return FUNC_1(VAR_22);

 if (VAR_22->rt_flags & (VAR_9 | VAR_8)) {
  FUNC_11(VAR_22);
  return -VAR_6;
 }

 if (VAR_24 == ((void*)0) || !VAR_24->opt.srr)
  VAR_19 = VAR_21->daddr;

 if (VAR_15->inet_saddr == 0)
  VAR_15->inet_saddr = VAR_21->saddr;
 FUNC_17(VAR_11, VAR_15->inet_saddr);
 VAR_15->inet_dport = VAR_14->sin_port;
 FUNC_16(VAR_11, VAR_19);

 FUNC_6(VAR_11)->icsk_ext_hdr_len = 0;
 if (VAR_24)
  FUNC_6(VAR_11)->icsk_ext_hdr_len = VAR_24->opt.optlen;






 FUNC_4(VAR_11, VAR_2);
 VAR_23 = FUNC_7(&VAR_10, VAR_11);
 if (VAR_23 != 0)
  goto failure;

 VAR_22 = FUNC_10(VAR_21, VAR_22, VAR_17, VAR_18,
          VAR_15->inet_sport, VAR_15->inet_dport, VAR_11);
 if (FUNC_0(VAR_22)) {
  VAR_23 = FUNC_1(VAR_22);
  VAR_22 = ((void*)0);
  goto failure;
 }

 FUNC_18(VAR_11, &VAR_22->dst);

 VAR_16->dccps_iss = FUNC_15(VAR_15->inet_saddr,
          VAR_15->inet_daddr,
          VAR_15->inet_sport,
          VAR_15->inet_dport);
 VAR_15->inet_id = FUNC_13();

 VAR_23 = FUNC_3(VAR_11);
 VAR_22 = ((void*)0);
 if (VAR_23 != 0)
  goto failure;
out:
 return VAR_23;
failure:



 FUNC_4(VAR_11, VAR_1);
 FUNC_11(VAR_22);
 VAR_11->sk_route_caps = 0;
 VAR_15->inet_dport = 0;
 goto out;
}
