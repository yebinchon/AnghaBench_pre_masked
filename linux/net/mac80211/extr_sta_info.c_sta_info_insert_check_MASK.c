
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int addr; } ;
struct sta_info {int addr; TYPE_3__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_4__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; TYPE_1__ vif; } ;
struct TYPE_5__ {int hw; int sta_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sta_info *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = VAR_4->sdata;






 if (FUNC_9(!FUNC_4(VAR_5)))
  return -VAR_1;

 if (FUNC_0(FUNC_1(VAR_4->sta.addr, VAR_5->vif.addr) ||
      FUNC_5(VAR_4->sta.addr)))
  return -VAR_0;





 FUNC_7();
 FUNC_6(&VAR_5->local->sta_mtx);
 if (FUNC_3(&VAR_5->local->hw, VAR_3) &&
     FUNC_2(&VAR_5->local->hw, VAR_4->addr, ((void*)0))) {
  FUNC_8();
  return -VAR_2;
 }
 FUNC_8();

 return 0;
}
