
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct ipq {TYPE_1__ q; } ;
struct TYPE_4__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 struct ipq* FUNC_1 (struct net*,int ,int ,int) ;
 int FUNC_2 (struct ipq*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ipq*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct net_device*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct net *VAR_3, struct sk_buff *VAR_4, u32 VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev ? : FUNC_7(VAR_4)->dev;
 int VAR_7 = FUNC_6(VAR_6);
 struct ipq *VAR_8;

 FUNC_0(VAR_3, VAR_2);
 FUNC_8(VAR_4);


 VAR_8 = FUNC_1(VAR_3, FUNC_3(VAR_4), VAR_5, VAR_7);
 if (VAR_8) {
  int VAR_9;

  FUNC_9(&VAR_8->q.lock);

  VAR_9 = FUNC_2(VAR_8, VAR_4);

  FUNC_10(&VAR_8->q.lock);
  FUNC_4(VAR_8);
  return VAR_9;
 }

 FUNC_0(VAR_3, VAR_1);
 FUNC_5(VAR_4);
 return -VAR_0;
}
