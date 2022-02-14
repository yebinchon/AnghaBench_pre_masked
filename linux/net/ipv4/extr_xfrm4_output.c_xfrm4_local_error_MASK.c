
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; scalar_t__ encapsulation; } ;
struct iphdr {int daddr; } ;
struct TYPE_2__ {int inet_dport; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

void FUNC_4(struct sk_buff *VAR_1, u32 VAR_2)
{
 struct iphdr *VAR_3;

 VAR_3 = VAR_1->encapsulation ? FUNC_1(VAR_1) : FUNC_2(VAR_1);
 FUNC_3(VAR_1->sk, VAR_0, VAR_3->daddr,
         FUNC_0(VAR_1->sk)->inet_dport, VAR_2);
}
