
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prob_ewma; } ;
struct minstrel_rate {int perfect_tx_time; TYPE_1__ stats; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct minstrel_rate *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->perfect_tx_time;
 if (!VAR_2)
  VAR_2 = 1000000;


 if (VAR_0->stats.prob_ewma < FUNC_0(10, 100))
  return 0;

 if (VAR_1 > FUNC_0(90, 100))
  return FUNC_1(100000 * (FUNC_0(90, 100) / VAR_2));
 else
  return FUNC_1(100000 * (VAR_1 / VAR_2));
}
