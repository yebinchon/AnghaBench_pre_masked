
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs43130_private {TYPE_1__* dais; } ;
struct TYPE_2__ {int dai_mode; int dai_format; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,int,int) ;
 int FUNC_1 (int ,char*) ;
 struct cs43130_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3, unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 struct cs43130_private *VAR_6 = FUNC_2(VAR_5);

 switch (VAR_4 & VAR_2) {
 case 132:
  VAR_6->dais[VAR_3->id].dai_mode = 132;
  break;
 case 133:
  VAR_6->dais[VAR_3->id].dai_mode = 133;
  break;
 default:
  FUNC_1(VAR_5->dev, "unsupported mode\n");
  return -VAR_0;
 }

 switch (VAR_4 & VAR_1) {
 case 129:
  VAR_6->dais[VAR_3->id].dai_format = 129;
  break;
 case 128:
  VAR_6->dais[VAR_3->id].dai_format = 128;
  break;
 case 131:
  VAR_6->dais[VAR_3->id].dai_format = 131;
  break;
 case 130:
  VAR_6->dais[VAR_3->id].dai_format = 130;
  break;
 default:
  FUNC_1(VAR_5->dev,
   "unsupported audio format\n");
  return -VAR_0;
 }

 FUNC_0(VAR_5->dev, "dai_id = %d,  dai_mode = %u, dai_format = %u\n",
  VAR_3->id,
  VAR_6->dais[VAR_3->id].dai_mode,
  VAR_6->dais[VAR_3->id].dai_format);

 return 0;
}
