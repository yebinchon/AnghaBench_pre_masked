
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct batadv_priv {int dummy; } ;


 struct net_device* FUNC_0 (struct kobject*) ;
 struct batadv_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct batadv_priv *FUNC_2(struct kobject *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
