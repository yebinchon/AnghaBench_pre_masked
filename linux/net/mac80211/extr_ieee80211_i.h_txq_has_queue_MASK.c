
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backlog_packets; } ;
struct txq_info {TYPE_1__ tin; int frags; } ;
struct ieee80211_txq {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct txq_info* FUNC_1 (struct ieee80211_txq*) ;

__attribute__((used)) static inline bool FUNC_2(struct ieee80211_txq *VAR_0)
{
 struct txq_info *VAR_1 = FUNC_1(VAR_0);

 return !(FUNC_0(&VAR_1->frags) && !VAR_1->tin.backlog_packets);
}
