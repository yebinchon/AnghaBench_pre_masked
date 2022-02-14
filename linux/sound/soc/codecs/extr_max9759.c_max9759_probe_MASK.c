
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct max9759 {int is_mute; TYPE_1__* gpiod_gain; scalar_t__ gain; TYPE_1__* gpiod_mute; TYPE_1__* gpiod_shutdown; } ;
struct TYPE_4__ {int ndescs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 TYPE_1__* FUNC_4 (struct device*,char*,int ) ;
 struct max9759* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int *,int *,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct platform_device*,struct max9759*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct max9759 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 FUNC_7(VAR_6, VAR_8);

 VAR_8->gpiod_shutdown = FUNC_3(VAR_7, "shutdown", VAR_4);
 if (FUNC_0(VAR_8->gpiod_shutdown)) {
  VAR_9 = FUNC_1(VAR_8->gpiod_shutdown);
  if (VAR_9 != -VAR_2)
   FUNC_2(VAR_7, "Failed to get 'shutdown' gpio: %d", VAR_9);
  return VAR_9;
 }

 VAR_8->gpiod_mute = FUNC_3(VAR_7, "mute", VAR_4);
 if (FUNC_0(VAR_8->gpiod_mute)) {
  VAR_9 = FUNC_1(VAR_8->gpiod_mute);
  if (VAR_9 != -VAR_2)
   FUNC_2(VAR_7, "Failed to get 'mute' gpio: %d", VAR_9);
  return VAR_9;
 }
 VAR_8->is_mute = 1;

 VAR_8->gpiod_gain = FUNC_4(VAR_7, "gain", VAR_4);
 if (FUNC_0(VAR_8->gpiod_gain)) {
  VAR_9 = FUNC_1(VAR_8->gpiod_gain);
  if (VAR_9 != -VAR_2)
   FUNC_2(VAR_7, "Failed to get 'gain' gpios: %d", VAR_9);
  return VAR_9;
 }
 VAR_8->gain = 0;

 if (VAR_8->gpiod_gain->ndescs != 2) {
  FUNC_2(VAR_7, "Invalid 'gain' gpios count: %d",
   VAR_8->gpiod_gain->ndescs);
  return -VAR_0;
 }

 return FUNC_6(VAR_7, &VAR_5,
            ((void*)0), 0);
}
