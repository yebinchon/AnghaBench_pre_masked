
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int protocol; } ;
struct net_device {TYPE_1__* header_ops; } ;
struct TYPE_4__ {int hh_len; } ;
struct neighbour {int ha; int ha_lock; TYPE_2__ hh; struct net_device* dev; } ;
struct TYPE_3__ {scalar_t__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct neighbour*,struct sk_buff*) ;
 int FUNC_5 (struct neighbour*) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct neighbour *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_4(VAR_1, VAR_2)) {
  int VAR_4;
  struct net_device *VAR_5 = VAR_1->dev;
  unsigned int VAR_6;

  if (VAR_5->header_ops->cache && !VAR_1->hh.hh_len)
   FUNC_5(VAR_1);

  do {
   FUNC_0(VAR_2, FUNC_9(VAR_2));
   VAR_6 = FUNC_7(&VAR_1->ha_lock);
   VAR_4 = FUNC_1(VAR_2, VAR_5, FUNC_6(VAR_2->protocol),
           VAR_1->ha, ((void*)0), VAR_2->len);
  } while (FUNC_8(&VAR_1->ha_lock, VAR_6));

  if (VAR_4 >= 0)
   VAR_3 = FUNC_2(VAR_2);
  else
   goto out_kfree_skb;
 }
out:
 return VAR_3;
out_kfree_skb:
 VAR_3 = -VAR_0;
 FUNC_3(VAR_2);
 goto out;
}
