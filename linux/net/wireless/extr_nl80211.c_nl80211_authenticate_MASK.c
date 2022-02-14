
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int n_cipher_suites; scalar_t__* cipher_suites; } ;
struct net_device {TYPE_3__* ieee80211_ptr; TYPE_5__ wiphy; TYPE_1__* ops; } ;
struct TYPE_7__ {scalar_t__ key_len; scalar_t__ cipher; int * key; } ;
struct key_parse {int idx; int type; TYPE_2__ p; } ;
struct ieee80211_channel {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__* ieee80211_ptr; TYPE_5__ wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;
struct TYPE_8__ {scalar_t__ iftype; } ;
struct TYPE_6__ {int auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct net_device*,struct net_device*,struct ieee80211_channel*,int,int const*,int const*,int,int const*,int,int *,scalar_t__,int,int const*,int) ;
 struct ieee80211_channel* FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (struct genl_info*,struct key_parse*) ;
 int FUNC_3 (struct net_device*,int,int ) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_21, struct genl_info *VAR_22)
{
 struct cfg80211_registered_device *VAR_23 = VAR_22->user_ptr[0];
 struct net_device *VAR_24 = VAR_22->user_ptr[1];
 struct ieee80211_channel *VAR_25;
 const u8 *VAR_26, *VAR_27, *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);
 int VAR_30, VAR_31, VAR_32 = 0, VAR_33 = 0;
 enum nl80211_auth_type VAR_34;
 struct key_parse VAR_35;
 bool VAR_36;

 if (!VAR_22->attrs[VAR_6])
  return -VAR_0;

 if (!VAR_22->attrs[VAR_3])
  return -VAR_0;

 if (!VAR_22->attrs[VAR_7])
  return -VAR_0;

 if (!VAR_22->attrs[VAR_8])
  return -VAR_0;

 VAR_30 = FUNC_2(VAR_22, &VAR_35);
 if (VAR_30)
  return VAR_30;

 if (VAR_35.idx >= 0) {
  if (VAR_35.type != -1 && VAR_35.type != VAR_16)
   return -VAR_0;
  if (!VAR_35.p.key || !VAR_35.p.key_len)
   return -VAR_0;
  if ((VAR_35.p.cipher != VAR_18 ||
       VAR_35.p.key_len != VAR_20) &&
      (VAR_35.p.cipher != VAR_17 ||
       VAR_35.p.key_len != VAR_19))
   return -VAR_0;
  if (VAR_35.idx > 3)
   return -VAR_0;
 } else {
  VAR_35.p.key_len = 0;
  VAR_35.p.key = ((void*)0);
 }

 if (VAR_35.idx >= 0) {
  int VAR_37;
  bool VAR_38 = 0;

  for (VAR_37 = 0; VAR_37 < VAR_23->wiphy.n_cipher_suites; VAR_37++) {
   if (VAR_35.p.cipher == VAR_23->wiphy.cipher_suites[VAR_37]) {
    VAR_38 = 1;
    break;
   }
  }
  if (!VAR_38)
   return -VAR_0;
 }

 if (!VAR_23->ops->auth)
  return -VAR_1;

 if (VAR_24->ieee80211_ptr->iftype != VAR_15 &&
     VAR_24->ieee80211_ptr->iftype != VAR_14)
  return -VAR_1;

 VAR_26 = FUNC_4(VAR_22->attrs[VAR_6]);
 VAR_25 = FUNC_1(&VAR_23->wiphy,
          VAR_22->attrs[VAR_8]);
 if (!VAR_25)
  return -VAR_0;

 VAR_27 = FUNC_4(VAR_22->attrs[VAR_7]);
 VAR_31 = FUNC_6(VAR_22->attrs[VAR_7]);

 if (VAR_22->attrs[VAR_4]) {
  VAR_28 = FUNC_4(VAR_22->attrs[VAR_4]);
  VAR_32 = FUNC_6(VAR_22->attrs[VAR_4]);
 }

 VAR_34 = FUNC_5(VAR_22->attrs[VAR_3]);
 if (!FUNC_3(VAR_23, VAR_34, VAR_13))
  return -VAR_0;

 if ((VAR_34 == VAR_12 ||
      VAR_34 == VAR_10 ||
      VAR_34 == VAR_11 ||
      VAR_34 == VAR_9) &&
     !VAR_22->attrs[VAR_2])
  return -VAR_0;

 if (VAR_22->attrs[VAR_2]) {
  if (VAR_34 != VAR_12 &&
      VAR_34 != VAR_10 &&
      VAR_34 != VAR_11 &&
      VAR_34 != VAR_9)
   return -VAR_0;
  VAR_29 = FUNC_4(VAR_22->attrs[VAR_2]);
  VAR_33 = FUNC_6(VAR_22->attrs[VAR_2]);

  if (VAR_33 < 4)
   return -VAR_0;
 }

 VAR_36 = !!VAR_22->attrs[VAR_5];





 if (VAR_36)
  return 0;

 FUNC_7(VAR_24->ieee80211_ptr);
 VAR_30 = FUNC_0(VAR_23, VAR_24, VAR_25, VAR_34, VAR_26,
     VAR_27, VAR_31, VAR_28, VAR_32,
     VAR_35.p.key, VAR_35.p.key_len, VAR_35.idx,
     VAR_29, VAR_33);
 FUNC_8(VAR_24->ieee80211_ptr);
 return VAR_30;
}
