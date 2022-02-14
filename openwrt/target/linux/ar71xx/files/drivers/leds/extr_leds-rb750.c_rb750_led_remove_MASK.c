
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb750_led_drvdata {int num_leds; TYPE_1__* led_devs; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int cdev; } ;


 int FUNC_0 (struct rb750_led_drvdata*) ;
 int FUNC_1 (int *) ;
 struct rb750_led_drvdata* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct rb750_led_drvdata *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_leds; VAR_2++)
  FUNC_1(&VAR_1->led_devs[VAR_2].cdev);

 FUNC_0(VAR_1);
 return 0;
}
