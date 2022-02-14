
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {int flags; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int associated; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int local; TYPE_3__ u; TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;






 int FUNC_1 (int ,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct wiphy*,struct net_device*,int const*,int ,int ,int ,int ,int,int const*,size_t) ;
 int FUNC_3 (struct wiphy*,struct net_device*,int const*,int ,int ,int ,int ,int,int const*,size_t) ;
 int FUNC_4 (struct wiphy*,struct net_device*,int const*,int ,int ,int ,int ,int,int const*,size_t,int ,int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*,int ,int const*,int) ;

int FUNC_6(struct wiphy *VAR_5, struct net_device *VAR_6,
   const u8 *VAR_7, u8 VAR_8, u8 VAR_9,
   u16 VAR_10, u32 VAR_11,
   bool VAR_12, const u8 *VAR_13,
   size_t VAR_14)
{
 struct ieee80211_sub_if_data *VAR_15 = FUNC_0(VAR_6);
 int VAR_16;

 if (!(VAR_5->flags & VAR_4))
  return -VAR_1;


 if (VAR_15->vif.type != VAR_3 ||
     !VAR_15->u.mgd.associated)
  return -VAR_0;

 switch (VAR_8) {
 case 130:
 case 129:
  VAR_16 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10,
      VAR_11, VAR_12,
      VAR_13, VAR_14);
  break;
 case 128:
  VAR_16 = FUNC_3(VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9,
         VAR_10,
         VAR_11, VAR_12,
         VAR_13, VAR_14);
  break;
 case 132:





  FUNC_1(VAR_15->local, VAR_15);

 case 131:
 case 133:

  VAR_16 = FUNC_4(VAR_5, VAR_6, VAR_7,
            VAR_8,
            VAR_9,
            VAR_10,
            VAR_11,
            VAR_12, VAR_13,
            VAR_14, 0, ((void*)0));
  break;
 default:
  VAR_16 = -VAR_2;
  break;
 }

 FUNC_5(VAR_15, "TDLS mgmt action %d peer %pM status %d\n",
   VAR_8, VAR_7, VAR_16);
 return VAR_16;
}
