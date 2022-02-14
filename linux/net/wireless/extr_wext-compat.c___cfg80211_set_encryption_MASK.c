
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
struct TYPE_8__ {int privacy; } ;
struct TYPE_9__ {int default_key; int default_mgmt_key; TYPE_5__* keys; TYPE_3__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_4__ wext; scalar_t__ current_bss; int netdev; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct key_params {scalar_t__ cipher; int key; scalar_t__ key_len; } ;
struct TYPE_7__ {int flags; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct TYPE_10__ {int * data; struct key_params* params; } ;
struct TYPE_6__ {int set_default_mgmt_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 scalar_t__ FUNC_2 (struct cfg80211_registered_device*,struct key_params*,int,int,int const*) ;
 TYPE_5__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int,int,int const*,struct key_params*) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct net_device*,int,int,int const*) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,int,int,int) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct net_device*,int) ;

__attribute__((used)) static int FUNC_10(struct cfg80211_registered_device *VAR_13,
         struct net_device *VAR_14, bool VAR_15,
         const u8 *VAR_16, bool VAR_17, bool VAR_18,
         int VAR_19, struct key_params *VAR_20)
{
 struct wireless_dev *VAR_21 = VAR_14->ieee80211_ptr;
 int VAR_22, VAR_23;
 bool VAR_24 = 0;

 if (VAR_15 && !VAR_16)
  return -VAR_1;





 if (!VAR_21->wext.keys) {
  VAR_21->wext.keys = FUNC_3(sizeof(*VAR_21->wext.keys),
       VAR_6);
  if (!VAR_21->wext.keys)
   return -VAR_4;
  for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++)
   VAR_21->wext.keys->params[VAR_23].key =
    VAR_21->wext.keys->data[VAR_23];
 }

 if (VAR_21->iftype != VAR_7 &&
     VAR_21->iftype != VAR_8)
  return -VAR_5;

 if (VAR_20->cipher == VAR_10) {
  if (!VAR_21->current_bss)
   return -VAR_3;

  if (!VAR_13->ops->set_default_mgmt_key)
   return -VAR_5;

  if (VAR_19 < 4 || VAR_19 > 5)
   return -VAR_1;
 } else if (VAR_19 < 0 || VAR_19 > 3)
  return -VAR_1;

 if (VAR_17) {
  VAR_22 = 0;
  if (VAR_21->current_bss) {




   if (VAR_19 == VAR_21->wext.default_key &&
       VAR_21->iftype == VAR_7) {
    FUNC_0(VAR_13, VAR_21->netdev, 1);
    VAR_24 = 1;
   }

   if (!VAR_15 && VAR_16 &&
       !(VAR_13->wiphy.flags & VAR_9))
    VAR_22 = -VAR_2;
   else
    VAR_22 = FUNC_7(VAR_13, VAR_14, VAR_19, VAR_15,
         VAR_16);
  }
  VAR_21->wext.connect.privacy = 0;




  if (VAR_22 == -VAR_2)
   VAR_22 = 0;
  if (!VAR_22) {
   if (!VAR_16 && VAR_19 < 4) {
    FUNC_5(VAR_21->wext.keys->data[VAR_19], 0,
           sizeof(VAR_21->wext.keys->data[VAR_19]));
    VAR_21->wext.keys->params[VAR_19].key_len = 0;
    VAR_21->wext.keys->params[VAR_19].cipher = 0;
   }
   if (VAR_19 == VAR_21->wext.default_key)
    VAR_21->wext.default_key = -1;
   else if (VAR_19 == VAR_21->wext.default_mgmt_key)
    VAR_21->wext.default_mgmt_key = -1;
  }

  if (!VAR_22 && VAR_24)
   VAR_22 = FUNC_1(VAR_13, VAR_21);

  return VAR_22;
 }

 if (VAR_16)
  VAR_18 = 0;

 if (FUNC_2(VAR_13, VAR_20, VAR_19, VAR_15, VAR_16))
  return -VAR_1;

 VAR_22 = 0;
 if (VAR_21->current_bss)
  VAR_22 = FUNC_6(VAR_13, VAR_14, VAR_19, VAR_15, VAR_16, VAR_20);
 else if (VAR_20->cipher != VAR_12 &&
   VAR_20->cipher != VAR_11)
  return -VAR_1;
 if (VAR_22)
  return VAR_22;






 if (!VAR_16 && (VAR_20->cipher == VAR_12 ||
        VAR_20->cipher == VAR_11)) {
  VAR_21->wext.keys->params[VAR_19] = *VAR_20;
  FUNC_4(VAR_21->wext.keys->data[VAR_19],
   VAR_20->key, VAR_20->key_len);
  VAR_21->wext.keys->params[VAR_19].key =
   VAR_21->wext.keys->data[VAR_19];
 }

 if ((VAR_20->cipher == VAR_12 ||
      VAR_20->cipher == VAR_11) &&
     (VAR_18 || (!VAR_16 && VAR_21->wext.default_key == -1))) {
  if (VAR_21->current_bss) {





   if (VAR_21->iftype == VAR_7 &&
       VAR_21->wext.default_key == -1) {
    FUNC_0(VAR_13, VAR_21->netdev, 1);
    VAR_24 = 1;
   }
   VAR_22 = FUNC_8(VAR_13, VAR_14, VAR_19, 1, 1);
  }
  if (!VAR_22) {
   VAR_21->wext.default_key = VAR_19;
   if (VAR_24)
    VAR_22 = FUNC_1(VAR_13, VAR_21);
  }
  return VAR_22;
 }

 if (VAR_20->cipher == VAR_10 &&
     (VAR_18 || (!VAR_16 && VAR_21->wext.default_mgmt_key == -1))) {
  if (VAR_21->current_bss)
   VAR_22 = FUNC_9(VAR_13, VAR_14, VAR_19);
  if (!VAR_22)
   VAR_21->wext.default_mgmt_key = VAR_19;
  return VAR_22;
 }

 return 0;
}
