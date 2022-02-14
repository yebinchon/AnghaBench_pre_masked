
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ quantum; scalar_t__ memory_limit; scalar_t__ limit; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_3__ fq; TYPE_2__ hw; } ;
struct TYPE_4__ {scalar_t__ txq_quantum; scalar_t__ txq_memory_limit; scalar_t__ txq_limit; } ;



void FUNC_0(struct ieee80211_local *VAR_0)
{
 if (VAR_0->hw.wiphy->txq_limit)
  VAR_0->fq.limit = VAR_0->hw.wiphy->txq_limit;
 else
  VAR_0->hw.wiphy->txq_limit = VAR_0->fq.limit;

 if (VAR_0->hw.wiphy->txq_memory_limit)
  VAR_0->fq.memory_limit = VAR_0->hw.wiphy->txq_memory_limit;
 else
  VAR_0->hw.wiphy->txq_memory_limit = VAR_0->fq.memory_limit;

 if (VAR_0->hw.wiphy->txq_quantum)
  VAR_0->fq.quantum = VAR_0->hw.wiphy->txq_quantum;
 else
  VAR_0->hw.wiphy->txq_quantum = VAR_0->fq.quantum;
}
