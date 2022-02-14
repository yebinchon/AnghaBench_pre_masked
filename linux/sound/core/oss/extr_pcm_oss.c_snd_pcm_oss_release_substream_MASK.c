
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ oss; } ;
struct snd_pcm_substream {TYPE_2__ oss; struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int * buffer; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1;
 VAR_1 = VAR_0->runtime;
 FUNC_0(VAR_1->oss.buffer);
 VAR_1->oss.buffer = ((void*)0);



 VAR_0->oss.oss = 0;
}
