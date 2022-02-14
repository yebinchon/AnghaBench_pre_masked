
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;


 switch (FUNC_0(VAR_2)) {
 case 16:
  break;
 case 20:
  FUNC_1(VAR_4, VAR_0,
        0x000c, 0x0004);
  break;
 case 24:
  FUNC_1(VAR_4, VAR_0,
        0x000c, 0x0008);
  break;
 case 32:
  FUNC_1(VAR_4, VAR_0,
        0x000c, 0x000c);
  break;
 }
 return 0;
}
