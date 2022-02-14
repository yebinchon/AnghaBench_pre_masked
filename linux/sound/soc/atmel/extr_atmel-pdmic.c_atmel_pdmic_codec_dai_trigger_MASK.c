
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_6,
     int VAR_7, struct snd_soc_dai *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->component;
 u32 VAR_10;

 switch (VAR_7) {
 case 130:
 case 131:
 case 132:
  VAR_10 = VAR_3 << VAR_5;
  break;
 case 129:
 case 128:
 case 133:
  VAR_10 = VAR_2 << VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_9, VAR_1, VAR_4, VAR_10);

 return 0;
}
