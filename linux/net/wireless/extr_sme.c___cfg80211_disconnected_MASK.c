
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_7__ {int sa_family; } ;
union iwreq_data {TYPE_2__ ap_addr; } ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ ssid_len; } ;
struct TYPE_9__ {TYPE_3__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_4__ wext; int * connect_keys; scalar_t__ conn_owner_nlportid; scalar_t__ ssid_len; TYPE_5__* current_bss; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; scalar_t__ crit_proto_nlportid; } ;
struct TYPE_10__ {int pub; } ;
struct TYPE_6__ {scalar_t__ del_key; scalar_t__ crit_proto_stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (union iwreq_data*,int ,int) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int ,int const*,size_t,int) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,int,int,int *) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct net_device*,int *) ;
 int FUNC_10 (int *) ;
 struct cfg80211_registered_device* FUNC_11 (int ) ;
 int FUNC_12 (struct net_device*,int ,union iwreq_data*,int *) ;

void FUNC_13(struct net_device *VAR_5, const u8 *VAR_6,
        size_t VAR_7, u16 VAR_8, bool VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_11(VAR_10->wiphy);
 int VAR_12;




 FUNC_0(VAR_10);

 if (FUNC_1(VAR_10->iftype != VAR_2 &&
      VAR_10->iftype != VAR_1))
  return;

 if (VAR_10->current_bss) {
  FUNC_3(VAR_10->current_bss);
  FUNC_2(VAR_10->wiphy, &VAR_10->current_bss->pub);
 }

 VAR_10->current_bss = ((void*)0);
 VAR_10->ssid_len = 0;
 VAR_10->conn_owner_nlportid = 0;
 FUNC_4(VAR_10->connect_keys);
 VAR_10->connect_keys = ((void*)0);

 FUNC_6(VAR_11, VAR_5, VAR_8, VAR_6, VAR_7, VAR_9);


 if (VAR_11->ops->crit_proto_stop && VAR_11->crit_proto_nlportid) {
  VAR_11->crit_proto_nlportid = 0;
  FUNC_7(VAR_11, VAR_10);
 }





 if (VAR_11->ops->del_key)
  for (VAR_12 = 0; VAR_12 < 6; VAR_12++)
   FUNC_8(VAR_11, VAR_5, VAR_12, 0, ((void*)0));

 FUNC_9(VAR_11, VAR_5, ((void*)0));
 FUNC_10(&VAR_4);
}
