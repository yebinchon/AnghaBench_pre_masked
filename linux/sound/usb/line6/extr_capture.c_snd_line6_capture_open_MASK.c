
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_line6_pcm {TYPE_1__* properties; } ;
struct TYPE_2__ {int capture_hw; int rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_line6_pcm*,int ,int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_line6_pcm* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 int VAR_3;
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_line6_pcm *VAR_5 = FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_4, 0,
         VAR_1,
         &VAR_5->properties->rates);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_5, VAR_0, 0);

 VAR_4->hw = VAR_5->properties->capture_hw;
 return 0;
}
