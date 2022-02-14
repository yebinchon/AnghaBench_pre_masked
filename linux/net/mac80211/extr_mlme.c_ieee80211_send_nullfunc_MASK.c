
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_if_managed {int flags; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_1__ u; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_hdr_3addr {int frame_control; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 struct sk_buff* FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;

void FUNC_5(struct ieee80211_local *VAR_10,
        struct ieee80211_sub_if_data *VAR_11,
        bool VAR_12)
{
 struct sk_buff *VAR_13;
 struct ieee80211_hdr_3addr *VAR_14;
 struct ieee80211_if_managed *VAR_15 = &VAR_11->u.mgd;


 if (VAR_11->vif.type == VAR_8 &&
     !(VAR_15->flags & VAR_3))
  return;

 VAR_13 = FUNC_3(&VAR_10->hw, &VAR_11->vif,
  !FUNC_2(&VAR_10->hw, VAR_0));
 if (!VAR_13)
  return;

 VAR_14 = (struct ieee80211_hdr_3addr *) VAR_13->data;
 if (VAR_12)
  VAR_14->frame_control |= FUNC_1(VAR_1);

 FUNC_0(VAR_13)->flags |= VAR_6 |
     VAR_7;

 if (FUNC_2(&VAR_10->hw, VAR_9))
  FUNC_0(VAR_13)->flags |= VAR_4;

 if (VAR_15->flags & VAR_2)
  FUNC_0(VAR_13)->flags |= VAR_5;

 FUNC_4(VAR_11, VAR_13);
}
