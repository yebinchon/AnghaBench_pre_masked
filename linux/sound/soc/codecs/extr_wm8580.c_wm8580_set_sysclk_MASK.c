
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8580_priv {unsigned int* sysclk; } ;
struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;






 int FUNC_1 (int ,char*,int) ;
 struct wm8580_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_2, int VAR_3,
        unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct wm8580_priv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9, VAR_10, VAR_11;

 switch (VAR_2->driver->id) {
 case 129:
  VAR_10 = 0x3;
  VAR_11 = 0;
  break;

 case 128:
  VAR_10 = 0xc;
  VAR_11 = 2;
  break;

 default:
  FUNC_0(1, "Unknown DAI driver ID\n");
  return -VAR_0;
 }

 switch (VAR_3) {
 case 133:
  if (VAR_2->driver->id != 128)
   return -VAR_0;
  VAR_9 = 0 << VAR_11;
  break;
 case 131:
  VAR_9 = 1 << VAR_11;
  break;
 case 130:
  VAR_9 = 2 << VAR_11;
  break;
 case 132:
  VAR_9 = 3 << VAR_11;
  break;
 default:
  FUNC_1(VAR_6->dev, "Unknown clock %d\n", VAR_3);
  return -VAR_0;
 }


 VAR_7->sysclk[VAR_2->driver->id] = VAR_4;

 VAR_8 = FUNC_3(VAR_6, VAR_1, VAR_10, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
