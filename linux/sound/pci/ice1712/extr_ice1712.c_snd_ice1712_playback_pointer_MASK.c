
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t buffer_size; } ;
struct snd_ice1712 {scalar_t__ ddma_port; } ;
typedef size_t snd_pcm_uframes_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct snd_pcm_runtime*,size_t) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_ice1712*,int ) ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 size_t VAR_4;

 if (!(FUNC_2(VAR_2, VAR_0) & 1))
  return 0;
 VAR_4 = VAR_3->buffer_size - FUNC_1(VAR_2->ddma_port + 4);
 VAR_4 = FUNC_0(VAR_1->runtime, VAR_4);
 if (VAR_4 == VAR_3->buffer_size)
  VAR_4 = 0;
 return VAR_4;
}
