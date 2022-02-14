
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct sgtl5000_priv {int master; unsigned int fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 unsigned int VAR_10 ;


 unsigned int VAR_11 ;

 unsigned int VAR_12 ;


 struct sgtl5000_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_13, unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 struct sgtl5000_priv *VAR_16 = FUNC_0(VAR_15);
 u16 VAR_17 = 0;

 VAR_16->master = 0;






 switch (VAR_14 & VAR_12) {
 case 135:
  break;
 case 136:
  VAR_17 |= VAR_4;
  VAR_16->master = 1;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_14 & VAR_10) {
 case 134:
  VAR_17 |= VAR_6 << VAR_8;
  break;
 case 133:
  VAR_17 |= VAR_6 << VAR_8;
  VAR_17 |= VAR_2;
  break;
 case 132:
  VAR_17 |= VAR_5 << VAR_8;
  break;
 case 128:
  VAR_17 |= VAR_7 << VAR_8;
  VAR_17 |= VAR_3;
  break;
 case 130:
  VAR_17 |= VAR_5 << VAR_8;
  VAR_17 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_16->fmt = VAR_14 & VAR_10;


 switch (VAR_14 & VAR_11) {
 case 129:
  break;
 case 131:
  VAR_17 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_15, VAR_1, VAR_17);

 return 0;
}
