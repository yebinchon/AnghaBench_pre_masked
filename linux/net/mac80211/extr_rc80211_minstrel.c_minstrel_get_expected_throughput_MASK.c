
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct minstrel_sta_info {int* max_tp_rate; TYPE_1__* r; } ;
struct minstrel_rate_stats {int prob_ewma; } ;
struct TYPE_2__ {struct minstrel_rate_stats stats; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static u32 FUNC_1(void *VAR_0)
{
 struct minstrel_sta_info *VAR_1 = VAR_0;
 struct minstrel_rate_stats *VAR_2;
 int VAR_3 = VAR_1->max_tp_rate[0];
 int VAR_4;




 VAR_2 = &VAR_1->r[VAR_3].stats;
 VAR_4 = FUNC_0(&VAR_1->r[VAR_3], VAR_2->prob_ewma) * 10;
 VAR_4 = VAR_4 * 1200 * 8 / 1024;

 return VAR_4;
}
