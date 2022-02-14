
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int started; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* start ) (int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_local*,int) ;
 int FUNC_5 (struct ieee80211_local*) ;

int FUNC_6(struct ieee80211_local *VAR_1)
{
 int VAR_2;

 FUNC_1();

 if (FUNC_0(VAR_1->started))
  return -VAR_0;

 FUNC_5(VAR_1);
 VAR_1->started = 1;

 FUNC_2();
 VAR_2 = VAR_1->ops->start(&VAR_1->hw);
 FUNC_4(VAR_1, VAR_2);

 if (VAR_2)
  VAR_1->started = 0;

 return VAR_2;
}
