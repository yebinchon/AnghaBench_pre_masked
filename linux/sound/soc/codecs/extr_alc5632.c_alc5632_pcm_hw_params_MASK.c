
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int regvalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_8,
  struct snd_pcm_hw_params *VAR_9, struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 int VAR_12, VAR_13;
 u16 VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_1);
 VAR_14 &= ~VAR_5;


 switch (FUNC_2(VAR_9)) {
 case 16:
  VAR_14 |= VAR_2;
  break;
 case 20:
  VAR_14 |= VAR_3;
  break;
 case 24:
  VAR_14 |= VAR_4;
  break;
 default:
  return -VAR_6;
 }


 FUNC_4(VAR_11, VAR_1, VAR_14);
 VAR_13 = FUNC_1(VAR_9);
 VAR_12 = FUNC_0(VAR_11, VAR_13);
 if (VAR_12 < 0)
  return -VAR_6;

 VAR_12 = VAR_7[VAR_12].regvalue;
 FUNC_4(VAR_11, VAR_0, VAR_12);

 return 0;
}
