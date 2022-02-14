
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct j1939_priv {struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,int ,int ,int ,struct j1939_priv*,char*,int *) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct j1939_priv*) ;
 int FUNC_3 (struct j1939_priv*) ;

__attribute__((used)) static int FUNC_4(struct j1939_priv *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->ndev;
 int VAR_5;

 FUNC_2(VAR_3);
 VAR_5 = FUNC_0(FUNC_1(VAR_4), VAR_4, VAR_0, VAR_1,
         VAR_2, VAR_3, "j1939", ((void*)0));
 if (VAR_5 < 0) {
  FUNC_3(VAR_3);
  return VAR_5;
 }

 return 0;
}
