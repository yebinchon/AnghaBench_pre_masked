
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm0010_priv {int state; int irq_lock; int core_supplies; int dbvdd; int gpio_reset_value; int gpio_reset; } ;
struct snd_soc_component {int dummy; } ;
typedef enum wm0010_state { ____Placeholder_wm0010_state } wm0010_state ;


 int FUNC_0 (int ) ;





 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct wm0010_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_0)
{
 struct wm0010_priv *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;
 enum wm0010_state VAR_3;


 FUNC_5(&VAR_1->irq_lock, VAR_2);
 VAR_3 = VAR_1->state;
 FUNC_6(&VAR_1->irq_lock, VAR_2);

 switch (VAR_3) {
 case 129:

  return;
 case 130:
 case 132:
 case 128:
 case 131:

  FUNC_1(VAR_1->gpio_reset,
     VAR_1->gpio_reset_value);

  FUNC_3(VAR_1->dbvdd);
  FUNC_2(FUNC_0(VAR_1->core_supplies),
           VAR_1->core_supplies);
  break;
 }

 FUNC_5(&VAR_1->irq_lock, VAR_2);
 VAR_1->state = 129;
 FUNC_6(&VAR_1->irq_lock, VAR_2);
}
