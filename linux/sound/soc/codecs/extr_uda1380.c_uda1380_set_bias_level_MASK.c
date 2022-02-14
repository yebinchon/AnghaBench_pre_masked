
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uda1380_platform_data {int gpio_power; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {struct uda1380_platform_data* platform_data; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct snd_soc_component*) ;
 int VAR_4 ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_5,
 enum snd_soc_bias_level VAR_6)
{
 int VAR_7 = FUNC_5(VAR_5, VAR_3);
 int VAR_8;
 struct uda1380_platform_data *VAR_9 = VAR_5->dev->platform_data;

 switch (VAR_6) {
 case 130:
 case 129:

  FUNC_8(VAR_5, VAR_3, VAR_0 | VAR_7);
  break;
 case 128:
  if (FUNC_4(VAR_5) == 131) {
   if (FUNC_0(VAR_9->gpio_power)) {
    FUNC_1(VAR_9->gpio_power, 1);
    FUNC_2(1);
    FUNC_6(VAR_5);
   }

   FUNC_7(VAR_5);
  }
  FUNC_8(VAR_5, VAR_3, 0x0);
  break;
 case 131:
  if (!FUNC_0(VAR_9->gpio_power))
   break;

  FUNC_1(VAR_9->gpio_power, 0);




  for (VAR_8 = VAR_2; VAR_8 < VAR_1; VAR_8++)
   FUNC_3(VAR_8 - 0x10, &VAR_4);
 }
 return 0;
}
