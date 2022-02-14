
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {int rd_total; int lock; int wr_offs; int rd_offs; TYPE_1__* swm; int compr_bytes; int compr_addr; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_tstamp {int copied_total; int byte_offset; } ;
struct snd_compr_stream {size_t direction; struct snd_compr_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_compr_runtime {int fragment_size; } ;
struct TYPE_2__ {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uniphier_aio_sub*,int ,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct uniphier_aio* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_compr_stream *VAR_1,
          struct snd_compr_tstamp *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_compr_runtime *VAR_4 = VAR_1->runtime;
 struct uniphier_aio *VAR_5 = FUNC_3(VAR_3->cpu_dai);
 struct uniphier_aio_sub *VAR_6 = &VAR_5->sub[VAR_1->direction];
 int VAR_7 = VAR_4->fragment_size;
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_1(&VAR_6->lock, VAR_8);

 FUNC_0(VAR_6, VAR_6->compr_addr, VAR_6->compr_bytes, VAR_7);

 if (VAR_6->swm->dir == VAR_0) {
  VAR_9 = VAR_6->rd_offs;

  VAR_2->copied_total = VAR_6->rd_total / 2;
 } else {
  VAR_9 = VAR_6->wr_offs;
  VAR_2->copied_total = VAR_6->rd_total;
 }
 VAR_2->byte_offset = VAR_9;

 FUNC_2(&VAR_6->lock, VAR_8);

 return 0;
}
