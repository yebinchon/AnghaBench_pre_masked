
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct dn_skb_cb {int hops; int rt_flags; } ;
struct TYPE_4__ {struct net_device* dev; } ;
struct dn_route {int rt_flags; TYPE_2__ dst; } ;
struct dn_dev {scalar_t__ use_long; } ;
struct TYPE_3__ {int dn_ptr; } ;


 int VAR_0 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int *,int *,struct sk_buff*,struct net_device*,struct net_device*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct sk_buff*) ;
 struct dn_dev* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,scalar_t__) ;
 struct dst_entry* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_8)
{
 struct dn_skb_cb *VAR_9 = FUNC_0(VAR_8);
 struct dst_entry *VAR_10 = FUNC_6(VAR_8);
 struct dn_dev *VAR_11 = FUNC_4(VAR_10->dev->dn_ptr);
 struct dn_route *VAR_12;
 int VAR_13;
 struct net_device *VAR_14 = VAR_8->dev;

 if (VAR_8->pkt_type != VAR_4)
  goto drop;


 VAR_12 = (struct dn_route *)FUNC_6(VAR_8);
 VAR_13 = VAR_11->use_long ? 21 : 6;
 if (FUNC_5(VAR_8, FUNC_1(VAR_12->dst.dev)+VAR_13))
  goto drop;




 if (++VAR_9->hops > 30)
  goto drop;

 VAR_8->dev = VAR_12->dst.dev;






 VAR_9->rt_flags &= ~VAR_0;
 if (VAR_12->rt_flags & VAR_5)
  VAR_9->rt_flags |= VAR_0;

 return FUNC_2(VAR_2, VAR_3,
         &VAR_7, ((void*)0), VAR_8, VAR_14, VAR_8->dev,
         VAR_6);

drop:
 FUNC_3(VAR_8);
 return VAR_1;
}
