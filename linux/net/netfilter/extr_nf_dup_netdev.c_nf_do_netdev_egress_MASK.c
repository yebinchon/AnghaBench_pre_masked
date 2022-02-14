
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; int mac_len; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0, VAR_0->mac_len);

 VAR_0->dev = VAR_1;
 FUNC_0(VAR_0);
}
