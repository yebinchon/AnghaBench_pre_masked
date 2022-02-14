
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sta_info {TYPE_1__* mesh; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ plink_state; int plink_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sta_info*,int ) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static u32 FUNC_4(struct sta_info *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = VAR_3->sdata;
 u32 VAR_5 = 0;

 FUNC_2(&VAR_3->mesh->plink_lock);

 if (VAR_3->mesh->plink_state == VAR_2)
  VAR_5 = FUNC_3(VAR_4);
 VAR_3->mesh->plink_state = VAR_1;

 FUNC_1(VAR_3);
 VAR_5 |= FUNC_0(VAR_3,
   VAR_0);

 return VAR_5;
}
