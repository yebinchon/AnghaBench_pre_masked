
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int tvlv_roam ;
struct batadv_tvlv_roam_adv {int vid; int client; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int orig; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,int ,int *,int ) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (struct batadv_priv*,int *) ;
 int FUNC_6 (struct batadv_priv*,int ,int ,int ,int,struct batadv_tvlv_roam_adv*,int) ;
 int FUNC_7 (unsigned short) ;
 int FUNC_8 (int ,int *,int) ;

__attribute__((used)) static void FUNC_9(struct batadv_priv *VAR_3, u8 *VAR_4,
     unsigned short VAR_5,
     struct batadv_orig_node *VAR_6)
{
 struct batadv_hard_iface *VAR_7;
 struct batadv_tvlv_roam_adv VAR_8;

 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  goto out;




 if (!FUNC_5(VAR_3, VAR_4))
  goto out;

 FUNC_0(VAR_1, VAR_3,
     "Sending ROAMING_ADV to %pM (client %pM, vid: %d)\n",
     VAR_6->orig, VAR_4, FUNC_4(VAR_5));

 FUNC_2(VAR_3, VAR_0);

 FUNC_8(VAR_8.client, VAR_4, sizeof(VAR_8.client));
 VAR_8.vid = FUNC_7(VAR_5);

 FUNC_6(VAR_3, VAR_7->net_dev->dev_addr,
     VAR_6->orig, VAR_2, 1,
     &VAR_8, sizeof(VAR_8));

out:
 if (VAR_7)
  FUNC_1(VAR_7);
}
