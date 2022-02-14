
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs42l51_private {unsigned int audio_mode; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;


 unsigned int VAR_4 ;

 int FUNC_0 (int ,char*) ;
 struct cs42l51_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
  unsigned int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 struct cs42l51_private *VAR_8 = FUNC_1(VAR_7);

 switch (VAR_6 & VAR_3) {
 case 130:
 case 129:
 case 128:
  VAR_8->audio_mode = VAR_6 & VAR_3;
  break;
 default:
  FUNC_0(VAR_7->dev, "invalid DAI format\n");
  return -VAR_0;
 }

 switch (VAR_6 & VAR_4) {
 case 132:
  VAR_8->func = VAR_1;
  break;
 case 131:
  VAR_8->func = VAR_2;
  break;
 default:
  FUNC_0(VAR_7->dev, "Unknown master/slave configuration\n");
  return -VAR_0;
 }

 return 0;
}
