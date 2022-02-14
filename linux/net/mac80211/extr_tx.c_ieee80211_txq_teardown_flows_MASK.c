
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fq {int lock; } ;
struct ieee80211_local {int * cvars; TYPE_1__* ops; struct fq fq; } ;
struct TYPE_2__ {int wake_tx_queue; } ;


 int FUNC_0 (struct fq*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ieee80211_local *VAR_1)
{
 struct fq *VAR_2 = &VAR_1->fq;

 if (!VAR_1->ops->wake_tx_queue)
  return;

 FUNC_1(VAR_1->cvars);
 VAR_1->cvars = ((void*)0);

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_2->lock);
}
