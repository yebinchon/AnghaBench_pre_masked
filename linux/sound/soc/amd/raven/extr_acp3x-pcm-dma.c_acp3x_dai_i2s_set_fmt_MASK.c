
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct i2s_dev_data {int tdm_mode; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;

 struct i2s_dev_data* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2, unsigned int VAR_3)
{

 struct i2s_dev_data *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3 & VAR_1) {
 case 128:
  VAR_4->tdm_mode = 0;
  break;
 case 129:
  VAR_4->tdm_mode = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
