
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {unsigned int rate_num; unsigned int rate_den; } ;
struct snd_interval {int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,int,int ,unsigned int*,unsigned int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_3,
            struct snd_pcm_hw_rule *VAR_4)
{
 struct snd_interval *VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5->min > 1) {
    unsigned int VAR_6 = 0, VAR_7 = 0;
  int VAR_8 = FUNC_1(FUNC_0(VAR_3, VAR_1),
       2, VAR_2, &VAR_6, &VAR_7);
  if (VAR_8 >= 0 && VAR_7) {
   VAR_3->rate_num = VAR_6;
   VAR_3->rate_den = VAR_7;
  }
  return VAR_8;
 }
 return 0;
}
