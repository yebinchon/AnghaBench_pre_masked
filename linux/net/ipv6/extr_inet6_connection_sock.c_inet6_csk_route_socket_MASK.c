
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_uid; int sk_mark; int sk_bound_dev_if; int sk_v6_daddr; int sk_protocol; } ;
struct ipv6_pinfo {int dst_cookie; int opt; int flow_label; int saddr; } ;
struct inet_sock {int inet_dport; int inet_sport; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_uid; int fl6_dport; int fl6_sport; int flowi6_mark; int flowi6_oif; int flowlabel; int saddr; int daddr; int flowi6_proto; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct sock*,int ) ;
 struct in6_addr* FUNC_3 (struct flowi6*,int ,struct in6_addr*) ;
 int FUNC_4 (struct flowi6*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 struct dst_entry* FUNC_7 (struct sock*,struct flowi6*,struct in6_addr*) ;
 int FUNC_8 (struct sock*,struct dst_entry*,int *,int *) ;
 int FUNC_9 (struct flowi6*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct sock*,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_14(struct sock *VAR_0,
      struct flowi6 *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_6(VAR_0);
 struct ipv6_pinfo *VAR_3 = FUNC_5(VAR_0);
 struct in6_addr *VAR_4, VAR_5;
 struct dst_entry *VAR_6;

 FUNC_9(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->flowi6_proto = VAR_0->sk_protocol;
 VAR_1->daddr = VAR_0->sk_v6_daddr;
 VAR_1->saddr = VAR_3->saddr;
 VAR_1->flowlabel = VAR_3->flow_label;
 FUNC_0(VAR_0, VAR_1->flowlabel);
 VAR_1->flowi6_oif = VAR_0->sk_bound_dev_if;
 VAR_1->flowi6_mark = VAR_0->sk_mark;
 VAR_1->fl6_sport = VAR_2->inet_sport;
 VAR_1->fl6_dport = VAR_2->inet_dport;
 VAR_1->flowi6_uid = VAR_0->sk_uid;
 FUNC_13(VAR_0, FUNC_4(VAR_1));

 FUNC_11();
 VAR_4 = FUNC_3(VAR_1, FUNC_10(VAR_3->opt), &VAR_5);
 FUNC_12();

 VAR_6 = FUNC_2(VAR_0, VAR_3->dst_cookie);
 if (!VAR_6) {
  VAR_6 = FUNC_7(VAR_0, VAR_1, VAR_4);

  if (!FUNC_1(VAR_6))
   FUNC_8(VAR_0, VAR_6, ((void*)0), ((void*)0));
 }
 return VAR_6;
}
