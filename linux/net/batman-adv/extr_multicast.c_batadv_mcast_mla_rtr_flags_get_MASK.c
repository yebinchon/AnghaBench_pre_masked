
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct batadv_priv*,struct net_device*) ;
 int FUNC_1 (struct batadv_priv*,struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct batadv_priv *VAR_2,
      struct net_device *VAR_3)
{
 u8 VAR_4 = VAR_0 | VAR_1;

 VAR_4 &= FUNC_1(VAR_2, VAR_3);
 VAR_4 &= FUNC_0(VAR_2, VAR_3);

 return VAR_4;
}
