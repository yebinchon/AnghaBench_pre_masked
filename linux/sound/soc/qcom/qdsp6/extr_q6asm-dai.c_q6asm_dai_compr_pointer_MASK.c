
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_tstamp {int copied_total; int byte_offset; } ;
struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {int copied_total; int pcm_size; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_0,
  struct snd_compr_tstamp *VAR_1)
{
 struct snd_compr_runtime *VAR_2 = VAR_0->runtime;
 struct q6asm_dai_rtd *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);

 VAR_1->copied_total = VAR_3->copied_total;
 VAR_1->byte_offset = VAR_3->copied_total % VAR_3->pcm_size;

 FUNC_1(&VAR_3->lock, VAR_4);

 return 0;
}
