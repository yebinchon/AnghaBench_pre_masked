
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ieee80211_key {TYPE_1__ conf; int sta; scalar_t__ sdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_key*,int) ;
 int FUNC_1 (scalar_t__,int ,int,struct ieee80211_key*,int *) ;

void FUNC_2(struct ieee80211_key *VAR_1, bool VAR_2)
{
 if (!VAR_1)
  return;




 if (VAR_1->sdata)
  FUNC_1(VAR_1->sdata, VAR_1->sta,
    VAR_1->conf.flags & VAR_0,
    VAR_1, ((void*)0));
 FUNC_0(VAR_1, VAR_2);
}
