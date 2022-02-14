
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

int FUNC_2(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) ?: FUNC_1(VAR_1);
}
