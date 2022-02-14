
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_3__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_key_type { ____Placeholder_nl80211_key_type } nl80211_key_type ;
struct TYPE_4__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int const*,int,int,int const*,int ) ;
 int FUNC_4 (char*,char*,int,char*,int const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct net_device*,int const*,int,int,int const*) ;
 struct cfg80211_registered_device* FUNC_7 (struct wiphy*) ;
 int FUNC_8 (struct net_device*,int ,union iwreq_data*,char*) ;

void FUNC_9(struct net_device *VAR_2, const u8 *VAR_3,
      enum nl80211_key_type VAR_4, int VAR_5,
      const u8 *VAR_6, gfp_t VAR_7)
{
 struct wiphy *VAR_8 = VAR_2->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_9 = FUNC_7(VAR_8);
 FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
