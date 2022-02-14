
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_7, int VAR_8,
         struct snd_soc_dai *VAR_9)
{
 int VAR_10 = 0;

 switch (VAR_8) {
 case 130:
  if (VAR_7->stream == VAR_6)
   VAR_3 &= ~VAR_5;
  else
   VAR_3 &= ~VAR_4;
  VAR_1 |= VAR_2;
  break;
 case 131:
 case 132:
 case 129:
 case 128:
 case 133:
  break;
 default:
  VAR_10 = -VAR_0;
 }

 return VAR_10;
}
