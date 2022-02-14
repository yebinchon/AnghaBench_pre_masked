
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int addr; } ;
struct sta_info {TYPE_4__ sta; int uploaded; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct TYPE_11__ {int flags; int cipher; int keyidx; } ;
struct ieee80211_key {int flags; TYPE_3__* local; TYPE_5__ conf; struct sta_info* sta; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_9__ {int hw; TYPE_1__* ops; } ;
struct TYPE_7__ {int set_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_15 ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (TYPE_3__*,int ,struct ieee80211_sub_if_data*,TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ieee80211_sub_if_data*,char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_key *VAR_16)
{
 struct ieee80211_sub_if_data *VAR_17 = VAR_16->sdata;
 struct sta_info *VAR_18;
 int VAR_19 = -VAR_2;

 FUNC_6();

 if (VAR_16->flags & VAR_9) {







  if (VAR_16->flags & VAR_10 &&
      !(VAR_16->conf.flags & (VAR_4 |
      VAR_7 |
      VAR_8)))
   FUNC_5(VAR_17);

  VAR_16->flags &= ~VAR_10;
  return -VAR_0;
 }

 if (!VAR_16->local->ops->set_key)
  goto out_unsupported;

 FUNC_1(VAR_16->local);

 VAR_18 = VAR_16->sta;





 if (VAR_18 && !(VAR_16->conf.flags & VAR_5) &&
     !FUNC_4(&VAR_16->local->hw, VAR_13))
  goto out_unsupported;

 if (VAR_18 && !VAR_18->uploaded)
  goto out_unsupported;

 if (VAR_17->vif.type == VAR_11) {




  if (!(VAR_16->conf.flags & VAR_5)) {
   VAR_19 = 1;
   goto out_unsupported;
  }
 }

 VAR_19 = FUNC_3(VAR_16->local, VAR_12, VAR_17,
     VAR_18 ? &VAR_18->sta : ((void*)0), &VAR_16->conf);

 if (!VAR_19) {
  VAR_16->flags |= VAR_10;

  if (!(VAR_16->conf.flags & (VAR_4 |
      VAR_7 |
      VAR_8)))
   FUNC_2(VAR_17, 1);

  FUNC_0((VAR_16->conf.flags & VAR_6) &&
   (VAR_16->conf.flags & VAR_3));

  FUNC_0((VAR_16->conf.flags & VAR_7) &&
   (VAR_16->conf.flags & VAR_4));

  return 0;
 }

 if (VAR_19 != -VAR_1 && VAR_19 != -VAR_2 && VAR_19 != 1)
  FUNC_7(VAR_17,
     "failed to set key (%d, %pM) to hardware (%d)\n",
     VAR_16->conf.keyidx,
     VAR_18 ? VAR_18->sta.addr : VAR_15, VAR_19);

 out_unsupported:
 switch (VAR_16->conf.cipher) {
 case 128:
 case 129:
 case 130:
 case 134:
 case 133:
 case 138:
 case 137:
 case 136:
 case 135:
 case 132:
 case 131:

  if (VAR_19 == 1)
   return 0;
  if (FUNC_4(&VAR_16->local->hw, VAR_14))
   return -VAR_0;
  return 0;
 default:
  return -VAR_0;
 }
}
