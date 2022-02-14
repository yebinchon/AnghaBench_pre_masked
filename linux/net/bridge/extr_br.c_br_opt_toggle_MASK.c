
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int options; } ;
typedef enum net_bridge_opts { ____Placeholder_net_bridge_opts } net_bridge_opts ;


 int FUNC_0 (struct net_bridge*,char*,int,int,int) ;
 int FUNC_1 (struct net_bridge*,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(struct net_bridge *VAR_0, enum net_bridge_opts VAR_1, bool VAR_2)
{
 bool VAR_3 = !!FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0, "toggle option: %d state: %d -> %d\n",
   VAR_1, VAR_3, VAR_2);

 if (VAR_3 == VAR_2)
  return;

 if (VAR_2)
  FUNC_3(VAR_1, &VAR_0->options);
 else
  FUNC_2(VAR_1, &VAR_0->options);
}
