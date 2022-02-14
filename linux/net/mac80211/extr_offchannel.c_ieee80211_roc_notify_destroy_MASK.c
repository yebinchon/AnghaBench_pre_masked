
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_roc_work {int list; int chan; int mgmt_tx_cookie; TYPE_2__* sdata; int cookie; TYPE_3__* frame; } ;
struct TYPE_6__ {int len; int data; } ;
struct TYPE_5__ {int wdev; TYPE_1__* local; } ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (struct ieee80211_roc_work*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_roc_work *VAR_1)
{

 if (VAR_1->frame) {
  FUNC_0(&VAR_1->sdata->wdev, VAR_1->mgmt_tx_cookie,
     VAR_1->frame->data, VAR_1->frame->len,
     0, VAR_0);
  FUNC_3(&VAR_1->sdata->local->hw, VAR_1->frame);
 }

 if (!VAR_1->mgmt_tx_cookie)
  FUNC_1(&VAR_1->sdata->wdev,
         VAR_1->cookie, VAR_1->chan,
         VAR_0);
 else
  FUNC_2(&VAR_1->sdata->wdev,
      VAR_1->mgmt_tx_cookie,
      VAR_1->chan, VAR_0);

 FUNC_5(&VAR_1->list);
 FUNC_4(VAR_1);
}
