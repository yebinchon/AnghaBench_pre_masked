
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {int pass_through; int use_mmap; struct snd_compr_stream* cstream; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_stream {size_t direction; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct uniphier_aio_sub*) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*) ;
 struct uniphier_aio* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_compr_stream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct uniphier_aio *VAR_3 = FUNC_2(VAR_2->cpu_dai);
 struct uniphier_aio_sub *VAR_4 = &VAR_3->sub[VAR_1->direction];
 int VAR_5;

 if (VAR_4->cstream)
  return -VAR_0;

 VAR_4->cstream = VAR_1;
 VAR_4->pass_through = 1;
 VAR_4->use_mmap = 0;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 return 0;
}
