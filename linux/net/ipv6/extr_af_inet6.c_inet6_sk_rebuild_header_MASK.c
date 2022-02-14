
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err_soft; scalar_t__ sk_route_caps; int sk_uid; int sk_mark; int sk_bound_dev_if; int sk_v6_daddr; int sk_protocol; } ;
struct ipv6_pinfo {int opt; int flow_label; int saddr; int dst_cookie; } ;
struct inet_sock {int inet_sport; int inet_dport; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_uid; int fl6_sport; int fl6_dport; int flowi6_mark; int flowi6_oif; int flowlabel; int saddr; int daddr; int flowi6_proto; } ;
struct dst_entry {int dummy; } ;
typedef int fl6 ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
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

int FUNC_14(struct sock *VAR_0)
{
 struct ipv6_pinfo *VAR_1 = FUNC_5(VAR_0);
 struct dst_entry *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1->dst_cookie);

 if (!VAR_2) {
  struct inet_sock *VAR_3 = FUNC_6(VAR_0);
  struct in6_addr *VAR_4, VAR_5;
  struct flowi6 VAR_6;

  FUNC_9(&VAR_6, 0, sizeof(VAR_6));
  VAR_6 = VAR_0->sk_protocol;
  VAR_6 = VAR_0->sk_v6_daddr;
  VAR_6 = VAR_1->saddr;
  VAR_6 = VAR_1->flow_label;
  VAR_6 = VAR_0->sk_bound_dev_if;
  VAR_6 = VAR_0->sk_mark;
  VAR_6 = VAR_3->inet_dport;
  VAR_6 = VAR_3->inet_sport;
  VAR_6 = VAR_0->sk_uid;
  FUNC_13(VAR_0, FUNC_4(&VAR_6));

  FUNC_11();
  VAR_4 = FUNC_3(&VAR_6, FUNC_10(VAR_1->opt),
      &VAR_5);
  FUNC_12();

  VAR_2 = FUNC_7(VAR_0, &VAR_6, VAR_4);
  if (FUNC_0(VAR_2)) {
   VAR_0->sk_route_caps = 0;
   VAR_0->sk_err_soft = -FUNC_1(VAR_2);
   return FUNC_1(VAR_2);
  }

  FUNC_8(VAR_0, VAR_2, ((void*)0), ((void*)0));
 }

 return 0;
}
