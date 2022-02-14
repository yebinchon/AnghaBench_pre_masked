
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct timer_list {int dummy; } ;
struct tid_ampdu_rx {unsigned long last_rx; int session_timer; int timeout; int tid; struct sta_info* sta; } ;
struct TYPE_6__ {int work; int tid_rx_timer_expired; } ;
struct TYPE_4__ {int addr; } ;
struct sta_info {TYPE_3__ ampdu_mlme; TYPE_2__* local; TYPE_1__ sta; int sdata; } ;
struct TYPE_5__ {int hw; } ;


 unsigned long FUNC_0 (int ) ;
 struct tid_ampdu_rx* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 struct tid_ampdu_rx* VAR_1 ;
 scalar_t__ FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_2)
{
 struct tid_ampdu_rx *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 struct sta_info *VAR_4 = VAR_3->sta;
 u8 VAR_5 = VAR_3->tid;
 unsigned long VAR_6;

 VAR_6 = VAR_3->last_rx + FUNC_0(VAR_3->timeout);
 if (FUNC_6(VAR_6)) {
  FUNC_4(&VAR_3->session_timer, VAR_6);
  return;
 }

 FUNC_2(VAR_4->sdata, "RX session timer expired on %pM tid %d\n",
        VAR_4->sta.addr, VAR_5);

 FUNC_5(VAR_5, VAR_4->ampdu_mlme.tid_rx_timer_expired);
 FUNC_3(&VAR_4->local->hw, &VAR_4->ampdu_mlme.work);
}
