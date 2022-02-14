
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lola {int card; TYPE_1__* pin; } ;
struct TYPE_5__ {char* name; int private_value; } ;
struct TYPE_4__ {scalar_t__ num_pins; scalar_t__ num_analog_pins; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct lola*) ;

__attribute__((used)) static int FUNC_2(struct lola *VAR_1, int VAR_2, char *VAR_3)
{
 if (!VAR_1->pin[VAR_2].num_pins)
  return 0;

 if (VAR_1->pin[VAR_2].num_pins != VAR_1->pin[VAR_2].num_analog_pins)
  return 0;
 VAR_0.name = VAR_3;
 VAR_0.private_value = VAR_2;
 return FUNC_0(VAR_1->card,
      FUNC_1(&VAR_0, VAR_1));
}
