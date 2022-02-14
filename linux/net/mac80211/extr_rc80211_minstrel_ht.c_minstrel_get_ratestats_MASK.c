
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_rate_stats {int dummy; } ;
struct minstrel_ht_sta {TYPE_1__* groups; } ;
struct TYPE_2__ {struct minstrel_rate_stats* rates; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct minstrel_rate_stats *
FUNC_0(struct minstrel_ht_sta *VAR_1, int VAR_2)
{
 return &VAR_1->groups[VAR_2 / VAR_0].rates[VAR_2 % VAR_0];
}
