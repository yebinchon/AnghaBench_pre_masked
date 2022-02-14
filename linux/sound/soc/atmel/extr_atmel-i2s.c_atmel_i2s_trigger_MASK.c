
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct atmel_i2s_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;






 int FUNC_0 (struct atmel_i2s_dev*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct atmel_i2s_dev* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_10, int VAR_11,
        struct snd_soc_dai *VAR_12)
{
 struct atmel_i2s_dev *VAR_13 = FUNC_3(VAR_12);
 bool VAR_14 = (VAR_10->stream == VAR_9);
 bool VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19;

 switch (VAR_11) {
 case 130:
 case 131:
 case 132:
  VAR_17 = VAR_14 ? VAR_4 : VAR_2;
  VAR_16 = 1;
  break;
 case 129:
 case 128:
 case 133:
  VAR_17 = VAR_14 ? VAR_3 : VAR_1;
  VAR_16 = 0;
  break;
 default:
  return -VAR_8;
 }


 VAR_19 = FUNC_1(VAR_13->regmap, VAR_5, &VAR_18);
 if (VAR_19)
  return VAR_19;
 VAR_15 = (VAR_18 & VAR_6) == VAR_7;


 if (VAR_15 && VAR_16)
  VAR_19 = FUNC_0(VAR_13, 1);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_13->regmap, VAR_0, VAR_17);
 if (VAR_19)
  return VAR_19;


 if (VAR_15 && !VAR_16)
  VAR_19 = FUNC_0(VAR_13, 0);

 return VAR_19;
}
