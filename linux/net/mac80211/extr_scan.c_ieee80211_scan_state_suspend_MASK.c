
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * chan; } ;
struct ieee80211_local {int next_scan_state; TYPE_1__ scan_chandef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_local*,int ) ;
 int FUNC_1 (struct ieee80211_local*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_local *VAR_3,
      unsigned long *VAR_4)
{

 VAR_3->scan_chandef.chan = ((void*)0);
 FUNC_0(VAR_3, VAR_1);


 FUNC_1(VAR_3);

 *VAR_4 = VAR_0 / 5;

 VAR_3->next_scan_state = VAR_2;
}
