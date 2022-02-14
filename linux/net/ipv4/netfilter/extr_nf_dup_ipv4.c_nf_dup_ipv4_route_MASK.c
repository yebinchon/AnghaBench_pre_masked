
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; int dev; } ;
struct TYPE_2__ {int dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net {int dummy; } ;
struct iphdr {int tos; } ;
struct in_addr {int s_addr; } ;
struct flowi4 {int flowi4_oif; int flowi4_flags; int flowi4_scope; int flowi4_tos; int daddr; } ;
typedef int fl4 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 struct rtable* FUNC_4 (struct net*,struct flowi4*) ;
 int FUNC_5 (struct flowi4*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_8(struct net *VAR_3, struct sk_buff *VAR_4,
         const struct in_addr *VAR_5, int VAR_6)
{
 const struct iphdr *VAR_7 = FUNC_3(VAR_4);
 struct rtable *VAR_8;
 struct flowi4 VAR_9;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_6 != -1)
  VAR_9 = VAR_6;

 VAR_9 = VAR_5->s_addr;
 VAR_9 = FUNC_1(VAR_7->tos);
 VAR_9 = VAR_2;
 VAR_9 = VAR_1;
 VAR_8 = FUNC_4(VAR_3, &VAR_9);
 if (FUNC_0(VAR_8))
  return 0;

 FUNC_6(VAR_4);
 FUNC_7(VAR_4, &VAR_8->dst);
 VAR_4->dev = VAR_8->dst.dev;
 VAR_4->protocol = FUNC_2(VAR_0);

 return 1;
}
