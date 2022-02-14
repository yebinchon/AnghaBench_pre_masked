
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_card_asihpi_pcm* private_data; } ;
struct snd_card_asihpi_pcm {int h_stream; scalar_t__ hpi_buffer_attached; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct snd_card_asihpi_pcm *VAR_2 = VAR_1->private_data;
 if (VAR_2->hpi_buffer_attached)
  FUNC_0(VAR_2->h_stream);

 FUNC_1(VAR_0);
 return 0;
}
