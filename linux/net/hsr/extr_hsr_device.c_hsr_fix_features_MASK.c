
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hsr_priv {int dummy; } ;
typedef int netdev_features_t ;


 int FUNC_0 (struct hsr_priv*,int ) ;
 struct hsr_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_0,
       netdev_features_t VAR_1)
{
 struct hsr_priv *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
