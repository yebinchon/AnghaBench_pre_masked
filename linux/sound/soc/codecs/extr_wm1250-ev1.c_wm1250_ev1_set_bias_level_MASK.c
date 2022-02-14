
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm1250_priv {TYPE_1__* gpios; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int gpio; } ;






 size_t VAR_0 ;
 struct wm1250_priv* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_1,
         enum snd_soc_bias_level VAR_2)
{
 struct wm1250_priv *VAR_3 = FUNC_0(VAR_1->dev);
 int VAR_4;

 if (VAR_3)
  VAR_4 = VAR_3->gpios[VAR_0].gpio;
 else
  VAR_4 = -1;

 switch (VAR_2) {
 case 130:
  break;

 case 129:
  break;

 case 128:
  if (VAR_4 >= 0)
   FUNC_1(VAR_4, 1);
  break;

 case 131:
  if (VAR_4 >= 0)
   FUNC_1(VAR_4, 0);
  break;
 }

 return 0;
}
