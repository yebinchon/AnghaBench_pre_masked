
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_i2s_data {unsigned int fmt; int regmap; int ms_flg; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
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



 int VAR_14 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct stm32_i2s_data* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct stm32_i2s_data *VAR_17 = FUNC_4(VAR_15);
 u32 VAR_18;
 u32 VAR_19 = VAR_3 | VAR_1 |
    VAR_4 | VAR_2;

 FUNC_1(VAR_15->dev, "fmt %x\n", VAR_16);





 switch (VAR_16 & VAR_11) {
 case 134:
  VAR_18 = FUNC_0(VAR_8);
  break;
 case 130:
  VAR_18 = FUNC_0(VAR_9);
  break;
 case 131:
  VAR_18 = FUNC_0(VAR_10);
  break;
 case 135:
  VAR_18 = FUNC_0(VAR_7);
  break;

 default:
  FUNC_2(VAR_15->dev, "Unsupported protocol %#x\n",
   VAR_16 & VAR_11);
  return -VAR_0;
 }


 switch (VAR_16 & VAR_12) {
 case 128:
  break;
 case 132:
  VAR_18 |= VAR_1;
  break;
 case 129:
  VAR_18 |= VAR_4;
  break;
 case 133:
  VAR_18 |= VAR_1;
  VAR_18 |= VAR_4;
  break;
 default:
  FUNC_2(VAR_15->dev, "Unsupported strobing %#x\n",
   VAR_16 & VAR_12);
  return -VAR_0;
 }


 switch (VAR_16 & VAR_13) {
 case 137:
  VAR_17->ms_flg = VAR_6;
  break;
 case 136:
  VAR_17->ms_flg = VAR_5;
  break;
 default:
  FUNC_2(VAR_15->dev, "Unsupported mode %#x\n",
   VAR_16 & VAR_13);
  return -VAR_0;
 }

 VAR_17->fmt = VAR_16;
 return FUNC_3(VAR_17->regmap, VAR_14,
      VAR_19, VAR_18);
}
