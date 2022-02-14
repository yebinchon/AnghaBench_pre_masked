
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atmel_ac97c {int * capture_substream; scalar_t__ cur_format; scalar_t__ cur_rate; int opened; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct atmel_ac97c* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct atmel_ac97c *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_0);
 VAR_2->opened--;
 if (!VAR_2->opened) {
  VAR_2->cur_rate = 0;
  VAR_2->cur_format = 0;
 }
 FUNC_1(&VAR_0);

 VAR_2->capture_substream = ((void*)0);

 return 0;
}
