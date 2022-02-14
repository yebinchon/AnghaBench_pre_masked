
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3, int VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;

 switch (VAR_4) {
 case 130:
 case 132:
  return FUNC_0(VAR_6, VAR_2,
         VAR_1,
         VAR_1);
 case 131:
 case 133:
 case 129:
 case 128:
  return FUNC_0(VAR_6, VAR_2,
         VAR_1,
         0);
 default:
  return -VAR_0;
 }
}
