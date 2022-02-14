
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tid_ampdu_tx {int state; int amsdu; int buf_size; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int mtx; } ;
struct sta_info {int lock; int sdata; TYPE_2__ sta; TYPE_1__ ampdu_mlme; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_ampdu_params {int amsdu; int buf_size; int ssn; int timeout; int tid; int action; TYPE_2__* sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,int ,struct ieee80211_ampdu_params*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct tid_ampdu_tx*,int ) ;
 int FUNC_4 (struct sta_info*,int ,int) ;
 int FUNC_5 (int *) ;
 struct tid_ampdu_tx* FUNC_6 (struct sta_info*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_local *VAR_2,
      struct sta_info *VAR_3, u16 VAR_4)
{
 struct tid_ampdu_tx *VAR_5;
 struct ieee80211_ampdu_params VAR_6 = {
  .sta = &VAR_3->sta,
  .action = VAR_1,
  .tid = VAR_4,
  .timeout = 0,
  .ssn = 0,
 };

 FUNC_5(&VAR_3->ampdu_mlme.mtx);

 VAR_5 = FUNC_6(VAR_3, VAR_4);
 VAR_6.buf_size = VAR_5->buf_size;
 VAR_6.amsdu = VAR_5->amsdu;

 FUNC_1(VAR_3->sdata, "Aggregation is on for %pM tid %d\n",
        VAR_3->sta.addr, VAR_4);

 FUNC_0(VAR_2, VAR_3->sdata, &VAR_6);





 FUNC_8(&VAR_3->lock);

 FUNC_3(VAR_3->sdata, VAR_5, VAR_4);





 FUNC_7(VAR_0, &VAR_5->state);
 FUNC_2(VAR_3->sdata, VAR_4);

 FUNC_9(&VAR_3->lock);

 FUNC_4(VAR_3, VAR_4, 1);
}
