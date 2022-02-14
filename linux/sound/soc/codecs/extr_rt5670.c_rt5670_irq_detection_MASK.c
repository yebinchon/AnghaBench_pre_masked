
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_jack_gpio {int debounce_time; } ;
struct snd_soc_jack {int status; } ;
struct TYPE_6__ {int jd_mode; } ;
struct rt5670_priv {int jack_type; TYPE_2__* component; TYPE_1__ pdata; struct snd_soc_jack* jack; struct snd_soc_jack_gpio hp_gpio; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_6)
{
 struct rt5670_priv *VAR_7 = (struct rt5670_priv *)VAR_6;
 struct snd_soc_jack_gpio *VAR_8 = &VAR_7->hp_gpio;
 struct snd_soc_jack *VAR_9 = VAR_7->jack;
 int VAR_10, VAR_11, VAR_12 = VAR_9->status;

 if (VAR_7->pdata.jd_mode == 1)
  VAR_10 = FUNC_3(VAR_7->component, VAR_0) & 0x0070;
 else
  VAR_10 = FUNC_3(VAR_7->component, VAR_0) & 0x0020;

 switch (VAR_10) {

 case 0x30:
 case 0x0:
  if (VAR_7->jack_type == 0) {
   VAR_12 = FUNC_2(VAR_7->component, 1);

   VAR_8->debounce_time = 25;
   break;
  }
  VAR_11 = 0;
  if (FUNC_3(VAR_7->component, VAR_1) & 0x4) {

   VAR_12 = VAR_5;
   VAR_11 = FUNC_1(VAR_7->component);
   switch (VAR_11) {
   case 0x2000:
    VAR_12 |= VAR_3;
    break;
   case 0x0400:
    VAR_12 |= VAR_2;
    break;
   case 0x0080:
    VAR_12 |= VAR_4;
    break;
   default:
    FUNC_0(VAR_7->component->dev,
     "Unexpected button code 0x%04x\n",
     VAR_11);
    break;
   }
  }
  if (VAR_11 == 0)
   VAR_12 = VAR_7->jack_type;

  break;

 case 0x70:
 case 0x10:
 case 0x20:
  VAR_12 = 0;
  FUNC_4(VAR_7->component, VAR_1, 0x1, 0x0);
  FUNC_2(VAR_7->component, 0);
  VAR_8->debounce_time = 150;
  break;
 default:
  break;
 }

 return VAR_12;
}
