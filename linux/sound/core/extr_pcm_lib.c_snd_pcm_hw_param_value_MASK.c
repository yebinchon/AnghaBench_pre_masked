
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int openmin; } ;
typedef int snd_pcm_hw_param_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params const*,int ) ;
 struct snd_mask* FUNC_3 (struct snd_pcm_hw_params const*,int ) ;
 int FUNC_4 (struct snd_interval const*) ;
 int FUNC_5 (struct snd_interval const*) ;
 int FUNC_6 (struct snd_mask const*) ;
 int FUNC_7 (struct snd_mask const*) ;

int FUNC_8(const struct snd_pcm_hw_params *VAR_1,
      snd_pcm_hw_param_t VAR_2, int *VAR_3)
{
 if (FUNC_1(VAR_2)) {
  const struct snd_mask *VAR_4 = FUNC_3(VAR_1, VAR_2);
  if (!FUNC_6(VAR_4))
   return -VAR_0;
  if (VAR_3)
   *VAR_3 = 0;
  return FUNC_7(VAR_4);
 }
 if (FUNC_0(VAR_2)) {
  const struct snd_interval *VAR_5 = FUNC_2(VAR_1, VAR_2);
  if (!FUNC_4(VAR_5))
   return -VAR_0;
  if (VAR_3)
   *VAR_3 = VAR_5->openmin;
  return FUNC_5(VAR_5);
 }
 return -VAR_0;
}
