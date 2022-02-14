
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 unsigned int VAR_7 = FUNC_0(VAR_4);
 unsigned int VAR_8;

 switch (VAR_7) {
 case 8000:
  VAR_8 = 0;
  break;
 case 16000:
  VAR_8 = VAR_0;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_6, VAR_2, VAR_0,
   VAR_8);

 return 0;
}
