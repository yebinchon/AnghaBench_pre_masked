
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 != 48000)
  return -VAR_2;

 switch (FUNC_0(VAR_4)) {
 case 129:
  VAR_9 = FUNC_3(VAR_6, VAR_0);
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_6, VAR_1);
  break;
 default:
  return -VAR_2;
 }
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_4(VAR_4);
 return FUNC_2(VAR_6, VAR_8);
}
