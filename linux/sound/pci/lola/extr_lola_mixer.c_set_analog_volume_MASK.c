
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lola_pin {unsigned int amp_num_steps; unsigned int cur_gain_step; int nid; int is_analog; } ;
struct lola {TYPE_2__* card; TYPE_1__* pin; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned int num_pins; struct lola_pin* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,unsigned int,unsigned int) ;
 int FUNC_1 (struct lola*) ;
 int FUNC_2 (struct lola*,int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct lola *VAR_2, int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        bool VAR_6)
{
 struct lola_pin *VAR_7;
 int VAR_8;

 if (VAR_4 >= VAR_2->pin[VAR_3].num_pins)
  return -VAR_0;
 VAR_7 = &VAR_2->pin[VAR_3].pins[VAR_4];
 if (!VAR_7->is_analog || VAR_7->amp_num_steps <= VAR_5)
  return -VAR_0;
 if (VAR_6 && VAR_7->cur_gain_step == VAR_5)
  return 0;
 if (VAR_6)
  FUNC_1(VAR_2);
 FUNC_0(VAR_2->card->dev,
  "set_analog_volume (dir=%d idx=%d, volume=%d)\n",
   VAR_3, VAR_4, VAR_5);
 VAR_8 = FUNC_2(VAR_2, VAR_7->nid,
          VAR_1, VAR_5, 0);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_6)
  VAR_7->cur_gain_step = VAR_5;
 return 0;
}
