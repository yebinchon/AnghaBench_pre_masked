
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sh_dac {TYPE_2__* pdata; int data_buffer; int buffer_size; TYPE_1__* substream; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_runtime {int buffer_size; } ;
struct TYPE_4__ {int buffer_size; } ;
struct TYPE_3__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct snd_sh_dac* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_sh_dac *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_1->substream->runtime;

 VAR_1->buffer_size = VAR_2->buffer_size;
 FUNC_0(VAR_1->data_buffer, 0, VAR_1->pdata->buffer_size);

 return 0;
}
