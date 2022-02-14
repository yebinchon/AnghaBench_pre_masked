
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr_3addr {int addr3; int * addr2; int addr1; int frame_control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 struct ieee80211_local* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int * FUNC_5 (struct sk_buff*,size_t) ;
 struct ieee80211_hdr_3addr* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_4,
           const u8 *VAR_5,
           const u8 *VAR_6, size_t VAR_7,
           size_t VAR_8)
{
 struct ieee80211_local *VAR_9 = FUNC_3(VAR_4);
 struct ieee80211_hdr_3addr *VAR_10;
 struct sk_buff *VAR_11;
 size_t VAR_12;
 u8 *VAR_13;

 VAR_12 = 2 + VAR_7;

 VAR_11 = FUNC_1(VAR_9->hw.extra_tx_headroom + sizeof(*VAR_10) +
       VAR_12 + VAR_8);
 if (!VAR_11)
  return ((void*)0);

 FUNC_7(VAR_11, VAR_9->hw.extra_tx_headroom);

 VAR_10 = FUNC_6(VAR_11, sizeof(*VAR_10));
 VAR_10->frame_control = FUNC_0(VAR_1 |
      VAR_2);
 FUNC_2(VAR_10->addr1);
 FUNC_4(VAR_10->addr2, VAR_5, VAR_0);
 FUNC_2(VAR_10->addr3);

 VAR_13 = FUNC_5(VAR_11, VAR_12);
 *VAR_13++ = VAR_3;
 *VAR_13++ = VAR_7;
 if (VAR_7)
  FUNC_4(VAR_13, VAR_6, VAR_7);
 VAR_13 += VAR_7;

 return VAR_11;
}
