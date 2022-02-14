
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 int VAR_3 = 0;
 struct sk_buff *VAR_4 = FUNC_4(VAR_1, VAR_0);

 if (VAR_4) {
  FUNC_0(VAR_2);

  VAR_4->dev = VAR_2;
  VAR_3 = FUNC_2(VAR_4);
  if (FUNC_5(VAR_3 > 0))
   VAR_3 = FUNC_3(VAR_3);

  FUNC_1(VAR_2);
 }

 return VAR_3;
}
