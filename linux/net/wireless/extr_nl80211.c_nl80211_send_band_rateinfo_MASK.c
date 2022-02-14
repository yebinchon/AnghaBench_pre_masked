
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_6__ {scalar_t__ bw_config; scalar_t__ channels; } ;
struct TYPE_5__ {int cap; int vht_mcs; scalar_t__ vht_supported; } ;
struct TYPE_4__ {scalar_t__ ampdu_density; scalar_t__ ampdu_factor; int cap; int mcs; scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {int n_iftype_data; int n_bitrates; struct ieee80211_rate* bitrates; TYPE_3__ edmg_cap; int * iftype_data; TYPE_2__ vht_cap; TYPE_1__ ht_cap; } ;
struct ieee80211_rate {int flags; int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_14,
          struct ieee80211_supported_band *VAR_15)
{
 struct nlattr *VAR_16, *VAR_17;
 struct ieee80211_rate *VAR_18;
 int VAR_19;


 if (VAR_15->ht_cap.ht_supported &&
     (FUNC_3(VAR_14, VAR_7,
       sizeof(VAR_15->ht_cap.mcs),
       &VAR_15->ht_cap.mcs) ||
      FUNC_5(VAR_14, VAR_6,
    VAR_15->ht_cap.cap) ||
      FUNC_7(VAR_14, VAR_5,
   VAR_15->ht_cap.ampdu_factor) ||
      FUNC_7(VAR_14, VAR_4,
   VAR_15->ht_cap.ampdu_density)))
  return -VAR_0;


 if (VAR_15->vht_cap.vht_supported &&
     (FUNC_3(VAR_14, VAR_11,
       sizeof(VAR_15->vht_cap.vht_mcs),
       &VAR_15->vht_cap.vht_mcs) ||
      FUNC_6(VAR_14, VAR_10,
    VAR_15->vht_cap.cap)))
  return -VAR_0;

 if (VAR_15->n_iftype_data) {
  struct nlattr *VAR_20 =
   FUNC_2(VAR_14,
           VAR_8);
  int VAR_21;

  if (!VAR_20)
   return -VAR_0;

  for (VAR_19 = 0; VAR_19 < VAR_15->n_iftype_data; VAR_19++) {
   struct nlattr *VAR_22;

   VAR_22 = FUNC_2(VAR_14, VAR_19 + 1);
   if (!VAR_22)
    return -VAR_0;

   VAR_21 = FUNC_0(VAR_14,
             &VAR_15->iftype_data[VAR_19]);
   if (VAR_21)
    return VAR_21;

   FUNC_1(VAR_14, VAR_22);
  }

  FUNC_1(VAR_14, VAR_20);
 }


 if (VAR_15->edmg_cap.channels &&
     (FUNC_7(VAR_14, VAR_3,
         VAR_15->edmg_cap.channels) ||
     FUNC_7(VAR_14, VAR_2,
         VAR_15->edmg_cap.bw_config)))

  return -VAR_0;


 VAR_16 = FUNC_2(VAR_14, VAR_9);
 if (!VAR_16)
  return -VAR_0;

 for (VAR_19 = 0; VAR_19 < VAR_15->n_bitrates; VAR_19++) {
  VAR_17 = FUNC_2(VAR_14, VAR_19);
  if (!VAR_17)
   return -VAR_0;

  VAR_18 = &VAR_15->bitrates[VAR_19];
  if (FUNC_6(VAR_14, VAR_13,
    VAR_18->bitrate))
   return -VAR_0;
  if ((VAR_18->flags & VAR_1) &&
      FUNC_4(VAR_14,
     VAR_12))
   return -VAR_0;

  FUNC_1(VAR_14, VAR_17);
 }

 FUNC_1(VAR_14, VAR_16);

 return 0;
}
