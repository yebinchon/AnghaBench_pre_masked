
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


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
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;


 unsigned int VAR_14 ;
 unsigned int VAR_15 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_16,
         unsigned int VAR_17)
{
 struct snd_soc_component *VAR_18 = VAR_16->component;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21;
 u8 VAR_22;

 if ((VAR_17 & VAR_15) != VAR_11) {
  FUNC_0(VAR_18->dev, "Codec driver only supports slave mode\n");
  return -VAR_0;
 }

 if ((VAR_17 & VAR_12) != VAR_13) {
  FUNC_0(VAR_18->dev, "Codec driver only supports I2S format\n");
  return -VAR_0;
 }


 switch (VAR_17 & VAR_14) {
 case 128:
  break;
 case 131:
  VAR_19 |= VAR_5;
  VAR_20 |= VAR_7;
  break;
 case 130:
  VAR_19 |= VAR_5;
  break;
 case 129:
  VAR_20 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 VAR_22 = VAR_6 | VAR_5;
 FUNC_1(VAR_18, VAR_4, VAR_22, VAR_19);

 VAR_22 = VAR_8 | VAR_7;
 FUNC_1(VAR_18, VAR_9, VAR_22, VAR_20);
 FUNC_1(VAR_18, VAR_10, VAR_22, VAR_20);


 VAR_21 = VAR_3 | VAR_2;
 FUNC_1(VAR_18, VAR_1, VAR_21, VAR_21);

 return 0;
}
