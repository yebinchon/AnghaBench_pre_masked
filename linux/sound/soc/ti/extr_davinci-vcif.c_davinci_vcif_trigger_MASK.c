
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2,
    struct snd_soc_dai *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_1);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_1);
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
