
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct j1939_priv {struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,int ,int ,int ,struct j1939_priv*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct j1939_priv*) ;

__attribute__((used)) static void FUNC_3(struct j1939_priv *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->ndev;

 FUNC_0(FUNC_1(VAR_4), VAR_4, VAR_0, VAR_1,
     VAR_2, VAR_3);

 FUNC_2(VAR_3);
}
