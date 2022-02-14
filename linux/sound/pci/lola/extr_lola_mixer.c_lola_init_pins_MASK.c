
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lola {TYPE_1__* pin; } ;
struct TYPE_4__ {scalar_t__ is_analog; } ;
struct TYPE_3__ {int num_pins; int num_analog_pins; TYPE_2__* pins; } ;


 int FUNC_0 (struct lola*,TYPE_2__*,int,int) ;

int FUNC_1(struct lola *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 VAR_5 = *VAR_2;
 for (VAR_3 = 0; VAR_3 < VAR_0->pin[VAR_1].num_pins; VAR_3++, VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, &VAR_0->pin[VAR_1].pins[VAR_3], VAR_1, VAR_5);
  if (VAR_4 < 0)
   return VAR_4;
  if (VAR_0->pin[VAR_1].pins[VAR_3].is_analog)
   VAR_0->pin[VAR_1].num_analog_pins++;
 }
 *VAR_2 = VAR_5;
 return 0;
}
