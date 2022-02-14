
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int mark; TYPE_1__* dev; scalar_t__ data; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int protocol; int tos; } ;
struct flowi4 {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct flowi4*,struct sock*,struct iphdr const*,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct rtable*,struct sk_buff*,struct flowi4*,int) ;
 struct net* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct dst_entry *VAR_0, struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct rtable *VAR_3;
 struct flowi4 VAR_4;
 const struct iphdr *VAR_5 = (const struct iphdr *) VAR_2->data;
 struct net *VAR_6 = FUNC_3(VAR_2->dev);
 int VAR_7 = VAR_2->dev->ifindex;
 u8 VAR_8 = FUNC_0(VAR_5->tos);
 u8 VAR_9 = VAR_5->protocol;
 u32 VAR_10 = VAR_2->mark;

 VAR_3 = (struct rtable *) VAR_0;

 FUNC_1(VAR_6, &VAR_4, VAR_1, VAR_5, VAR_7, VAR_8, VAR_9, VAR_10, 0);
 FUNC_2(VAR_3, VAR_2, &VAR_4, 1);
}
