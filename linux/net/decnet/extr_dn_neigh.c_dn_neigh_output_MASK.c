
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int protocol; } ;
struct net_device {int dummy; } ;
struct neighbour {int ha; int ha_lock; struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct dn_route {int rt_local_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ,int ,char*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 struct dst_entry* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct neighbour *VAR_2, struct sk_buff *VAR_3)
{
 struct dst_entry *VAR_4 = FUNC_7(VAR_3);
 struct dn_route *VAR_5 = (struct dn_route *)VAR_4;
 struct net_device *VAR_6 = VAR_2->dev;
 char VAR_7[VAR_1];
 unsigned int VAR_8;
 int VAR_9;

 FUNC_2(VAR_7, VAR_5->rt_local_src);
 do {
  VAR_8 = FUNC_5(&VAR_2->ha_lock);
  VAR_9 = FUNC_0(VAR_3, VAR_6, FUNC_4(VAR_3->protocol),
          VAR_2->ha, VAR_7, VAR_3->len);
 } while (FUNC_6(&VAR_2->ha_lock, VAR_8));

 if (VAR_9 >= 0)
  VAR_9 = FUNC_1(VAR_3);
 else {
  FUNC_3(VAR_3);
  VAR_9 = -VAR_0;
 }
 return VAR_9;
}
