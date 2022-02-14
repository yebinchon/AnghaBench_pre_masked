
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct sk_buff {struct net_device* dev; int protocol; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int const* addr; } ;
struct ieee80211_sub_if_data {scalar_t__ control_port_protocol; TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_3__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ethhdr {scalar_t__ h_proto; int h_source; int h_dest; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sk_buff*,struct net_device*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int const*,int ) ;
 struct ethhdr* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int const*,size_t) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;

int FUNC_13(struct wiphy *VAR_6, struct net_device *VAR_7,
         const u8 *VAR_8, size_t VAR_9,
         const u8 *VAR_10, __be16 VAR_11, bool VAR_12)
{
 struct ieee80211_sub_if_data *VAR_13 = FUNC_0(VAR_7);
 struct ieee80211_local *VAR_14 = VAR_13->local;
 struct sk_buff *VAR_15;
 struct ethhdr *VAR_16;
 u32 VAR_17;




 if (VAR_11 != VAR_13->control_port_protocol &&
     VAR_11 != FUNC_2(VAR_4))
  return -VAR_0;

 if (VAR_12)
  VAR_17 = VAR_5;
 else
  VAR_17 = 0;

 VAR_15 = FUNC_3(VAR_14->hw.extra_tx_headroom +
       sizeof(struct ethhdr) + VAR_9);
 if (!VAR_15)
  return -VAR_1;

 FUNC_10(VAR_15, VAR_14->hw.extra_tx_headroom + sizeof(struct ethhdr));

 FUNC_9(VAR_15, VAR_8, VAR_9);

 VAR_16 = FUNC_8(VAR_15, sizeof(struct ethhdr));
 FUNC_7(VAR_16->h_dest, VAR_10, VAR_2);
 FUNC_7(VAR_16->h_source, VAR_13->vif.addr, VAR_2);
 VAR_16->h_proto = VAR_11;

 VAR_15->dev = VAR_7;
 VAR_15->protocol = FUNC_4(VAR_3);
 FUNC_12(VAR_15);
 FUNC_11(VAR_15);

 FUNC_5();
 FUNC_1(VAR_15, VAR_15->dev, VAR_17, 0);
 FUNC_6();

 return 0;
}
