
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_vlan_data {int crc; int vid; } ;
struct batadv_tvlv_tt_data {int flags; int num_vlan; int ttvn; } ;
struct batadv_tt_req_node {int list; } ;
struct TYPE_4__ {int req_list_lock; } ;
struct batadv_priv {TYPE_2__ tt; } ;
struct batadv_orig_node {int orig; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,int ,float) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;
 struct batadv_tt_req_node* FUNC_4 (struct batadv_priv*,struct batadv_orig_node*) ;
 int FUNC_5 (struct batadv_tt_req_node*) ;
 int FUNC_6 (struct batadv_priv*,int ,int ,int ,int,struct batadv_tvlv_tt_data*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct batadv_tvlv_tt_data*) ;
 struct batadv_tvlv_tt_data* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static bool FUNC_14(struct batadv_priv *VAR_6,
       struct batadv_orig_node *VAR_7,
       u8 VAR_8,
       struct batadv_tvlv_tt_vlan_data *VAR_9,
       u16 VAR_10, bool VAR_11)
{
 struct batadv_tvlv_tt_data *VAR_12 = ((void*)0);
 struct batadv_tt_req_node *VAR_13 = ((void*)0);
 struct batadv_tvlv_tt_vlan_data *VAR_14;
 struct batadv_hard_iface *VAR_15;
 bool VAR_16 = 0;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_3(VAR_6);
 if (!VAR_15)
  goto out;




 VAR_13 = FUNC_4(VAR_6, VAR_7);
 if (!VAR_13)
  goto out;

 VAR_18 = sizeof(*VAR_12) + sizeof(*VAR_14) * VAR_10;
 VAR_12 = FUNC_11(VAR_18, VAR_5);
 if (!VAR_12)
  goto out;

 VAR_12->flags = VAR_3;
 VAR_12->ttvn = VAR_8;
 VAR_12->num_vlan = FUNC_9(VAR_10);




 VAR_14 = (struct batadv_tvlv_tt_vlan_data *)(VAR_12 + 1);
 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  VAR_14->vid = VAR_9->vid;
  VAR_14->crc = VAR_9->crc;

  VAR_14++;
  VAR_9++;
 }

 if (VAR_11)
  VAR_12->flags |= VAR_2;

 FUNC_0(VAR_1, VAR_6, "Sending TT_REQUEST to %pM [%c]\n",
     VAR_7->orig, VAR_11 ? 'F' : '.');

 FUNC_2(VAR_6, VAR_0);
 FUNC_6(VAR_6, VAR_15->net_dev->dev_addr,
     VAR_7->orig, VAR_4, 1,
     VAR_12, VAR_18);
 VAR_16 = 1;

out:
 if (VAR_15)
  FUNC_1(VAR_15);

 if (VAR_16 && VAR_13) {
  FUNC_12(&VAR_6->tt.req_list_lock);
  if (!FUNC_8(&VAR_13->list)) {
   FUNC_7(&VAR_13->list);
   FUNC_5(VAR_13);
  }
  FUNC_13(&VAR_6->tt.req_list_lock);
 }

 if (VAR_13)
  FUNC_5(VAR_13);

 FUNC_10(VAR_12);
 return VAR_16;
}
