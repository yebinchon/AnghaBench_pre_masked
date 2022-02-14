
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfa9879_priv {int lsb_justified; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;


 unsigned int VAR_2 ;

 unsigned int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct tfa9879_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct tfa9879_priv *VAR_17 = FUNC_0(VAR_16);
 int VAR_18;
 int VAR_19;

 switch (VAR_15 & VAR_3) {
 case 133:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_2) {
 case 129:
  VAR_19 = VAR_11;
  break;
 case 131:
  VAR_19 = VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_1) {
 case 132:
  VAR_17->lsb_justified = 0;
  VAR_18 = VAR_4;
  break;
 case 130:
  VAR_17->lsb_justified = 0;
  VAR_18 = VAR_7;
  break;
 case 128:
  VAR_17->lsb_justified = 1;
  VAR_18 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_13,
          VAR_10,
          VAR_19 << VAR_12);
 FUNC_1(VAR_16, VAR_13,
          VAR_6,
          VAR_18 << VAR_8);
 return 0;
}
