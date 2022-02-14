
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int stream; } ;
struct alchemy_pcm_ctx {TYPE_1__* stream; } ;
struct TYPE_2__ {int dma; int * substream; } ;


 int FUNC_0 (int ) ;
 struct alchemy_pcm_ctx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct alchemy_pcm_ctx *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = VAR_0->stream;

 VAR_1->stream[VAR_2].substream = ((void*)0);
 FUNC_0(VAR_1->stream[VAR_2].dma);

 return 0;
}
