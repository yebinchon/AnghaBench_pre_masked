
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* dai_link; } ;
struct snd_soc_dai {TYPE_2__* driver; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rk_i2s_dev {int regmap; TYPE_1__* pins; int grf; int dev; int mclk; scalar_t__ is_master_mode; } ;
struct TYPE_6__ {scalar_t__ symmetric_rates; } ;
struct TYPE_5__ {scalar_t__ symmetric_rates; } ;
struct TYPE_4__ {unsigned int shift; int reg_offset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_10 ;
 unsigned int FUNC_4 (int) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int FUNC_5 (int) ;
 unsigned int VAR_22 ;
 int FUNC_6 (int ) ;





 scalar_t__ VAR_23 ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_11 (struct snd_pcm_hw_params*) ;
 int FUNC_12 (int ,int ,unsigned int*) ;
 int FUNC_13 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_14 (int ,int ,unsigned int) ;
 struct rk_i2s_dev* FUNC_15 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_16(struct snd_pcm_substream *VAR_24,
      struct snd_pcm_hw_params *VAR_25,
      struct snd_soc_dai *VAR_26)
{
 struct rk_i2s_dev *VAR_27 = FUNC_15(VAR_26);
 struct snd_soc_pcm_runtime *VAR_28 = VAR_24->private_data;
 unsigned int VAR_29 = 0;
 unsigned int VAR_30, VAR_31, VAR_32, VAR_33;

 if (VAR_27->is_master_mode) {
  VAR_30 = FUNC_7(VAR_27->mclk);
  VAR_31 = 2 * 32 * FUNC_11(VAR_25);
  if (VAR_31 && VAR_30 % VAR_31)
   return -VAR_0;

  VAR_32 = VAR_30 / VAR_31;
  VAR_33 = VAR_31 / FUNC_11(VAR_25);
  FUNC_13(VAR_27->regmap, VAR_2,
       VAR_3,
       FUNC_0(VAR_32));

  FUNC_13(VAR_27->regmap, VAR_2,
       VAR_8 |
       VAR_4,
       FUNC_2(VAR_33) |
       FUNC_1(VAR_33));
 }

 switch (FUNC_10(VAR_25)) {
 case 128:
  VAR_29 |= FUNC_5(8);
  break;
 case 132:
  VAR_29 |= FUNC_5(16);
  break;
 case 131:
  VAR_29 |= FUNC_5(20);
  break;
 case 130:
  VAR_29 |= FUNC_5(24);
  break;
 case 129:
  VAR_29 |= FUNC_5(32);
  break;
 default:
  return -VAR_0;
 }

 switch (FUNC_9(VAR_25)) {
 case 8:
  VAR_29 |= 133;
  break;
 case 6:
  VAR_29 |= 134;
  break;
 case 4:
  VAR_29 |= 135;
  break;
 case 2:
  VAR_29 |= VAR_1;
  break;
 default:
  FUNC_8(VAR_27->dev, "invalid channel: %d\n",
   FUNC_9(VAR_25));
  return -VAR_0;
 }

 if (VAR_24->stream == VAR_23)
  FUNC_13(VAR_27->regmap, VAR_17,
       VAR_19 | VAR_18,
       VAR_29);
 else
  FUNC_13(VAR_27->regmap, VAR_20,
       VAR_22 | VAR_21,
       VAR_29);

 if (!FUNC_6(VAR_27->grf) && VAR_27->pins) {
  FUNC_12(VAR_27->regmap, VAR_20, &VAR_29);
  VAR_29 &= VAR_21;

  switch (VAR_29) {
  case 135:
   VAR_29 = VAR_13;
   break;
  case 134:
   VAR_29 = VAR_14;
   break;
  case 133:
   VAR_29 = VAR_15;
   break;
  default:
   VAR_29 = VAR_12;
   break;
  }

  VAR_29 <<= VAR_27->pins->shift;
  VAR_29 |= (VAR_16 << VAR_27->pins->shift) << 16;
  FUNC_14(VAR_27->grf, VAR_27->pins->reg_offset, VAR_29);
 }

 FUNC_13(VAR_27->regmap, VAR_9, VAR_11,
      FUNC_4(16));
 FUNC_13(VAR_27->regmap, VAR_9, VAR_10,
      FUNC_3(16));

 VAR_29 = VAR_7;
 if (VAR_26->driver->symmetric_rates && VAR_28->dai_link->symmetric_rates)
  VAR_29 = VAR_6;

 FUNC_13(VAR_27->regmap, VAR_2,
      VAR_5,
      VAR_29);
 return 0;
}
