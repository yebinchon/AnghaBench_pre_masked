
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int protocol; } ;
struct net_device {int dummy; } ;
struct neighbour {int ha; int ha_lock; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct sk_buff*) ;

int FUNC_8(struct neighbour *VAR_1, struct sk_buff *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;
 unsigned int VAR_4;
 int VAR_5;

 do {
  FUNC_0(VAR_2, FUNC_7(VAR_2));
  VAR_4 = FUNC_5(&VAR_1->ha_lock);
  VAR_5 = FUNC_1(VAR_2, VAR_3, FUNC_4(VAR_2->protocol),
          VAR_1->ha, ((void*)0), VAR_2->len);
 } while (FUNC_6(&VAR_1->ha_lock, VAR_4));

 if (VAR_5 >= 0)
  VAR_5 = FUNC_2(VAR_2);
 else {
  VAR_5 = -VAR_0;
  FUNC_3(VAR_2);
 }
 return VAR_5;
}
