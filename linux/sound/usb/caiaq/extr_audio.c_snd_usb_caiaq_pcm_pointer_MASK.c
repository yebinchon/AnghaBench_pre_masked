
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int spinlock; int * audio_in_buf_pos; int * audio_out_buf_pos; scalar_t__ output_panic; scalar_t__ input_panic; } ;
struct snd_pcm_substream {int number; scalar_t__ stream; int runtime; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct snd_usb_caiaqdev* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_2)
{
 int VAR_3 = VAR_2->number;
 struct snd_usb_caiaqdev *VAR_4 = FUNC_1(VAR_2);
 snd_pcm_uframes_t VAR_5;

 FUNC_2(&VAR_4->spinlock);

 if (VAR_4->input_panic || VAR_4->output_panic) {
  VAR_5 = VAR_0;
  goto unlock;
 }

 if (VAR_2->stream == VAR_1)
  VAR_5 = FUNC_0(VAR_2->runtime,
     VAR_4->audio_out_buf_pos[VAR_3]);
 else
  VAR_5 = FUNC_0(VAR_2->runtime,
     VAR_4->audio_in_buf_pos[VAR_3]);

unlock:
 FUNC_3(&VAR_4->spinlock);
 return VAR_5;
}
