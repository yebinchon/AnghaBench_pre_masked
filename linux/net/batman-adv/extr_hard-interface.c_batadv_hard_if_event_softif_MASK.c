
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct batadv_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2,
           struct net_device *VAR_3)
{
 struct batadv_priv *VAR_4;

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_3);
  VAR_4 = FUNC_3(VAR_3);
  FUNC_1(VAR_4, VAR_0);
  break;
 case 129:
  FUNC_0(VAR_3);
  break;
 }

 return VAR_1;
}
