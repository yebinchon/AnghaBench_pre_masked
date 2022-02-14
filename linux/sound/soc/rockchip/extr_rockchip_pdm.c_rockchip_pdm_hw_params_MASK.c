
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rk_pdm_dev {scalar_t__ version; int regmap; int dev; int reset; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;





 scalar_t__ VAR_30 ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,char*,int) ;
 unsigned int FUNC_5 (struct rk_pdm_dev*,unsigned int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (unsigned int,unsigned int,int ,int ,unsigned long*,unsigned long*) ;
 int FUNC_11 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_12 (int ,int ,int,unsigned int,int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct rk_pdm_dev*,int ) ;
 struct rk_pdm_dev* FUNC_16 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_17(struct snd_pcm_substream *VAR_31,
      struct snd_pcm_hw_params *VAR_32,
      struct snd_soc_dai *VAR_33)
{
 struct rk_pdm_dev *VAR_34 = FUNC_16(VAR_33);
 unsigned int VAR_35 = 0;
 unsigned int VAR_36, VAR_37, VAR_38;
 unsigned int VAR_39, VAR_40 = 0;
 unsigned long VAR_41, VAR_42;
 bool VAR_43;
 int VAR_44;

 if (VAR_31->stream == VAR_30)
  return 0;

 VAR_38 = FUNC_9(VAR_32);
 VAR_36 = FUNC_5(VAR_34, VAR_38, &VAR_39, &VAR_40);
 if (!VAR_36)
  return -VAR_0;

 VAR_44 = FUNC_3(VAR_34->clk, VAR_39);
 if (VAR_44)
  return -VAR_0;

 if (VAR_34->version == VAR_29) {
  FUNC_10(VAR_40, VAR_39,
         FUNC_0(16 - 1, 0),
         FUNC_0(16 - 1, 0),
         &VAR_41, &VAR_42);

  VAR_35 = (VAR_41 << VAR_14) |
   (VAR_42 << VAR_12);
  FUNC_12(VAR_34->regmap, VAR_7,
      VAR_13 |
      VAR_11,
      VAR_35, &VAR_43);
  if (VAR_43) {
   FUNC_13(VAR_34->reset);
   FUNC_14(VAR_34->reset);
   FUNC_15(VAR_34, 0);
  }
  VAR_37 = VAR_42 / VAR_41;
  if (VAR_37 >= 40)
   VAR_35 = VAR_4;
  else if (VAR_37 <= 35)
   VAR_35 = VAR_3;
  else
   return -VAR_0;
  FUNC_11(VAR_34->regmap, VAR_1,
       VAR_5,
       VAR_35);
 }
 VAR_35 = FUNC_6(VAR_38);
 FUNC_11(VAR_34->regmap, VAR_1, VAR_10, VAR_35);
 FUNC_11(VAR_34->regmap, VAR_17,
      VAR_16, VAR_15);
 FUNC_11(VAR_34->regmap, VAR_17,
      VAR_18 | VAR_19, VAR_18 | VAR_19);
 FUNC_11(VAR_34->regmap, VAR_1, VAR_2, VAR_2);
 if (VAR_34->version != VAR_28)
  FUNC_11(VAR_34->regmap, VAR_6,
       VAR_21, VAR_20);

 VAR_35 = 0;
 switch (FUNC_8(VAR_32)) {
 case 128:
  VAR_35 |= FUNC_2(8);
  break;
 case 132:
  VAR_35 |= FUNC_2(16);
  break;
 case 131:
  VAR_35 |= FUNC_2(20);
  break;
 case 130:
  VAR_35 |= FUNC_2(24);
  break;
 case 129:
  VAR_35 |= FUNC_2(32);
  break;
 default:
  return -VAR_0;
 }

 switch (FUNC_7(VAR_32)) {
 case 8:
  VAR_35 |= VAR_25;

 case 6:
  VAR_35 |= VAR_24;

 case 4:
  VAR_35 |= VAR_23;

 case 2:
  VAR_35 |= VAR_22;
  break;
 default:
  FUNC_4(VAR_34->dev, "invalid channel: %d\n",
   FUNC_7(VAR_32));
  return -VAR_0;
 }

 FUNC_11(VAR_34->regmap, VAR_6,
      VAR_26 | VAR_27,
      VAR_35);

 FUNC_11(VAR_34->regmap, VAR_8, VAR_9,
      FUNC_1(8 * FUNC_7(VAR_32)));

 return 0;
}
