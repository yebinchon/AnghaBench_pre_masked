
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t ac; } ;
struct fq_tin {int dummy; } ;
struct txq_info {TYPE_1__ txq; int schedule_order; int frags; struct fq_tin tin; } ;
struct fq {int lock; } ;
struct ieee80211_local {int * active_txq_lock; int hw; struct fq fq; } ;


 int VAR_0 ;
 int FUNC_0 (struct fq*,struct fq_tin*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ieee80211_local *VAR_1,
    struct txq_info *VAR_2)
{
 struct fq *VAR_3 = &VAR_1->fq;
 struct fq_tin *VAR_4 = &VAR_2->tin;

 FUNC_3(&VAR_3->lock);
 FUNC_0(VAR_3, VAR_4, VAR_0);
 FUNC_1(&VAR_1->hw, &VAR_2->frags);
 FUNC_4(&VAR_3->lock);

 FUNC_3(&VAR_1->active_txq_lock[VAR_2->txq.ac]);
 FUNC_2(&VAR_2->schedule_order);
 FUNC_4(&VAR_1->active_txq_lock[VAR_2->txq.ac]);
}
