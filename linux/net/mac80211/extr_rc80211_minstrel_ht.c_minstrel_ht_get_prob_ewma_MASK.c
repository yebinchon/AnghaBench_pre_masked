
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_ht_sta {TYPE_2__* groups; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct TYPE_3__ {int prob_ewma; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct minstrel_ht_sta *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 / VAR_0;
 VAR_2 %= VAR_0;
 return VAR_1->groups[VAR_3].rates[VAR_2].prob_ewma;
}
