
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct ak4458_priv {unsigned int fmt; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;


 unsigned int VAR_2 ;

 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (int ,char*,...) ;
 struct ak4458_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3, unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 struct ak4458_priv *VAR_6 = FUNC_2(VAR_5);

 switch (VAR_4 & VAR_2) {
 case 132:
  break;
 case 135:
 case 133:
 case 134:
 default:
  FUNC_1(VAR_5->dev, "Master mode unsupported\n");
  return -VAR_0;
 }

 switch (VAR_4 & VAR_1) {
 case 130:
 case 129:
 case 128:
 case 131:
  VAR_6->fmt = VAR_4 & VAR_1;
  break;
 default:
  FUNC_1(VAR_5->dev, "Audio format 0x%02X unsupported\n",
   VAR_4 & VAR_1);
  return -VAR_0;
 }

 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_5, 1);

 return 0;
}
