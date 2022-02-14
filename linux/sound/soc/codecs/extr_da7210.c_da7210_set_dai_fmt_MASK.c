
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7210_priv {int master; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;


 int VAR_14 ;

 struct da7210_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_15, u32 VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_15->component;
 struct da7210_priv *VAR_18 = FUNC_0(VAR_17);
 u32 VAR_19;
 u32 VAR_20;

 VAR_19 = 0x7f & FUNC_1(VAR_17, VAR_0);
 VAR_20 = 0xfc & FUNC_1(VAR_17, VAR_1);

 if ((FUNC_1(VAR_17, VAR_8) & VAR_11) &&
  (!(FUNC_1(VAR_17, VAR_10) & VAR_9)))
  return -VAR_12;

 switch (VAR_16 & VAR_14) {
 case 132:
  VAR_18->master = 1;
  VAR_19 |= VAR_6;
  break;
 case 131:
  VAR_18->master = 0;
  VAR_19 |= VAR_7;
  break;
 default:
  return -VAR_12;
 }





 switch (VAR_16 & VAR_13) {
 case 130:
  VAR_20 |= VAR_3;
  break;
 case 129:
  VAR_20 |= VAR_4;
  break;
 case 128:
  VAR_20 |= VAR_5;
  break;
 default:
  return -VAR_12;
 }





 VAR_19 |= VAR_2;

 FUNC_2(VAR_17, VAR_0, VAR_19);
 FUNC_2(VAR_17, VAR_1, VAR_20);

 return 0;
}
