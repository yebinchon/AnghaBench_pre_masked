
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
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;




 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_14,
          struct snd_pcm_hw_params *VAR_15,
          struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 unsigned int VAR_18 = 0, VAR_19 = 0;

 switch (FUNC_0(VAR_15)) {
 case 131:
  VAR_18 |= VAR_4;
  break;
 case 130:
  VAR_18 |= VAR_5;
  break;
 case 129:
  VAR_18 |= VAR_6;
  break;
 case 128:
  VAR_18 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 VAR_18 |= VAR_3;
 VAR_19 |= VAR_12 | VAR_11;

 FUNC_1(VAR_17, VAR_1, VAR_2 |
       VAR_8, VAR_18);
 FUNC_1(VAR_17, VAR_9, VAR_10 |
       VAR_13, VAR_19);
 return 0;
}
