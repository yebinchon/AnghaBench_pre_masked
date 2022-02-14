
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs43130_private {TYPE_1__* dais; } ;
struct TYPE_2__ {int dai_mode; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct cs43130_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2, unsigned int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 struct cs43130_private *VAR_5 = FUNC_2(VAR_4);

 switch (VAR_3 & VAR_1) {
 case 128:
  VAR_5->dais[VAR_2->id].dai_mode = 128;
  break;
 case 129:
  VAR_5->dais[VAR_2->id].dai_mode = 129;
  break;
 default:
  FUNC_1(VAR_4->dev, "Unsupported DAI format.\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4->dev, "dai_mode = 0x%x\n",
  VAR_5->dais[VAR_2->id].dai_mode);

 return 0;
}
