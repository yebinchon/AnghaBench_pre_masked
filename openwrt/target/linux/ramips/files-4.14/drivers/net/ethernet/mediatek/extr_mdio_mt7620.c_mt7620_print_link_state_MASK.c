
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_priv {int netdev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;

void FUNC_2(struct fe_priv *VAR_0, int VAR_1, int VAR_2,
        int VAR_3, int VAR_4)
{
 if (VAR_2)
  FUNC_1(VAR_0->netdev, "port %d link up (%sMbps/%s duplex)\n",
       VAR_1, FUNC_0(VAR_3),
       (VAR_4) ? "Full" : "Half");
 else
  FUNC_1(VAR_0->netdev, "port %d link down\n", VAR_1);
}
