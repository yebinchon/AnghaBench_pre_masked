
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int const* u32 ;
struct TYPE_2__ {int addr; int tdls_initiator; } ;
struct sta_info {TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff {int data; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_ch_switch_timing {int dummy; } ;
typedef int extra_ies ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct sk_buff* FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,int,int *,int,int ,int *) ;
 int * FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,...) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct sta_info *VAR_1,
       u32 *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_1->sdata;
 struct sk_buff *VAR_4;
 u8 VAR_5[2 + sizeof(struct ieee80211_ch_switch_timing)];


 FUNC_2(VAR_5, 0, 0);

 VAR_4 = FUNC_4(VAR_3, VAR_1->sta.addr,
     VAR_0,
     0, 0, !VAR_1->sta.tdls_initiator,
     VAR_5, sizeof(VAR_5), 0, ((void*)0));
 if (!VAR_4)
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3, VAR_4, 0);
 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_3,
    "Failed building TDLS channel switch resp frame\n");
  return ((void*)0);
 }

 if (VAR_2) {
  const u8 *VAR_6 = FUNC_5(VAR_4);

  if (!VAR_6) {
   FUNC_6(VAR_3,
     "No switch timing IE in TDLS switch resp\n");
   FUNC_1(VAR_4);
   return ((void*)0);
  }

  *VAR_2 = VAR_6 - VAR_4->data;
 }

 FUNC_6(VAR_3, "TDLS get channel switch response template for %pM\n",
   VAR_1->sta.addr);
 return VAR_4;
}
