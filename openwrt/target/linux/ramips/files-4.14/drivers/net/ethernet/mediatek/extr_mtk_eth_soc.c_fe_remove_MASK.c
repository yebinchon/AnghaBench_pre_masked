
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct fe_priv {int pending_work; int hw_stats; int rx_napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct fe_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct fe_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(&VAR_2->rx_napi);
 FUNC_2(VAR_2->hw_stats);

 FUNC_0(&VAR_2->pending_work);

 FUNC_7(VAR_1);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0, ((void*)0));

 return 0;
}
