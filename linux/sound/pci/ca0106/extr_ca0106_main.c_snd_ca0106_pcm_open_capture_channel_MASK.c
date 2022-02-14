
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; struct snd_pcm_substream* substream; struct snd_ca0106* emu; } ;
struct snd_ca0106_channel {int number; int use; struct snd_ca0106_pcm* epcm; struct snd_ca0106* emu; } ;
struct snd_ca0106 {struct snd_ca0106_channel* capture_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_ca0106_pcm* FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_ca0106* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6,
            int VAR_7)
{
 struct snd_ca0106 *VAR_8 = FUNC_3(VAR_6);
        struct snd_ca0106_channel *VAR_9 = &(VAR_8->capture_channels[VAR_7]);
 struct snd_ca0106_pcm *VAR_10;
 struct snd_pcm_runtime *VAR_11 = VAR_6->runtime;
 int VAR_12;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->emu = VAR_8;
 VAR_10->substream = VAR_6;
        VAR_10->channel_id=VAR_7;

 VAR_11->private_data = VAR_10;
 VAR_11->private_free = VAR_5;

 VAR_11->hw = VAR_4;

        VAR_9->emu = VAR_8;
        VAR_9->number = VAR_7;

 VAR_9->use = 1;





        VAR_9->epcm = VAR_10;
 if ((VAR_12 = FUNC_1(VAR_11, VAR_2)) < 0)
                return VAR_12;

 if ((VAR_12 = FUNC_2(VAR_11, 0, VAR_3, 64)) < 0)
                return VAR_12;
 return 0;
}
