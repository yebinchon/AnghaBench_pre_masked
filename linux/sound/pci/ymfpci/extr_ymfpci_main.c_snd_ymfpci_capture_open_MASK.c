
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct snd_ymfpci_pcm {size_t capture_bank_number; struct snd_pcm_substream* substream; scalar_t__ type; struct snd_ymfpci* chip; } ;
struct snd_ymfpci {struct snd_pcm_substream** capture_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int private_free; struct snd_ymfpci_pcm* private_data; int hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_ymfpci_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int) ;
 struct snd_ymfpci* FUNC_3 (struct snd_pcm_substream*) ;
 int VAR_5 ;
 int FUNC_4 (struct snd_ymfpci*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7,
       u32 VAR_8)
{
 struct snd_ymfpci *VAR_9 = FUNC_3(VAR_7);
 struct snd_pcm_runtime *VAR_10 = VAR_7->runtime;
 struct snd_ymfpci_pcm *VAR_11;
 int VAR_12;

 VAR_10->hw = VAR_5;

 VAR_12 = FUNC_1(VAR_10,
        VAR_3,
        5334, VAR_4);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_2(VAR_10, 48000);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 VAR_11->chip = VAR_9;
 VAR_11->type = VAR_8 + VAR_0;
 VAR_11->substream = VAR_7;
 VAR_11->capture_bank_number = VAR_8;
 VAR_9->capture_substream[VAR_8] = VAR_7;
 VAR_10->private_data = VAR_11;
 VAR_10->private_free = VAR_6;
 FUNC_4(VAR_9);
 return 0;
}
