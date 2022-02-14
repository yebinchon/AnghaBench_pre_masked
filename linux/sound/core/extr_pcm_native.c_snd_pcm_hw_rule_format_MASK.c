
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int * deps; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {unsigned int min; unsigned int max; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_mask*) ;
 int FUNC_3 (struct snd_mask*,struct snd_mask*) ;
 int FUNC_4 (struct snd_mask*,unsigned int) ;
 int FUNC_5 (struct snd_mask*,unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_2,
      struct snd_pcm_hw_rule *VAR_3)
{
 unsigned int VAR_4;
 const struct snd_interval *VAR_5 =
    FUNC_0(VAR_2, VAR_3->deps[0]);
 struct snd_mask VAR_6;
 struct snd_mask *VAR_7 = FUNC_1(VAR_2, VAR_1);
 FUNC_2(&VAR_6);
 for (VAR_4 = 0; VAR_4 <= VAR_0; ++VAR_4) {
  int VAR_8;
  if (! FUNC_5(VAR_7, VAR_4))
   continue;
  VAR_8 = FUNC_6(VAR_4);
  if (VAR_8 <= 0)
   continue;
  if ((unsigned)VAR_8 < VAR_5->min || (unsigned)VAR_8 > VAR_5->max)
   FUNC_4(&VAR_6, VAR_4);
 }
 return FUNC_3(VAR_7, &VAR_6);
}
