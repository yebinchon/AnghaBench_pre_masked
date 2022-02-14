
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_uid; int sk_mark; int sk_bound_dev_if; int sk_v6_daddr; int sk_protocol; } ;
struct TYPE_2__ {int ipi6_ifindex; } ;
struct ipv6_pinfo {int mcast_oif; TYPE_1__ sticky_pktinfo; int flow_label; int saddr; } ;
struct inet_sock {int inet_sport; int inet_dport; } ;
struct flowi6 {int flowi6_oif; int daddr; int flowi6_uid; int flowlabel; int fl6_sport; int fl6_dport; int flowi6_mark; int saddr; int flowi6_proto; } ;


 int FUNC_0 (struct flowi6*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct flowi6*,int ,int) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct flowi6 *VAR_0, struct sock *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_2(VAR_1);
 struct ipv6_pinfo *VAR_3 = FUNC_1(VAR_1);

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->flowi6_proto = VAR_1->sk_protocol;
 VAR_0->daddr = VAR_1->sk_v6_daddr;
 VAR_0->saddr = VAR_3->saddr;
 VAR_0->flowi6_oif = VAR_1->sk_bound_dev_if;
 VAR_0->flowi6_mark = VAR_1->sk_mark;
 VAR_0->fl6_dport = VAR_2->inet_dport;
 VAR_0->fl6_sport = VAR_2->inet_sport;
 VAR_0->flowlabel = VAR_3->flow_label;
 VAR_0->flowi6_uid = VAR_1->sk_uid;

 if (!VAR_0->flowi6_oif)
  VAR_0->flowi6_oif = VAR_3->sticky_pktinfo.ipi6_ifindex;

 if (!VAR_0->flowi6_oif && FUNC_3(&VAR_0->daddr))
  VAR_0->flowi6_oif = VAR_3->mcast_oif;

 FUNC_5(VAR_1, FUNC_0(VAR_0));
}
