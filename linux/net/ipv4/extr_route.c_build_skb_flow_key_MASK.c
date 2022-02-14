
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int mark; TYPE_1__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int protocol; int tos; } ;
struct flowi4 {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net const*,struct flowi4*,struct sock const*,struct iphdr const*,int,int ,int ,int ,int ) ;
 struct net* FUNC_2 (TYPE_1__*) ;
 struct iphdr* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_4(struct flowi4 *VAR_0, const struct sk_buff *VAR_1,
          const struct sock *VAR_2)
{
 const struct net *VAR_3 = FUNC_2(VAR_1->dev);
 const struct iphdr *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_1->dev->ifindex;
 u8 VAR_6 = FUNC_0(VAR_4->tos);
 u8 VAR_7 = VAR_4->protocol;
 u32 VAR_8 = VAR_1->mark;

 FUNC_1(VAR_3, VAR_0, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0);
}
