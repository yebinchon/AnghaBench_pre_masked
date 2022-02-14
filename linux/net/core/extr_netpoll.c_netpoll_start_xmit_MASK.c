
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int vlan_proto; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,struct netdev_queue*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct net_device *VAR_2,
         struct netdev_queue *VAR_3)
{
 int VAR_4 = VAR_0;
 netdev_features_t VAR_5;

 VAR_5 = FUNC_2(VAR_1);

 if (FUNC_3(VAR_1) &&
     !FUNC_5(VAR_5, VAR_1->vlan_proto)) {
  VAR_1 = FUNC_0(VAR_1);
  if (FUNC_4(!VAR_1)) {




   goto out;
  }
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, 0);

out:
 return VAR_4;
}
