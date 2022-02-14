
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_pcm {size_t capture_bank_number; } ;
struct snd_ymfpci {int ** capture_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;


 struct snd_ymfpci* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_ymfpci*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_ymfpci *VAR_1 = FUNC_0(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_ymfpci_pcm *VAR_3 = VAR_2->private_data;

 if (VAR_3 != ((void*)0)) {
  VAR_1->capture_substream[VAR_3->capture_bank_number] = ((void*)0);
  FUNC_1(VAR_1);
 }
 return 0;
}
