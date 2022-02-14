
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int started; int tasklet; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop ) (int *) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_local*) ;
 int FUNC_7 (struct ieee80211_local*) ;

void FUNC_8(struct ieee80211_local *VAR_0)
{
 FUNC_2();

 if (FUNC_0(!VAR_0->started))
  return;

 FUNC_7(VAR_0);
 VAR_0->ops->stop(&VAR_0->hw);
 FUNC_6(VAR_0);


 FUNC_4(&VAR_0->tasklet);
 FUNC_5(&VAR_0->tasklet);

 FUNC_1();

 VAR_0->started = 0;
}
