
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,unsigned int,int) ;
 unsigned int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned int,int ,int) ;
 int FUNC_4 (int *,unsigned int,int ,int) ;

void FUNC_5(struct ieee80211_local *VAR_2,
         struct ieee80211_sub_if_data *VAR_3,
         unsigned int VAR_4, bool VAR_5)
{
 if (!VAR_2->ops->flush)
  return;





 if (!VAR_4 || !FUNC_2(&VAR_2->hw, VAR_1))
  VAR_4 = FUNC_1(VAR_2, VAR_3);

 FUNC_3(&VAR_2->hw, VAR_4,
     VAR_0,
     0);

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_4(&VAR_2->hw, VAR_4,
     VAR_0,
     0);
}
