
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_led {int dummy; } ;
struct ar8327_data {unsigned int num_leds; struct ar8327_led** leds; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ar8327_led*) ;
 int FUNC_2 (struct ar8327_led**) ;

__attribute__((used)) static void
FUNC_3(struct ar8xxx_priv *VAR_1)
{
 struct ar8327_data *VAR_2 = VAR_1->chip_data;
 unsigned VAR_3;

 if (!FUNC_0(VAR_0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_leds; VAR_3++) {
  struct ar8327_led *VAR_4;

  VAR_4 = VAR_2->leds[VAR_3];
  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_2->leds);
}
