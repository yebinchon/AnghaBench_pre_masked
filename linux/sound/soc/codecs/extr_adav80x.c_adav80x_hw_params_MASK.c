
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adav80x {unsigned int sysclk; unsigned int rate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct adav80x* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2,
  struct snd_pcm_hw_params *VAR_3, struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct adav80x *VAR_6 = FUNC_6(VAR_5);
 unsigned int VAR_7 = FUNC_5(VAR_3);

 if (VAR_7 * 256 != VAR_6->sysclk)
  return -VAR_0;

 if (VAR_2->stream == VAR_1) {
  FUNC_4(VAR_5, VAR_4, VAR_3);
  FUNC_2(VAR_5, VAR_7);
 } else {
  FUNC_1(VAR_5, VAR_4, VAR_3);
  FUNC_0(VAR_5, VAR_7);
 }
 VAR_6->rate = VAR_7;
 FUNC_3(VAR_5);

 return 0;
}
