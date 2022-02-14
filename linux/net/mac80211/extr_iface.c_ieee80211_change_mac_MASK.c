
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int addr; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ mntr; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct net_device*,struct sockaddr*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, void *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_4);
 struct sockaddr *VAR_7 = VAR_5;
 bool VAR_8 = 1;
 int VAR_9;

 if (FUNC_2(VAR_6))
  return -VAR_0;

 if (VAR_6->vif.type == VAR_3 &&
     !(VAR_6->u.mntr.flags & VAR_2))
  VAR_8 = 0;

 VAR_9 = FUNC_3(VAR_6, VAR_7->sa_data, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_7);

 if (VAR_9 == 0)
  FUNC_4(VAR_6->vif.addr, VAR_7->sa_data, VAR_1);

 return VAR_9;
}
