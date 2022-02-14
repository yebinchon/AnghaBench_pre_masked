
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct dmaengine_pcm_runtime_data {scalar_t__ pos; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct dmaengine_pcm_runtime_data* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct snd_pcm_substream *VAR_1 = VAR_0;
 struct dmaengine_pcm_runtime_data *VAR_2 = FUNC_3(VAR_1);

 VAR_2->pos += FUNC_1(VAR_1);
 if (VAR_2->pos >= FUNC_0(VAR_1))
  VAR_2->pos = 0;

 FUNC_2(VAR_1);
}
