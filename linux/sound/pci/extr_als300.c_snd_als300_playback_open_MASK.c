
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_als300_substream_data* private_data; int hw; } ;
struct snd_als300_substream_data {int block_counter_register; int control_register; } ;
struct snd_als300 {struct snd_pcm_substream* playback_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_als300_substream_data* FUNC_0 (int,int ) ;
 int VAR_4 ;
 struct snd_als300* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_5)
{
 struct snd_als300 *VAR_6 = FUNC_1(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct snd_als300_substream_data *VAR_8 = FUNC_0(sizeof(*VAR_8),
        VAR_1);

 if (!VAR_8)
  return -VAR_0;
 VAR_6->playback_substream = VAR_5;
 VAR_7->hw = VAR_4;
 VAR_7->private_data = VAR_8;
 VAR_8->control_register = VAR_3;
 VAR_8->block_counter_register = VAR_2;
 return 0;
}
