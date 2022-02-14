
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_codec {int dummy; } ;
struct TYPE_2__ {struct snd_codec codec; } ;
struct uniphier_aio_sub {TYPE_1__ cparams; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_stream {size_t direction; struct snd_soc_pcm_runtime* private_data; } ;


 struct uniphier_aio* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_compr_stream *VAR_0,
      struct snd_codec *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct uniphier_aio *VAR_3 = FUNC_0(VAR_2->cpu_dai);
 struct uniphier_aio_sub *VAR_4 = &VAR_3->sub[VAR_0->direction];

 *VAR_1 = VAR_4->cparams.codec;

 return 0;
}
