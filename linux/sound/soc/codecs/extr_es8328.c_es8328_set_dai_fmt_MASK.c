
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct es8328_priv {int master; } ;


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


 unsigned int VAR_13 ;

 unsigned int VAR_14 ;

 unsigned int VAR_15 ;
 unsigned int VAR_16 ;

 struct es8328_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_17,
  unsigned int VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_17->component;
 struct es8328_priv *VAR_20 = FUNC_0(VAR_19);
 u8 VAR_21 = 0;
 u8 VAR_22 = 0;

 switch (VAR_18 & VAR_15) {
 case 132:

  FUNC_1(VAR_19, VAR_11,
        VAR_12,
        VAR_12);
  VAR_20->master = 1;
  break;
 case 131:

  FUNC_1(VAR_19, VAR_11,
        VAR_12, 0);
  VAR_20->master = 0;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_18 & VAR_13) {
 case 130:
  VAR_21 |= VAR_7;
  VAR_22 |= VAR_2;
  break;
 case 128:
  VAR_21 |= VAR_10;
  VAR_22 |= VAR_5;
  break;
 case 129:
  VAR_21 |= VAR_8;
  VAR_22 |= VAR_3;
  break;
 default:
  return -VAR_0;
 }


 if ((VAR_18 & VAR_14) != VAR_16)
  return -VAR_0;

 FUNC_1(VAR_19, VAR_6,
   VAR_9, VAR_21);
 FUNC_1(VAR_19, VAR_1,
   VAR_4, VAR_22);

 return 0;
}
