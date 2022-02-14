
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola_pin {unsigned int cur_gain_step; scalar_t__ is_analog; } ;
struct lola {TYPE_1__* pin; } ;
struct TYPE_2__ {int num_pins; struct lola_pin* pins; } ;


 int FUNC_0 (struct lola*) ;
 int FUNC_1 (struct lola*,int,int,unsigned int,int) ;

int FUNC_2(struct lola *VAR_0, int VAR_1, bool VAR_2)
{
 struct lola_pin *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_0->pin[VAR_1].pins;
 VAR_5 = VAR_0->pin[VAR_1].num_pins;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_3[VAR_4].is_analog) {
   unsigned int VAR_6 = VAR_2 ? 0 : VAR_3[VAR_4].cur_gain_step;

   FUNC_1(VAR_0, VAR_1, VAR_4, VAR_6, 0);
  }
 }
 return FUNC_0(VAR_0);
}
