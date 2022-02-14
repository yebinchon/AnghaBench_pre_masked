
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sh_dac {int empty; TYPE_1__* pdata; scalar_t__ processed; int data_buffer; int buffer_end; int buffer_begin; struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct TYPE_2__ {int (* start ) (TYPE_1__*) ;} ;


 struct snd_sh_dac* FUNC_0 (struct snd_pcm_substream*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_sh_dac *VAR_2 = FUNC_0(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;

 VAR_3->hw = VAR_0;

 VAR_2->substream = VAR_1;
 VAR_2->buffer_begin = VAR_2->buffer_end = VAR_2->data_buffer;
 VAR_2->processed = 0;
 VAR_2->empty = 1;

 VAR_2->pdata->start(VAR_2->pdata);

 return 0;
}
