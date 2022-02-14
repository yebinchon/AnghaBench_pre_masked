
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dummy; } ;
struct sk_buff {int priority; int protocol; int * data; int len; } ;
struct net_device {int name; } ;
struct TYPE_9__ {int sta; } ;
struct TYPE_10__ {TYPE_4__ vlan; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int flags; TYPE_5__ u; TYPE_3__ vif; struct net_device* dev; } ;
struct ieee80211_rx_data {size_t seqno_idx; TYPE_2__* sta; struct sk_buff* skb; struct ieee80211_sub_if_data* sdata; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct TYPE_6__ {int syncp; int * msdu; } ;
struct TYPE_7__ {TYPE_1__ rx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct ieee80211_rx_data*) ;
 int FUNC_7 (struct net_device*,int ) ;
 scalar_t__ FUNC_8 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,size_t) ;
 int FUNC_11 (char*,int ) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;
 size_t FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,size_t) ;
 struct sta_info* FUNC_18 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void
FUNC_21(struct ieee80211_rx_data *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = VAR_5->sdata;
 struct net_device *VAR_7 = VAR_6->dev;
 struct sk_buff *VAR_8, *VAR_9;
 struct ethhdr *VAR_10 = (struct ethhdr *) VAR_5->skb->data;
 struct sta_info *VAR_11;

 VAR_8 = VAR_5->skb;
 VAR_9 = ((void*)0);

 FUNC_7(VAR_7, VAR_8->len);

 if (VAR_5->sta) {





  FUNC_19(&VAR_5->sta->rx_stats.syncp);
  VAR_5->sta->rx_stats.msdu[VAR_5->seqno_idx]++;
  FUNC_20(&VAR_5->sta->rx_stats.syncp);
 }

 if ((VAR_6->vif.type == VAR_3 ||
      VAR_6->vif.type == VAR_4) &&
     !(VAR_6->flags & VAR_2) &&
     (VAR_6->vif.type != VAR_4 || !VAR_6->u.vlan.sta)) {
  if (FUNC_9(VAR_10->h_dest) &&
      FUNC_8(VAR_6) != 0) {




   VAR_9 = FUNC_12(VAR_8, VAR_1);
   if (!VAR_9)
    FUNC_11("%s: failed to clone multicast frame\n",
          VAR_7->name);
  } else if (!FUNC_9(VAR_10->h_dest) &&
      !FUNC_4(VAR_10->h_dest, VAR_10->h_source)) {
   VAR_11 = FUNC_18(VAR_6, VAR_10->h_dest);
   if (VAR_11) {






    VAR_9 = VAR_8;
    VAR_8 = ((void*)0);
   }
  }
 }


 if (VAR_8) {






  int VAR_12;

  VAR_12 = (unsigned long)(VAR_8->data + sizeof(struct ethhdr)) & 3;
  if (VAR_12) {
   if (FUNC_0(FUNC_14(VAR_8) < 3)) {
    FUNC_1(VAR_8);
    VAR_8 = ((void*)0);
   } else {
    u8 *VAR_13 = VAR_8->data;
    size_t VAR_14 = FUNC_13(VAR_8);
    VAR_8->data -= VAR_12;
    FUNC_10(VAR_8->data, VAR_13, VAR_14);
    FUNC_17(VAR_8, VAR_14);
   }
  }
 }


 if (VAR_8) {
  VAR_8->protocol = FUNC_3(VAR_8, VAR_7);
  FUNC_6(VAR_8, VAR_5);
 }

 if (VAR_9) {





  VAR_9->priority += 256;
  VAR_9->protocol = FUNC_5(VAR_0);
  FUNC_16(VAR_9);
  FUNC_15(VAR_9);
  FUNC_2(VAR_9);
 }
}
