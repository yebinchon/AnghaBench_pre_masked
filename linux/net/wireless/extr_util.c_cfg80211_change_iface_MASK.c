
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vif_params {int use_4addr; } ;
struct net_device {int priv_flags; TYPE_3__* ieee80211_ptr; } ;
struct TYPE_7__ {int interface_modes; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_8__ {int iftype; int use_4addr; scalar_t__ mesh_id_up_len; } ;
struct TYPE_6__ {int change_virtual_intf; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct cfg80211_registered_device*) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int) ;
 int FUNC_7 (struct cfg80211_registered_device*,int,int) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct net_device*,int,struct vif_params*) ;
 int FUNC_10 (struct cfg80211_registered_device*,struct net_device*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

int FUNC_13(struct cfg80211_registered_device *VAR_5,
     struct net_device *VAR_6, enum nl80211_iftype VAR_7,
     struct vif_params *VAR_8)
{
 int VAR_9;
 enum nl80211_iftype VAR_10 = VAR_6->ieee80211_ptr->iftype;

 FUNC_0();


 if (VAR_10 == 139)
  return -VAR_1;


 if (VAR_7 == 133 ||
     VAR_7 == 136)
  return -VAR_1;

 if (!VAR_5->ops->change_virtual_intf ||
     !(VAR_5->wiphy.interface_modes & (1 << VAR_7)))
  return -VAR_1;


 if ((VAR_6->priv_flags & VAR_2) &&
     (VAR_7 == 141 ||
      VAR_7 == 131 ||
      VAR_7 == 134))
  return -VAR_0;

 if (VAR_7 != VAR_10) {
  VAR_6->ieee80211_ptr->use_4addr = 0;
  VAR_6->ieee80211_ptr->mesh_id_up_len = 0;
  FUNC_11(VAR_6->ieee80211_ptr);
  FUNC_10(VAR_5, VAR_6, ((void*)0));
  FUNC_12(VAR_6->ieee80211_ptr);

  switch (VAR_10) {
  case 140:
   FUNC_6(VAR_5, VAR_6, 1);
   break;
  case 141:
   FUNC_3(VAR_5, VAR_6, 0);
   break;
  case 131:
  case 134:
   FUNC_11(VAR_6->ieee80211_ptr);
   FUNC_2(VAR_5, VAR_6,
         VAR_4, 1);
   FUNC_12(VAR_6->ieee80211_ptr);
   break;
  case 138:

   break;
  default:
   break;
  }

  FUNC_5(VAR_5);
  FUNC_4(VAR_6->ieee80211_ptr);
 }

 VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_1(!VAR_9 && VAR_6->ieee80211_ptr->iftype != VAR_7);

 if (!VAR_9 && VAR_8 && VAR_8->use_4addr != -1)
  VAR_6->ieee80211_ptr->use_4addr = VAR_8->use_4addr;

 if (!VAR_9) {
  VAR_6->priv_flags &= ~VAR_3;
  switch (VAR_7) {
  case 131:
   if (VAR_6->ieee80211_ptr->use_4addr)
    break;

  case 135:
  case 134:
  case 141:
   VAR_6->priv_flags |= VAR_3;
   break;
  case 132:
  case 140:
  case 139:
  case 129:
  case 138:

   break;
  case 137:

   break;
  case 130:
  case 128:

   break;
  case 133:
  case 136:
   FUNC_1(1);
   break;
  }
 }

 if (!VAR_9 && VAR_7 != VAR_10 && FUNC_8(VAR_6)) {
  FUNC_7(VAR_5, VAR_7, 1);
  FUNC_7(VAR_5, VAR_10, -1);
 }

 return VAR_9;
}
