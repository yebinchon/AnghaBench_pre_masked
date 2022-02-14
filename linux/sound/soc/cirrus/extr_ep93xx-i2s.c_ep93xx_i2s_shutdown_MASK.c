
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct ep93xx_i2s_info {int dummy; } ;


 int FUNC_0 (struct ep93xx_i2s_info*,int ) ;
 struct ep93xx_i2s_info* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct ep93xx_i2s_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_0->stream);
}
