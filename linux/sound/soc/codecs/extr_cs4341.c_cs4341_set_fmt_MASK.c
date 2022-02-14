
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs4341_priv {unsigned int fmt; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;


 struct cs4341_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4, unsigned int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;
 struct cs4341_priv *VAR_7 = FUNC_0(VAR_6);

 switch (VAR_5 & VAR_3) {
 case 132:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_5 & VAR_2) {
 case 129:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_5 & VAR_1) {
 case 131:
 case 130:
 case 128:
  VAR_7->fmt = VAR_5 & VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
