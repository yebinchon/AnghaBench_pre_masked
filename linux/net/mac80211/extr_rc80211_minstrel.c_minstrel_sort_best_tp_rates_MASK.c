
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct minstrel_sta_info {TYPE_1__* r; } ;
struct minstrel_rate_stats {int prob_ewma; } ;
struct TYPE_2__ {struct minstrel_rate_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (size_t*,size_t*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct minstrel_sta_info *VAR_1, int VAR_2, u8 *VAR_3)
{
 int VAR_4;
 struct minstrel_rate_stats *VAR_5;
 struct minstrel_rate_stats *VAR_6 = &VAR_1->r[VAR_2].stats;

 for (VAR_4 = VAR_0; VAR_4 > 0; --VAR_4) {
  VAR_5 = &VAR_1->r[VAR_3[VAR_4 - 1]].stats;
  if (FUNC_1(&VAR_1->r[VAR_2], VAR_6->prob_ewma) <=
      FUNC_1(&VAR_1->r[VAR_3[VAR_4 - 1]], VAR_5->prob_ewma))
   break;
 }

 if (VAR_4 < VAR_0 - 1)
  FUNC_0(&VAR_3[VAR_4 + 1], &VAR_3[VAR_4], VAR_0 - (VAR_4 + 1));
 if (VAR_4 < VAR_0)
  VAR_3[VAR_4] = VAR_2;
}
