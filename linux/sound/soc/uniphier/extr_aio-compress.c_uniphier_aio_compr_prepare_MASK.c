
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {int pass_through; int iec_pc; int params; int lock; scalar_t__ compr_bytes; scalar_t__ compr_addr; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_stream {size_t direction; struct snd_compr_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_compr_runtime {int fragment_size; } ;


 int FUNC_0 (struct uniphier_aio_sub*,int ) ;
 int FUNC_1 (struct uniphier_aio_sub*,int ) ;
 int FUNC_2 (struct uniphier_aio_sub*,int) ;
 int FUNC_3 (struct uniphier_aio_sub*,int ,int *) ;
 int FUNC_4 (struct uniphier_aio_sub*) ;
 int FUNC_5 (struct uniphier_aio_sub*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct uniphier_aio* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct snd_compr_stream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct snd_compr_runtime *VAR_2 = VAR_0->runtime;
 struct uniphier_aio *VAR_3 = FUNC_8(VAR_1->cpu_dai);
 struct uniphier_aio_sub *VAR_4 = &VAR_3->sub[VAR_0->direction];
 int VAR_5 = VAR_2->fragment_size;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_6(&VAR_4->lock, VAR_6);
 VAR_7 = FUNC_5(VAR_4, VAR_4->compr_addr,
       VAR_4->compr_addr + VAR_4->compr_bytes,
       VAR_5);
 FUNC_7(&VAR_4->lock, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_4->pass_through, &VAR_4->params);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_4, VAR_4->iec_pc);
 if (VAR_7)
  return VAR_7;
 FUNC_2(VAR_4, 1);

 VAR_7 = FUNC_0(VAR_4, VAR_4->pass_through);
 if (VAR_7)
  return VAR_7;

 return 0;
}
