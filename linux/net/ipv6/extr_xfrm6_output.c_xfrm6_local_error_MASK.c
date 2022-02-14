
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ encapsulation; struct sock* sk; } ;
struct ipv6hdr {int daddr; } ;
struct flowi6 {int daddr; int fl6_dport; } ;
struct TYPE_2__ {int inet_dport; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,int ,struct flowi6*,int ) ;

void FUNC_4(struct sk_buff *VAR_1, u32 VAR_2)
{
 struct flowi6 VAR_3;
 const struct ipv6hdr *VAR_4;
 struct sock *VAR_5 = VAR_1->sk;

 VAR_4 = VAR_1->encapsulation ? FUNC_1(VAR_1) : FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_5)->inet_dport;
 VAR_3 = VAR_4->daddr;

 FUNC_3(VAR_5, VAR_0, &VAR_3, VAR_2);
}
