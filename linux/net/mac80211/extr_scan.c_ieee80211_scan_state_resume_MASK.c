
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int next_scan_state; int leave_oper_channel_time; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,int *,int) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ieee80211_local *VAR_3,
     unsigned long *VAR_4)
{
 FUNC_1(VAR_3);

 if (VAR_3->ops->flush) {
  FUNC_0(VAR_3, ((void*)0), 0);
  *VAR_4 = 0;
 } else
  *VAR_4 = VAR_0 / 10;


 VAR_3->leave_oper_channel_time = VAR_2;


 VAR_3->next_scan_state = VAR_1;
}
