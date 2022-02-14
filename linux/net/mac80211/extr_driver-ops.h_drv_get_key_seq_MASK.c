
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_key_seq {int dummy; } ;
struct ieee80211_key {int conf; } ;
struct TYPE_2__ {int (* get_key_seq ) (int *,int *,struct ieee80211_key_seq*) ;} ;


 int FUNC_0 (int *,int *,struct ieee80211_key_seq*) ;
 int FUNC_1 (struct ieee80211_local*,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_local *VAR_0,
       struct ieee80211_key *VAR_1,
       struct ieee80211_key_seq *VAR_2)
{
 if (VAR_0->ops->get_key_seq)
  VAR_0->ops->get_key_seq(&VAR_0->hw, &VAR_1->conf, VAR_2);
 FUNC_1(VAR_0, &VAR_1->conf);
}
