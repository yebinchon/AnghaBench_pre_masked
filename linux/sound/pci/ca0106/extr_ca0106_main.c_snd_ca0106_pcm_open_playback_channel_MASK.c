
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; struct snd_pcm_substream* substream; struct snd_ca0106* emu; } ;
struct snd_ca0106_channel {int number; int use; struct snd_ca0106_pcm* epcm; struct snd_ca0106* emu; } ;
struct snd_ca0106 {struct snd_ca0106_channel* playback_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_ca0106_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_ca0106*,int) ;
 int VAR_5 ;
 int FUNC_2 (struct snd_ca0106*,int,int) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_ca0106* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_7,
      int VAR_8)
{
 struct snd_ca0106 *VAR_9 = FUNC_6(VAR_7);
        struct snd_ca0106_channel *VAR_10 = &(VAR_9->playback_channels[VAR_8]);
 struct snd_ca0106_pcm *VAR_11;
 struct snd_pcm_runtime *VAR_12 = VAR_7->runtime;
 int VAR_13;

 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_1);

 if (VAR_11 == ((void*)0))
  return -VAR_0;
 VAR_11->emu = VAR_9;
 VAR_11->substream = VAR_7;
        VAR_11->channel_id=VAR_8;

 VAR_12->private_data = VAR_11;
 VAR_12->private_free = VAR_5;

 VAR_12->hw = VAR_6;

        VAR_10->emu = VAR_9;
        VAR_10->number = VAR_8;

 VAR_10->use = 1;





 VAR_10->epcm = VAR_11;
 if ((VAR_13 = FUNC_3(VAR_12, VAR_3)) < 0)
                return VAR_13;
 if ((VAR_13 = FUNC_4(VAR_12, 0, VAR_4, 64)) < 0)
                return VAR_13;
 FUNC_5(VAR_7);


 if (VAR_8 != VAR_2) {
  VAR_13 = FUNC_2(VAR_9, VAR_8, 1);
  if (VAR_13 < 0)
   return VAR_13;
 }

 FUNC_1(VAR_9, VAR_8);

 return 0;
}
