
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct q6asm_dai_rtd* private_data; } ;
struct q6asm_dai_rtd {size_t bytes_received; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_0,
    size_t VAR_1)
{
 struct snd_compr_runtime *VAR_2 = VAR_0->runtime;
 struct q6asm_dai_rtd *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_3->bytes_received += VAR_1;
 FUNC_1(&VAR_3->lock, VAR_4);

 return VAR_1;
}
