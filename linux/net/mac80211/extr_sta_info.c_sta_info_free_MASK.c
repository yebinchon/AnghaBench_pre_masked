
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rates; scalar_t__* txq; int addr; } ;
struct sta_info {int pcpu_rx_stats; struct sta_info* mesh; TYPE_1__ sta; int sdata; scalar_t__ rate_ctrl; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (struct sta_info*) ;
 struct sta_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 struct sta_info* FUNC_5 (scalar_t__) ;

void FUNC_6(struct ieee80211_local *VAR_0, struct sta_info *VAR_1)
{
 if (VAR_1->rate_ctrl)
  FUNC_2(VAR_1);

 FUNC_4(VAR_1->sdata, "Destroyed STA %pM\n", VAR_1->sta.addr);

 if (VAR_1->sta.txq[0])
  FUNC_1(FUNC_5(VAR_1->sta.txq[0]));
 FUNC_1(FUNC_3(VAR_1->sta.rates));



 FUNC_0(VAR_1->pcpu_rx_stats);
 FUNC_1(VAR_1);
}
