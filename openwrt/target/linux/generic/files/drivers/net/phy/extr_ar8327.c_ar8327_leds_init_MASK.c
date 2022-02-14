
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_led {int pattern; int led_num; scalar_t__ enable_hw_mode; } ;
struct ar8327_data {unsigned int num_leds; struct ar8327_led** leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ar8xxx_priv *VAR_3)
{
 struct ar8327_data *VAR_4 = VAR_3->chip_data;
 unsigned VAR_5;

 if (!FUNC_0(VAR_2))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_leds; VAR_5++) {
  struct ar8327_led *VAR_6;

  VAR_6 = VAR_4->leds[VAR_5];

  if (VAR_6->enable_hw_mode)
   VAR_6->pattern = VAR_1;
  else
   VAR_6->pattern = VAR_0;

  FUNC_1(VAR_3, VAR_6->led_num, VAR_6->pattern);
 }
}
