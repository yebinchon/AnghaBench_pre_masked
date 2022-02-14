
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct alchemy_pcm_ctx {TYPE_1__* stream; } ;
struct TYPE_2__ {int * buffer; struct snd_pcm_substream* substream; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int* FUNC_3 (int ,struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*,int *) ;
 struct alchemy_pcm_ctx* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5)
{
 struct alchemy_pcm_ctx *VAR_6 = FUNC_5(VAR_5);
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 int *VAR_8, VAR_9 = VAR_5->stream;
 char *VAR_10;

 VAR_8 = FUNC_3(VAR_7->cpu_dai, VAR_5);
 if (!VAR_8)
  return -VAR_1;


 VAR_10 = (VAR_9 == VAR_2) ? "audio-tx" : "audio-rx";
 VAR_6->stream[VAR_9].dma = FUNC_1(VAR_8[VAR_9], VAR_10,
     VAR_4, 0,
     &VAR_6->stream[VAR_9]);
 FUNC_2(VAR_6->stream[VAR_9].dma,
       FUNC_0(VAR_6->stream[VAR_9].dma) & ~VAR_0);

 VAR_6->stream[VAR_9].substream = VAR_5;
 VAR_6->stream[VAR_9].buffer = ((void*)0);
 FUNC_4(VAR_5, &VAR_3);

 return 0;
}
