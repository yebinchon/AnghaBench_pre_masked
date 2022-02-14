
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_1,
      struct snd_pcm_hw_params *VAR_2)
{
 FUNC_0(VAR_0, "hw_params(): desired buffer bytes=%d, desired "
        "period bytes=%d\n",
        FUNC_1(VAR_2), FUNC_2(VAR_2));
 return FUNC_3(VAR_1,
     FUNC_1(VAR_2));
}
