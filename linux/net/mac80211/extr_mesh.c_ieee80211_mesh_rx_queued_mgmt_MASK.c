
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_3__ {int mesh_id_len; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_mgmt {int frame_control; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;




 int FUNC_1 (struct ieee80211_sub_if_data*,int,struct ieee80211_mgmt*,int ,struct ieee80211_rx_status*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,int ,struct ieee80211_rx_status*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_1,
       struct sk_buff *VAR_2)
{
 struct ieee80211_rx_status *VAR_3;
 struct ieee80211_mgmt *VAR_4;
 u16 VAR_5;

 FUNC_5(VAR_1);


 if (!VAR_1->u.mesh.mesh_id_len)
  goto out;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = (struct ieee80211_mgmt *) VAR_2->data;
 VAR_5 = FUNC_4(VAR_4->frame_control) & VAR_0;

 switch (VAR_5) {
 case 128:
 case 130:
  FUNC_1(VAR_1, VAR_5, VAR_4, VAR_2->len,
         VAR_3);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_4, VAR_2->len);
  break;
 case 131:
  FUNC_2(VAR_1, VAR_4, VAR_2->len, VAR_3);
  break;
 }
out:
 FUNC_6(VAR_1);
}
