
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_priv {unsigned int dai_fmt; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 struct ssp_priv* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4,
          unsigned int VAR_5)
{
 struct ssp_priv *VAR_6 = FUNC_0(VAR_4);

 switch (VAR_5 & VAR_3) {
 case 137:
 case 136:
 case 135:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_5 & VAR_2) {
 case 128:
 case 129:
 case 131:
 case 130:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_5 & VAR_1) {
 case 132:
 case 134:
 case 133:
  break;

 default:
  return -VAR_0;
 }


 VAR_6->dai_fmt = VAR_5;

 return 0;
}
