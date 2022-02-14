
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {int * cstream; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_stream {size_t direction; struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (struct snd_compr_stream*) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*) ;
 struct uniphier_aio* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_compr_stream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct uniphier_aio *VAR_2 = FUNC_2(VAR_1->cpu_dai);
 struct uniphier_aio_sub *VAR_3 = &VAR_2->sub[VAR_0->direction];
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3->cstream = ((void*)0);

 return 0;
}
