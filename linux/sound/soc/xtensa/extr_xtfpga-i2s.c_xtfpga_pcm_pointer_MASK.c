
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {int tx_ptr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; struct xtfpga_i2s* private_data; } ;
typedef scalar_t__ snd_pcm_uframes_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct xtfpga_i2s *VAR_2 = VAR_1->private_data;
 snd_pcm_uframes_t VAR_3 = FUNC_0(VAR_2->tx_ptr);

 return VAR_3 < VAR_1->buffer_size ? VAR_3 : 0;
}
