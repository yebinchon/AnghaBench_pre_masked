
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dev; } ;
struct net {scalar_t__ loopback_dev; } ;
struct inet6_dev {int dummy; } ;
struct dst_entry {scalar_t__ dev; } ;
struct TYPE_4__ {int iif; } ;
struct TYPE_3__ {int daddr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int) ;
 int VAR_1 ;


 int VAR_2 ;
 struct inet6_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct net*,int ) ;
 struct net* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 struct inet6_dev* FUNC_6 (struct dst_entry*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;
 struct dst_entry* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_3, u8 VAR_4, int VAR_5)
{
 struct dst_entry *VAR_6 = FUNC_11(VAR_3);
 struct net *VAR_7 = FUNC_4(VAR_6->dev);
 struct inet6_dev *VAR_8;
 int VAR_9;

 if (FUNC_10(VAR_3->dev) &&
     VAR_6->dev == VAR_7->loopback_dev)
  VAR_8 = FUNC_2(FUNC_3(VAR_7, FUNC_0(VAR_3)->iif));
 else
  VAR_8 = FUNC_6(VAR_6);

 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_7(&FUNC_8(VAR_3)->daddr);
  if (VAR_9 == VAR_2) {
   FUNC_1(VAR_7, VAR_8, VAR_1);
   break;
  }

 case 128:
  FUNC_1(VAR_7, VAR_8, VAR_5);
  break;
 }


 if (FUNC_10(VAR_3->dev))
  FUNC_12(VAR_3);

 FUNC_5(VAR_3, VAR_0, VAR_4, 0);
 FUNC_9(VAR_3);
 return 0;
}
