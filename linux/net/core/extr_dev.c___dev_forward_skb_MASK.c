
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;

int FUNC_5(struct net_device *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (FUNC_3(!VAR_3)) {
  VAR_2->protocol = FUNC_2(VAR_2, VAR_1);
  FUNC_4(VAR_2, FUNC_1(VAR_2), VAR_0);
 }

 return VAR_3;
}
