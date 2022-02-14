
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mark; TYPE_1__* dev; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {int dummy; } ;
struct iphdr {int tos; int saddr; int daddr; } ;
struct flowi4 {int flowi4_mark; int flowi4_iif; int flowi4_oif; int flowi4_tos; int saddr; int daddr; } ;
struct TYPE_2__ {int ifindex; } ;


 struct mr_table* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net*,struct flowi4*,struct mr_table**) ;
 int FUNC_4 (struct rtable*) ;
 struct rtable* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct mr_table *FUNC_6(struct net *VAR_1, struct sk_buff *VAR_2)
{
 struct rtable *VAR_3 = FUNC_5(VAR_2);
 struct iphdr *VAR_4 = FUNC_2(VAR_2);
 struct flowi4 VAR_5 = {
  .daddr = VAR_4->daddr,
  .saddr = VAR_4->saddr,
  .flowi4_tos = FUNC_1(VAR_4->tos),
  .flowi4_oif = (FUNC_4(VAR_3) ?
          VAR_2->dev->ifindex : 0),
  .flowi4_iif = (FUNC_4(VAR_3) ?
          VAR_0 :
          VAR_2->dev->ifindex),
  .flowi4_mark = VAR_2->mark,
 };
 struct mr_table *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_1, &VAR_5, &VAR_6);
 if (VAR_7)
  return FUNC_0(VAR_7);
 return VAR_6;
}
