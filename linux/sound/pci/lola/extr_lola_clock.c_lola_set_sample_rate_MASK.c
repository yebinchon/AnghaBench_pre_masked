
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cur_freq; int items; TYPE_1__* sample_clock; scalar_t__ cur_valid; } ;
struct lola {TYPE_2__ clock; } ;
struct TYPE_3__ {scalar_t__ type; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lola*,int) ;

int FUNC_1(struct lola *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2->clock.cur_freq == VAR_3 && VAR_2->clock.cur_valid)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->clock.items; VAR_4++) {
  if (VAR_2->clock.sample_clock[VAR_4].type == VAR_1 &&
      VAR_2->clock.sample_clock[VAR_4].freq == VAR_3)
   break;
 }
 if (VAR_4 >= VAR_2->clock.items)
  return -VAR_0;
 return FUNC_0(VAR_2, VAR_4);
}
