
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct pcm1789_private {int work; } ;


 int VAR_0 ;






 int FUNC_0 (int *) ;
 struct pcm1789_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct pcm1789_private *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(&VAR_5->work);
  break;
 case 129:
 case 128:
 case 133:
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
