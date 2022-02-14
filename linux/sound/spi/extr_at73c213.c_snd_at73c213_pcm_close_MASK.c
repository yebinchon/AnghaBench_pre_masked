
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_at73c213 {TYPE_1__* ssc; int * substream; } ;
struct TYPE_2__ {int clk; } ;


 int FUNC_0 (int ) ;
 struct snd_at73c213* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_at73c213 *VAR_1 = FUNC_1(VAR_0);
 VAR_1->substream = ((void*)0);
 FUNC_0(VAR_1->ssc->clk);
 return 0;
}
