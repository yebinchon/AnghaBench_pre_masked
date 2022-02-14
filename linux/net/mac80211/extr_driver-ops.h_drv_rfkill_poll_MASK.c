
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* rfkill_poll ) (int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ieee80211_local *VAR_0)
{
 FUNC_0();

 if (VAR_0->ops->rfkill_poll)
  VAR_0->ops->rfkill_poll(&VAR_0->hw);
}
