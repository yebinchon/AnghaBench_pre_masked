
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;
struct ieee80211_txq_params {int ac; void* aifs; void* cwmax; void* cwmin; void* txop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr *VAR_7[],
       struct ieee80211_txq_params *VAR_8)
{
 u8 VAR_9;

 if (!VAR_7[VAR_2] || !VAR_7[VAR_6] ||
     !VAR_7[VAR_5] || !VAR_7[VAR_4] ||
     !VAR_7[VAR_3])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7[VAR_2]);
 VAR_8->txop = FUNC_1(VAR_7[VAR_6]);
 VAR_8->cwmin = FUNC_1(VAR_7[VAR_5]);
 VAR_8->cwmax = FUNC_1(VAR_7[VAR_4]);
 VAR_8->aifs = FUNC_2(VAR_7[VAR_3]);

 if (VAR_9 >= VAR_1)
  return -VAR_0;
 VAR_8->ac = FUNC_0(VAR_9, VAR_1);
 return 0;
}
