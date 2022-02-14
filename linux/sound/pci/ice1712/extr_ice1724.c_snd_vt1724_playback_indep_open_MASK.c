
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; void* private_data; } ;
struct snd_ice1712 {struct snd_pcm_substream** playback_con_substream_ds; int open_mutex; scalar_t__* pcm_reserved; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ice1712*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_5 (struct snd_pcm_substream*) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_5(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;

 FUNC_0(&VAR_4->open_mutex);

 if (VAR_4->pcm_reserved[VAR_3->number]) {
  FUNC_1(&VAR_4->open_mutex);
  return -VAR_0;
 }
 FUNC_1(&VAR_4->open_mutex);
 VAR_5->private_data = (void *)&VAR_2[VAR_3->number];
 VAR_4->playback_con_substream_ds[VAR_3->number] = VAR_3;
 VAR_5->hw = VAR_1;
 FUNC_4(VAR_3);
 FUNC_3(VAR_5, 0, 32, 24);
 FUNC_2(VAR_4, VAR_3);
 return 0;
}
