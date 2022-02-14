
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fq_flow {int dummy; } ;
struct codel_vars {int dummy; } ;
struct TYPE_3__ {int vif; } ;
struct txq_info {struct fq_flow def_flow; struct codel_vars def_cvars; TYPE_1__ txq; } ;
struct sk_buff {int dummy; } ;
struct fq {struct fq_flow* flows; } ;
struct ieee80211_local {struct codel_vars* cvars; struct fq fq; } ;
struct TYPE_4__ {struct ieee80211_local* local; } ;


 struct sk_buff* FUNC_0 (struct fq*,struct fq_flow*) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct codel_vars *VAR_0,
       void *VAR_1)
{
 struct ieee80211_local *VAR_2;
 struct txq_info *VAR_3;
 struct fq *VAR_4;
 struct fq_flow *VAR_5;

 VAR_3 = VAR_1;
 VAR_2 = FUNC_1(VAR_3->txq.vif)->local;
 VAR_4 = &VAR_2->fq;

 if (VAR_0 == &VAR_3->def_cvars)
  VAR_5 = &VAR_3->def_flow;
 else
  VAR_5 = &VAR_4->flows[VAR_0 - VAR_2->cvars];

 return FUNC_0(VAR_4, VAR_5);
}
