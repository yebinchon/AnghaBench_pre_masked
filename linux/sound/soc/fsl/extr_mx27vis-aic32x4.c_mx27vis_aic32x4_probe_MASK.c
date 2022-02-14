
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mx27vis_platform_data {int amp_muter_gpio; int amp_mutel_gpio; int amp_gain1_gpio; int amp_gain0_gpio; } ;
struct TYPE_5__ {struct snd_mx27vis_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_4__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_11)
{
 struct snd_mx27vis_platform_data *VAR_12 = VAR_11->dev.platform_data;
 int VAR_13;

 if (!VAR_12) {
  FUNC_2(&VAR_11->dev, "No platform data supplied\n");
  return -VAR_0;
 }

 VAR_7 = VAR_12->amp_gain0_gpio;
 VAR_8 = VAR_12->amp_gain1_gpio;
 VAR_9 = VAR_12->amp_mutel_gpio;
 VAR_10 = VAR_12->amp_muter_gpio;

 VAR_6 = &VAR_11->dev;
 VAR_13 = FUNC_4(&VAR_6);
 if (VAR_13) {
  FUNC_2(&VAR_11->dev, "snd_soc_register_card failed (%d)\n",
   VAR_13);
  return VAR_13;
 }


 FUNC_3(VAR_4,
   VAR_1 |
   VAR_3 |
   VAR_2 |
   FUNC_1(VAR_5) |
   FUNC_0(VAR_5)
 );
 FUNC_3(VAR_5,
   VAR_1 |
   FUNC_0(VAR_4)
 );

 return VAR_13;
}
