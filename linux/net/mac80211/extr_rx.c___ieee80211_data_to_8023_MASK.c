
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; int addr; } ;
struct TYPE_7__ {scalar_t__ sta; } ;
struct TYPE_6__ {int use_4addr; } ;
struct TYPE_8__ {TYPE_2__ vlan; TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {scalar_t__ control_port_protocol; TYPE_4__ vif; TYPE_3__ u; } ;
struct ieee80211_rx_data {struct ieee80211_sub_if_data* sdata; TYPE_5__* skb; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct ethhdr {scalar_t__ h_proto; } ;
struct TYPE_10__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_rx_data *VAR_2, bool *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = VAR_2->sdata;
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_2->skb->data;
 bool VAR_6 = 0;
 struct ethhdr *VAR_7;
 int VAR_8;

 *VAR_3 = 0;
 if (FUNC_2(VAR_5->frame_control) &&
     VAR_4->vif.type == VAR_0 && !VAR_4->u.vlan.sta)
  return -1;

 if (VAR_4->vif.type == VAR_1 &&
     !!VAR_4->u.mgd.use_4addr != !!FUNC_2(VAR_5->frame_control)) {

  if (!VAR_4->u.mgd.use_4addr)
   return -1;
  else if (!FUNC_0(VAR_5->addr1, VAR_4->vif.addr))
   VAR_6 = 1;
 }

 if (FUNC_3(VAR_5->addr1) &&
     VAR_4->vif.type == VAR_0 && VAR_4->u.vlan.sta)
  return -1;

 VAR_8 = FUNC_1(VAR_2->skb, VAR_4->vif.addr, VAR_4->vif.type);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = (struct ethhdr *) VAR_2->skb->data;
 if (VAR_7->h_proto == VAR_2->sdata->control_port_protocol)
  *VAR_3 = 1;
 else if (VAR_6)
  return -1;

 return 0;
}
