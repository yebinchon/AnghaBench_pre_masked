
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct batadv_priv {int * debug_dir; } ;


 int FUNC_0 (struct batadv_priv*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct net* FUNC_2 (struct net_device*) ;
 struct net VAR_1 ;
 struct batadv_priv* FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_2)
{
 struct batadv_priv *VAR_3 = FUNC_3(VAR_2);
 struct net *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4 != &VAR_1)
  return;

 FUNC_0(VAR_3);

 if (VAR_0) {
  FUNC_1(VAR_3->debug_dir);
  VAR_3->debug_dir = ((void*)0);
 }
}
