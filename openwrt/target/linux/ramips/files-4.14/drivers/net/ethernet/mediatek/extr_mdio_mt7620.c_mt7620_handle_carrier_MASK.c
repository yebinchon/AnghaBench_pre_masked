
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_priv {int netdev; int phy; } ;


 scalar_t__ FUNC_0 (struct fe_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct fe_priv *VAR_0)
{
 if (!VAR_0->phy)
  return;

 if (FUNC_0(VAR_0))
  FUNC_2(VAR_0->netdev);
 else
  FUNC_1(VAR_0->netdev);
}
