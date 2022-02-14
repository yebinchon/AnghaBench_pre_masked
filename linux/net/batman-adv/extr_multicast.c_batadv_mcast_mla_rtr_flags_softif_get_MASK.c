
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct batadv_priv {struct net_device* soft_iface; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static u8 FUNC_4(struct batadv_priv *VAR_1,
      struct net_device *VAR_2)
{
 struct net_device *VAR_3 = VAR_2 ? VAR_2 : VAR_1->soft_iface;
 u8 VAR_4 = VAR_0;

 FUNC_2();

 VAR_4 |= FUNC_0(VAR_3);
 VAR_4 |= FUNC_1(VAR_3);

 FUNC_3();

 return VAR_4;
}
