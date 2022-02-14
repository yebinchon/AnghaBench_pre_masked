
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t cur_index; int cur_valid; int cur_freq; TYPE_1__* sample_clock; } ;
struct lola {TYPE_2__ clock; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;

bool FUNC_1(struct lola *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;




 if (!VAR_5)
  return 0;
 VAR_6 = (VAR_5 >> VAR_3) & VAR_2;
 if (VAR_6 != VAR_1)
  return 0;


 if (VAR_4->clock.sample_clock[VAR_4->clock.cur_index].type !=
     VAR_0) {
  VAR_4->clock.cur_freq = FUNC_0(VAR_5 & 0x7f);
  VAR_4->clock.cur_valid = (VAR_5 & 0x100) != 0;
 }
 return 1;
}
