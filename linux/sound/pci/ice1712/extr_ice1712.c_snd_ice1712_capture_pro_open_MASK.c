
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {void* rate_max; void* rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_ice1712 {struct snd_pcm_substream* capture_pro_substream; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_ice1712*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_4(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;

 VAR_5->capture_pro_substream = VAR_4;
 VAR_6->hw = VAR_3;
 FUNC_3(VAR_4);
 FUNC_2(VAR_6, 0, 32, 24);
 FUNC_1(VAR_6, 0, VAR_1, &VAR_2);
 if (FUNC_0(VAR_5)) {
  VAR_6->hw.rate_min = VAR_0;
  VAR_6->hw.rate_max = VAR_0;
 }

 return 0;
}
