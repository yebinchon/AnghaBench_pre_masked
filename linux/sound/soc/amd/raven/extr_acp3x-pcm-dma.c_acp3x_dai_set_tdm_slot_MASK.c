
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct snd_soc_dai {int dummy; } ;
struct i2s_dev_data {int tdm_fmt; scalar_t__ acp3x_base; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct i2s_dev_data* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_6, u32 VAR_7,
      u32 VAR_8, int VAR_9, int VAR_10)
{
 u32 VAR_11 = 0;
 u16 VAR_12;

 struct i2s_dev_data *VAR_13 = FUNC_2(VAR_6);

 switch (VAR_10) {
 case 128:
  VAR_12 = 8;
  break;
 case 131:
  VAR_12 = 16;
  break;
 case 130:
  VAR_12 = 24;
  break;
 case 129:
  VAR_12 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_0(VAR_13->acp3x_base + VAR_3);
 FUNC_1((VAR_11 | 0x2), VAR_13->acp3x_base + VAR_3);
 VAR_11 = FUNC_0(VAR_13->acp3x_base + VAR_2);
 FUNC_1((VAR_11 | 0x2), VAR_13->acp3x_base + VAR_2);

 VAR_11 = (VAR_1 | (VAR_9 << 15) | (VAR_12 << 18));
 FUNC_1(VAR_11, VAR_13->acp3x_base + VAR_5);
 FUNC_1(VAR_11, VAR_13->acp3x_base + VAR_4);

 VAR_13->tdm_fmt = VAR_11;
 return 0;
}
