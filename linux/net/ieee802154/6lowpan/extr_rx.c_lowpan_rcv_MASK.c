
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; struct net_device* dev; } ;
struct packet_type {int dummy; } ;
struct net_device {scalar_t__ type; TYPE_1__* ieee802154_ptr; } ;
struct TYPE_2__ {struct net_device* lowpan_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*) ;
 int * FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5,
        struct packet_type *VAR_6, struct net_device *VAR_7)
{
 struct net_device *VAR_8;

 if (VAR_5->type != VAR_0 ||
     VAR_4->pkt_type == VAR_3 ||
     !FUNC_4(VAR_4))
  goto drop;

 VAR_8 = VAR_5->ieee802154_ptr->lowpan_dev;
 if (!VAR_8 || !FUNC_5(VAR_8))
  goto drop;


 VAR_4 = FUNC_7(VAR_4, VAR_1);
 if (!VAR_4)
  goto out;
 VAR_4->dev = VAR_8;





 if (FUNC_2(*FUNC_6(VAR_4)) ||
     FUNC_3(*FUNC_6(VAR_4))) {
  VAR_4 = FUNC_8(VAR_4, VAR_1);
  if (!VAR_4)
   goto out;
 }

 return FUNC_1(VAR_4);

drop:
 FUNC_0(VAR_4);
out:
 return VAR_2;
}
