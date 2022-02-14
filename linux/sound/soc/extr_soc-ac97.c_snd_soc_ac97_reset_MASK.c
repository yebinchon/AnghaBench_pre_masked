
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct pinctrl {int dummy; } ;
struct TYPE_2__ {int pstate_run; int gpio_reset; int gpio_sdata; int gpio_sync; int pstate_reset; struct pinctrl* pctl; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pinctrl*,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_1)
{
 struct pinctrl *VAR_2 = VAR_0.pctl;

 FUNC_2(VAR_2, VAR_0.pstate_reset);

 FUNC_0(VAR_0.gpio_sync, 0);
 FUNC_0(VAR_0.gpio_sdata, 0);
 FUNC_0(VAR_0.gpio_reset, 0);

 FUNC_3(10);

 FUNC_0(VAR_0.gpio_reset, 1);

 FUNC_2(VAR_2, VAR_0.pstate_run);
 FUNC_1(2);
}
