
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,struct netdev_queue*,int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (struct sk_buff*,int,struct net_device*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct net_device *VAR_1,
      struct netdev_queue *VAR_2, bool VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_0, VAR_1);

 VAR_4 = VAR_0->len;
 FUNC_3(VAR_0, VAR_1);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_5, VAR_1, VAR_4);

 return VAR_5;
}
