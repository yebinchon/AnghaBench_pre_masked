
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct net_device*,struct netdev_queue*,int) ;
 int FUNC_1 (struct net_device*,struct netdev_queue*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct netdev_queue* FUNC_4 (struct net_device*,struct sk_buff*,int *) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,struct netdev_queue*,int ) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct net_device*,struct bpf_prog*,int ) ;

void FUNC_9(struct sk_buff *VAR_1, struct bpf_prog *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;
 struct netdev_queue *VAR_4;
 bool VAR_5 = 1;
 int VAR_6, VAR_7;

 VAR_4 = FUNC_4(VAR_3, VAR_1, ((void*)0));
 VAR_6 = FUNC_7();
 FUNC_0(VAR_3, VAR_4, VAR_6);
 if (!FUNC_6(VAR_4)) {
  VAR_7 = FUNC_5(VAR_1, VAR_3, VAR_4, 0);
  if (FUNC_2(VAR_7))
   VAR_5 = 0;
 }
 FUNC_1(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_8(VAR_3, VAR_2, VAR_0);
  FUNC_3(VAR_1);
 }
}
