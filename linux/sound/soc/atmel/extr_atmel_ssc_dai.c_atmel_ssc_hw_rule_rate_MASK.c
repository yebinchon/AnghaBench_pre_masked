
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssc_device {int clk_from_rk_pin; } ;
struct snd_ratnum {int den_min; int den_max; int den_step; int num; } ;
struct snd_pcm_hw_rule {int var; struct atmel_ssc_info* private; } ;
struct snd_pcm_hw_params {unsigned int rate_num; unsigned int rate_den; } ;
struct snd_interval {int min; int max; int integer; int openmax; int openmin; } ;
struct atmel_ssc_info {int daifmt; int dir_mask; int mck_rate; struct ssc_device* ssc; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,int,struct snd_ratnum*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_5,
      struct snd_pcm_hw_rule *VAR_6)
{
 struct atmel_ssc_info *VAR_7 = VAR_6->private;
 struct ssc_device *VAR_8 = VAR_7->ssc;
 struct snd_interval *VAR_9 = FUNC_0(VAR_5, VAR_6->var);
 struct snd_interval VAR_10;
 struct snd_ratnum VAR_11 = {
  .den_min = 1,
  .den_max = 4095,
  .den_step = 1,
 };
 unsigned int VAR_12 = 0, VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 2;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_5);
 if (VAR_14 < 0)
  return VAR_14;

 switch (VAR_7->daifmt & VAR_2) {
 case 129:
  if ((VAR_7->dir_mask & VAR_3)
      && VAR_8->clk_from_rk_pin)




   VAR_15 = 3;
  break;

 case 130:
  if ((VAR_7->dir_mask & VAR_4)
      && !VAR_8->clk_from_rk_pin)





   VAR_15 = 6;
  break;
 }

 switch (VAR_7->daifmt & VAR_2) {
 case 128:
  VAR_11.num = VAR_7->mck_rate / VAR_15 / VAR_14;

  VAR_16 = FUNC_1(VAR_9, 1, &VAR_11, &VAR_12, &VAR_13);
  if (VAR_16 >= 0 && VAR_13 && VAR_6->var == VAR_1) {
   VAR_5->rate_num = VAR_12;
   VAR_5->rate_den = VAR_13;
  }
  break;

 case 129:
 case 130:
  VAR_10.min = 8000;
  VAR_10.max = VAR_7->mck_rate / VAR_15 / VAR_14;
  VAR_10.openmin = VAR_10.openmax = 0;
  VAR_10.integer = 0;
  VAR_16 = FUNC_2(VAR_9, &VAR_10);
  break;

 default:
  VAR_16 = -VAR_0;
  break;
 }

 return VAR_16;
}
