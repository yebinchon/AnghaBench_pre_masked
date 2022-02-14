
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_pcm {struct snd_pcm_substream* substream; int type; struct snd_ymfpci* chip; } ;
struct snd_ymfpci {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int private_free; struct snd_ymfpci_pcm* private_data; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_ymfpci_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int) ;
 struct snd_ymfpci* FUNC_3 (struct snd_pcm_substream*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_7)
{
 struct snd_ymfpci *VAR_8 = FUNC_3(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 struct snd_ymfpci_pcm *VAR_10;
 int VAR_11;

 VAR_9->hw = VAR_6;

 VAR_11 = FUNC_1(VAR_9,
        VAR_3,
        5334, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_2(VAR_9, 48000);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;
 VAR_10->chip = VAR_8;
 VAR_10->type = VAR_2;
 VAR_10->substream = VAR_7;
 VAR_9->private_data = VAR_10;
 VAR_9->private_free = VAR_5;
 return 0;
}
