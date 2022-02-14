
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err_soft; int sk_priority; int sk_mark; int sk_v6_daddr; scalar_t__ sk_route_caps; } ;
struct sk_buff {int dummy; } ;
struct ipv6_pinfo {int tclass; int opt; } ;
struct flowi6 {int daddr; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct sock*,struct flowi6*) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,struct flowi6*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*,struct dst_entry*) ;

int FUNC_10(struct sock *VAR_0, struct sk_buff *VAR_1, struct flowi *VAR_2)
{
 struct ipv6_pinfo *VAR_3 = FUNC_3(VAR_0);
 struct flowi6 VAR_4;
 struct dst_entry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_0, &VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_0->sk_err_soft = -FUNC_1(VAR_5);
  VAR_0->sk_route_caps = 0;
  FUNC_5(VAR_1);
  return FUNC_1(VAR_5);
 }

 FUNC_7();
 FUNC_9(VAR_1, VAR_5);


 VAR_4 = VAR_0->sk_v6_daddr;

 VAR_6 = FUNC_4(VAR_0, VAR_1, &VAR_4, VAR_0->sk_mark, FUNC_6(VAR_3->opt),
         VAR_3->tclass, VAR_0->sk_priority);
 FUNC_8();
 return VAR_6;
}
