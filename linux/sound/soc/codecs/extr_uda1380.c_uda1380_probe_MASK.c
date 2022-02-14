
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uda1380_priv {int work; struct snd_soc_component* component; } ;
struct uda1380_platform_data {int dac_clk; int gpio_power; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct TYPE_2__ {struct uda1380_platform_data* platform_data; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ) ;
 struct uda1380_priv* FUNC_2 (struct snd_soc_component*) ;
 int VAR_2 ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_3)
{
 struct uda1380_platform_data *VAR_4 =VAR_3->dev->platform_data;
 struct uda1380_priv *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 VAR_5->component = VAR_3;

 if (!FUNC_1(VAR_4->gpio_power)) {
  VAR_6 = FUNC_3(VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_0(&VAR_5->work, VAR_2);


 switch (VAR_4->dac_clk) {
 case 129:
  FUNC_4(VAR_3, VAR_1, 0);
  break;
 case 128:
  FUNC_4(VAR_3, VAR_1,
   VAR_0);
  break;
 }

 return 0;
}
