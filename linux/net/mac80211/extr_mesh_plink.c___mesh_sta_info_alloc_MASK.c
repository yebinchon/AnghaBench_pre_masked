
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int wme; int aid; } ;
struct sta_info {TYPE_2__ sta; TYPE_1__* mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__* local; } ;
struct TYPE_6__ {scalar_t__ num_sta; } ;
struct TYPE_4__ {int plink_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct sta_info* FUNC_1 (struct ieee80211_sub_if_data*,int *,int ) ;
 int FUNC_2 (struct sta_info*,int ) ;

__attribute__((used)) static struct sta_info *
FUNC_3(struct ieee80211_sub_if_data *VAR_6, u8 *VAR_7)
{
 struct sta_info *VAR_8;
 int VAR_9;

 if (VAR_6->local->num_sta >= VAR_4)
  return ((void*)0);

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 < 0)
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->mesh->plink_state = VAR_5;
 VAR_8->sta.wme = 1;
 VAR_8->sta.aid = VAR_9;

 FUNC_2(VAR_8, VAR_2);
 FUNC_2(VAR_8, VAR_1);
 FUNC_2(VAR_8, VAR_3);

 return VAR_8;
}
