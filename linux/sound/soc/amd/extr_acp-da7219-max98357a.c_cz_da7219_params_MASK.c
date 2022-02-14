
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*,int,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
          struct snd_pcm_hw_params *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = VAR_2 * FUNC_1(VAR_1) *
  FUNC_4(FUNC_2(VAR_1));





 if (VAR_3 < (VAR_2 * 64))
  VAR_3 = VAR_2 * 64;
 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
