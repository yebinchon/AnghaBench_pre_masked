
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; int protocol; } ;
struct net_device {int dummy; } ;
struct neighbour {int (* output ) (struct neighbour*,struct sk_buff*) ;} ;
struct neigh_table {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct neighbour*) ;
 struct neighbour* FUNC_2 (struct net_device*,int ) ;
 struct neighbour* FUNC_3 (struct neigh_table*,void const*,struct net_device*,int) ;
 struct neighbour* FUNC_4 (struct neigh_table*,void const*,struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int ,void const*,int *,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;
 struct neigh_table** VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct neighbour*,struct sk_buff*) ;

int FUNC_13(int VAR_5, struct net_device *VAR_6,
        const void *VAR_7, struct sk_buff *VAR_8)
{
 int VAR_9 = -VAR_0;
 if (FUNC_8(VAR_5 < VAR_3)) {
  struct neigh_table *VAR_10;
  struct neighbour *VAR_11;

  VAR_10 = VAR_4[VAR_5];
  if (!VAR_10)
   goto out;
  FUNC_10();
  if (VAR_5 == VAR_1) {
   u32 VAR_12 = *((u32 *)VAR_7);

   VAR_11 = FUNC_2(VAR_6, VAR_12);
  } else {
   VAR_11 = FUNC_4(VAR_10, VAR_7, VAR_6);
  }
  if (!VAR_11)
   VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_6, 0);
  VAR_9 = FUNC_1(VAR_11);
  if (FUNC_0(VAR_11)) {
   FUNC_11();
   goto out_kfree_skb;
  }
  VAR_9 = VAR_11->output(VAR_11, VAR_8);
  FUNC_11();
 }
 else if (VAR_5 == VAR_2) {
  VAR_9 = FUNC_5(VAR_8, VAR_6, FUNC_9(VAR_8->protocol),
          VAR_7, ((void*)0), VAR_8->len);
  if (VAR_9 < 0)
   goto out_kfree_skb;
  VAR_9 = FUNC_6(VAR_8);
 }
out:
 return VAR_9;
out_kfree_skb:
 FUNC_7(VAR_8);
 goto out;
}
