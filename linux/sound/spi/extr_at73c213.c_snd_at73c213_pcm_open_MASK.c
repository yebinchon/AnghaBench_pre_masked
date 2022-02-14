
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rate_max; int rate_min; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct snd_at73c213 {TYPE_1__* ssc; struct snd_pcm_substream* substream; int bitrate; } ;
struct TYPE_3__ {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 struct snd_at73c213* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_at73c213 *VAR_3 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4,
     VAR_0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_1.rate_min = VAR_3->bitrate;
 VAR_1.rate_max = VAR_3->bitrate;
 VAR_4->hw = VAR_1;
 VAR_3->substream = VAR_2;

 FUNC_0(VAR_3->ssc->clk);

 return 0;
}
