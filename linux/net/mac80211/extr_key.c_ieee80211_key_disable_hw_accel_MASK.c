
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int addr; } ;
struct sta_info {TYPE_3__ sta; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_9__ {int flags; int keyidx; } ;
struct ieee80211_key {int flags; TYPE_4__ conf; TYPE_2__* local; struct ieee80211_sub_if_data* sdata; struct sta_info* sta; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int set_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,struct ieee80211_sub_if_data*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_key *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7;
 struct sta_info *VAR_8;
 int VAR_9;

 FUNC_3();

 if (!VAR_6 || !VAR_6->local->ops->set_key)
  return;

 FUNC_0(VAR_6->local);

 if (!(VAR_6->flags & VAR_4))
  return;

 VAR_8 = VAR_6->sta;
 VAR_7 = VAR_6->sdata;

 if (!(VAR_6->conf.flags & (VAR_1 |
     VAR_2 |
     VAR_3)))
  FUNC_2(VAR_7);

 VAR_6->flags &= ~VAR_4;
 VAR_9 = FUNC_1(VAR_6->local, VAR_0, VAR_7,
     VAR_8 ? &VAR_8->sta : ((void*)0), &VAR_6->conf);

 if (VAR_9)
  FUNC_4(VAR_7,
     "failed to remove key (%d, %pM) from hardware (%d)\n",
     VAR_6->conf.keyidx,
     VAR_8 ? VAR_8->sta.addr : VAR_5, VAR_9);
}
