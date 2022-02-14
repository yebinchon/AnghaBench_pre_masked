
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; int sk_v6_rcv_saddr; } ;
struct ipv6_txoptions {int dummy; } ;
struct ipv6_pinfo {int flow_label; int saddr; int opt; scalar_t__ sndflow; } ;
struct ip6_flowlabel {struct ipv6_txoptions* opt; } ;
struct inet_sock {int inet_rcv_saddr; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int saddr; } ;
struct dst_entry {struct ipv6_txoptions* opt; } ;
struct TYPE_2__ {int (* rehash ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ip6_flowlabel*) ;
 int VAR_2 ;
 int FUNC_1 (struct ip6_flowlabel*) ;
 struct ip6_flowlabel* FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct ip6_flowlabel*) ;
 struct in6_addr* FUNC_4 (struct flowi6*,struct ipv6_txoptions*,struct in6_addr*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct flowi6*,struct sock*) ;
 struct ip6_flowlabel* FUNC_8 (struct sock*,struct flowi6*,struct in6_addr*) ;
 int FUNC_9 (struct sock*,struct ip6_flowlabel*,struct flowi6*) ;
 scalar_t__ FUNC_10 (int *) ;
 struct ipv6_txoptions* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sock*) ;

int FUNC_15(struct sock *VAR_3, bool VAR_4)
{
 struct ip6_flowlabel *VAR_5 = ((void*)0);
 struct in6_addr *VAR_6, VAR_7;
 struct ipv6_txoptions *VAR_8;
 struct dst_entry *VAR_9;
 struct inet_sock *VAR_10 = FUNC_6(VAR_3);
 struct ipv6_pinfo *VAR_11 = FUNC_5(VAR_3);
 struct flowi6 VAR_12;
 int VAR_13 = 0;

 if (VAR_11->sndflow && (VAR_11->flow_label & VAR_1)) {
  VAR_5 = FUNC_2(VAR_3, VAR_11->flow_label);
  if (FUNC_0(VAR_5))
   return -VAR_0;
 }
 FUNC_7(&VAR_12, VAR_3);

 FUNC_12();
 VAR_8 = VAR_5 ? VAR_5->opt : FUNC_11(VAR_11->opt);
 VAR_6 = FUNC_4(&VAR_12, VAR_8, &VAR_7);
 FUNC_13();

 VAR_9 = FUNC_8(VAR_3, &VAR_12, VAR_6);
 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_1(VAR_9);
  goto out;
 }

 if (VAR_4) {
  if (FUNC_10(&VAR_11->saddr))
   VAR_11->saddr = VAR_12;

  if (FUNC_10(&VAR_3->sk_v6_rcv_saddr)) {
   VAR_3->sk_v6_rcv_saddr = VAR_12;
   VAR_10->inet_rcv_saddr = VAR_2;
   if (VAR_3->sk_prot->rehash)
    VAR_3->sk_prot->rehash(VAR_3);
  }
 }

 FUNC_9(VAR_3, VAR_9, &VAR_12);

out:
 FUNC_3(VAR_5);
 return VAR_13;
}
