
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_pcm {int ** voices; } ;
struct snd_ymfpci {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_ymfpci* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_ymfpci*) ;
 int FUNC_3 (struct snd_ymfpci*,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_ymfpci *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_ymfpci_pcm *VAR_3;

 if (VAR_2->private_data == ((void*)0))
  return 0;
 VAR_3 = VAR_2->private_data;


 FUNC_2(VAR_1);
 FUNC_0(VAR_0);
 if (VAR_3->voices[1]) {
  FUNC_3(VAR_1, VAR_3->voices[1]);
  VAR_3->voices[1] = ((void*)0);
 }
 if (VAR_3->voices[0]) {
  FUNC_3(VAR_1, VAR_3->voices[0]);
  VAR_3->voices[0] = ((void*)0);
 }
 return 0;
}
