
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
struct ieee80211_channel {int band; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct sk_buff* FUNC_4 (struct ieee80211_sub_if_data*,int const*,int const*,int,struct ieee80211_channel*,int const*,size_t,int const*,size_t,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_2,
       const u8 *VAR_3, const u8 *VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       u32 VAR_9, u32 VAR_10, u32 VAR_11,
       struct ieee80211_channel *VAR_12)
{
 struct sk_buff *VAR_13;
 u32 VAR_14 = 0;

 VAR_13 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_9, VAR_12,
     VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_10);

 if (VAR_13) {
  if (VAR_10 & VAR_0) {
   struct ieee80211_hdr *VAR_15 = (void *)VAR_13->data;
   u16 VAR_16 = FUNC_3();

   VAR_14 |= VAR_1;
   VAR_15->seq_ctrl =
    FUNC_2(FUNC_1(VAR_16));
  }
  FUNC_0(VAR_13)->flags |= VAR_11;
  FUNC_5(VAR_2, VAR_13, 7, VAR_12->band,
       VAR_14);
 }
}
