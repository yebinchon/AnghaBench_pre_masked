
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_compr_stream {scalar_t__ copied_total; scalar_t__ received_total; struct sprd_compr_dma* dma; } ;
struct sprd_compr_dma {scalar_t__ trans_len; } ;
struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sprd_compr_stream* private_data; } ;


 int FUNC_0 (struct snd_compr_stream*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct snd_compr_stream *VAR_1 = VAR_0;
 struct snd_compr_runtime *VAR_2 = VAR_1->runtime;
 struct sprd_compr_stream *VAR_3 = VAR_2->private_data;
 struct sprd_compr_dma *VAR_4 = &VAR_3->dma[1];


 VAR_3->copied_total += VAR_4->trans_len;
 if (VAR_3->copied_total > VAR_3->received_total)
  VAR_3->copied_total = VAR_3->received_total;

 FUNC_0(VAR_1);
}
