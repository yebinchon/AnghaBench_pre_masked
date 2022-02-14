
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atmel_ac97c {int cur_format; int cur_rate; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct atmel_ac97c* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1,
  struct snd_pcm_hw_params *VAR_2)
{
 struct atmel_ac97c *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_1,
     FUNC_2(VAR_2));
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_0(&VAR_0);
 VAR_3->cur_rate = FUNC_4(VAR_2);
 VAR_3->cur_format = FUNC_3(VAR_2);
 FUNC_1(&VAR_0);

 return VAR_4;
}
