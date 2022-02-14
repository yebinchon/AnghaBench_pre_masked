
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_led_info {scalar_t__ led_num; scalar_t__ mode; int default_trigger; int name; int active_low; } ;
struct TYPE_2__ {char* name; int default_trigger; int blink_set; int brightness_set; } ;
struct ar8327_led {scalar_t__ led_num; scalar_t__ mode; int enable_hw_mode; char* name; int led_work; int mutex; int lock; TYPE_1__ cdev; int active_low; struct ar8xxx_priv* sw_priv; } ;
struct ar8327_data {int num_leds; struct ar8327_led** leds; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct ar8327_led*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ar8327_led*) ;
 struct ar8327_led* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ar8xxx_priv *VAR_9,
    const struct ar8327_led_info *VAR_10)
{
 struct ar8327_data *VAR_11 = VAR_9->chip_data;
 struct ar8327_led *VAR_12;
 int VAR_13;

 if (!FUNC_1(VAR_2))
  return 0;

 if (!VAR_10->name)
  return -VAR_3;

 if (VAR_10->led_num >= VAR_1)
  return -VAR_3;

 VAR_12 = FUNC_4(sizeof(*VAR_12) + FUNC_8(VAR_10->name) + 1,
         VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->sw_priv = VAR_9;
 VAR_12->led_num = VAR_10->led_num;
 VAR_12->active_low = VAR_10->active_low;
 VAR_12->mode = VAR_10->mode;

 if (VAR_12->mode == VAR_0)
  VAR_12->enable_hw_mode = 1;

 VAR_12->name = (char *)(VAR_12 + 1);
 FUNC_7(VAR_12->name, VAR_10->name);

 VAR_12->cdev.name = VAR_12->name;
 VAR_12->cdev.brightness_set = VAR_7;
 VAR_12->cdev.blink_set = VAR_6;
 VAR_12->cdev.default_trigger = VAR_10->default_trigger;

 FUNC_6(&VAR_12->lock);
 FUNC_5(&VAR_12->mutex);
 FUNC_0(&VAR_12->led_work, VAR_8);

 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13)
  goto err_free;

 VAR_11->leds[VAR_11->num_leds++] = VAR_12;

 return 0;

err_free:
 FUNC_3(VAR_12);
 return VAR_13;
}
