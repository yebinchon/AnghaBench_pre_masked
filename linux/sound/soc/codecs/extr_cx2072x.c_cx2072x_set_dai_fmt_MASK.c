
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;
struct cx2072x_priv {unsigned int dai_fmt; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 struct cx2072x_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_4, unsigned int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;
 struct cx2072x_priv *VAR_7 = FUNC_2(VAR_6);
 struct device *VAR_8 = VAR_6->dev;

 FUNC_0(VAR_8, "set_dai_fmt- %08x\n", VAR_5);

 switch (VAR_5 & VAR_3) {
 case 136:
 case 135:
  break;

 default:
  FUNC_1(VAR_8, "Unsupported DAI master mode\n");
  return -VAR_0;
 }


 switch (VAR_5 & VAR_1) {
 case 134:
 case 128:
 case 131:
  break;

 default:
  FUNC_1(VAR_8, "Unsupported DAI format\n");
  return -VAR_0;
 }


 switch (VAR_5 & VAR_2) {
 case 129:
 case 133:
 case 132:
 case 130:
  break;

 default:
  FUNC_1(VAR_8, "Unsupported DAI clock inversion\n");
  return -VAR_0;
 }

 VAR_7->dai_fmt = VAR_5;
 return 0;
}
