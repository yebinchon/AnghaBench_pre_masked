
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_ice1712*,int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
           struct snd_pcm_hw_params *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_4(VAR_0);

 FUNC_2(VAR_2, FUNC_1(VAR_1), 0);
 return FUNC_3(VAR_0, FUNC_0(VAR_1));
}
