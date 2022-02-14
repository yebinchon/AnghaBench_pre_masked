
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cur_index; int cur_freq; int cur_valid; TYPE_1__* sample_clock; } ;
struct lola {TYPE_2__ clock; int granularity; } ;
struct TYPE_3__ {scalar_t__ type; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lola*,int ,int) ;
 int FUNC_1 (struct lola*,int) ;

int FUNC_2(struct lola *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 0;

 if (VAR_3 == VAR_2->clock.cur_index) {

  VAR_4 = VAR_2->clock.cur_freq;
  VAR_5 = VAR_2->clock.cur_valid;
 } else if (VAR_2->clock.sample_clock[VAR_3].type ==
     VAR_1) {

  VAR_4 = VAR_2->clock.sample_clock[VAR_3].freq;
  VAR_5 = 1;
 }

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 if (!FUNC_0(VAR_2, VAR_2->granularity, VAR_4))
  return -VAR_0;

 if (VAR_3 != VAR_2->clock.cur_index) {
  int VAR_6 = FUNC_1(VAR_2, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_2->clock.cur_index = VAR_3;
  VAR_2->clock.cur_freq = VAR_4;
  VAR_2->clock.cur_valid = 1;
 }
 return 0;
}
