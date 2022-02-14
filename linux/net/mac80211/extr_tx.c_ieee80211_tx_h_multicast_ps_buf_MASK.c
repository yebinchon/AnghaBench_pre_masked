
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ps_data {int bc_buf; int num_sta_ps; } ;
struct ieee80211_tx_info {int flags; int hw_queue; } ;
struct ieee80211_tx_data {TYPE_4__* skb; TYPE_5__* local; TYPE_6__* sdata; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_15__ {scalar_t__ type; int cab_queue; } ;
struct TYPE_10__ {struct ps_data ps; } ;
struct TYPE_11__ {TYPE_2__ mesh; } ;
struct TYPE_14__ {TYPE_7__ vif; TYPE_3__ u; TYPE_1__* bss; } ;
struct TYPE_13__ {scalar_t__ total_ps_buffered; int hw; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_9__ {struct ps_data ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_6__*,char*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_4__*) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_13(struct ieee80211_tx_data *VAR_9)
{
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_9->skb);
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_9->skb->data;
 struct ps_data *VAR_12;
 if (VAR_9->sdata->vif.type == VAR_3 ||
     VAR_9->sdata->vif.type == VAR_4) {
  if (!VAR_9->sdata->bss)
   return VAR_7;

  VAR_12 = &VAR_9->sdata->bss->ps;
 } else if (FUNC_6(&VAR_9->sdata->vif)) {
  VAR_12 = &VAR_9->sdata->u.mesh.ps;
 } else {
  return VAR_7;
 }



 if (FUNC_3(VAR_11->frame_control))
  return VAR_7;

 if (FUNC_5(VAR_11->frame_control))
  return VAR_7;

 if (FUNC_4(&VAR_9->local->hw, VAR_5))
  VAR_10->hw_queue = VAR_9->sdata->vif.cab_queue;


 if (!FUNC_1(&VAR_12->num_sta_ps) && FUNC_10(&VAR_12->bc_buf))
  return VAR_7;

 VAR_10->flags |= VAR_2;


 if (!FUNC_4(&VAR_9->local->hw, VAR_1))
  return VAR_7;


 if (VAR_9->local->total_ps_buffered >= VAR_6)
  FUNC_8(VAR_9->local);

 if (FUNC_11(&VAR_12->bc_buf) >= VAR_0) {
  FUNC_7(VAR_9->sdata,
         "BC TX buffer full - dropping the oldest frame\n");
  FUNC_2(&VAR_9->local->hw, FUNC_9(&VAR_12->bc_buf));
 } else
  VAR_9->local->total_ps_buffered++;

 FUNC_12(&VAR_12->bc_buf, VAR_9->skb);

 return VAR_8;
}
