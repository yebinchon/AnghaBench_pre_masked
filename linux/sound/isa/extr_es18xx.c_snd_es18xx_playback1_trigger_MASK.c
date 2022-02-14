
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_es18xx {int active; int dma2; int caps; int audio2_vol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_es18xx*,int) ;
 int FUNC_2 (struct snd_es18xx*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_es18xx *VAR_3,
     struct snd_pcm_substream *VAR_4,
     int VAR_5)
{
 switch (VAR_5) {
 case 130:
 case 131:
  if (VAR_3->active & VAR_0)
   return 0;
  VAR_3->active |= VAR_0;

  if (VAR_3->dma2 >= 4)
   FUNC_2(VAR_3, 0x78, 0xb3);
  else
   FUNC_2(VAR_3, 0x78, 0x93);
  break;
 case 129:
 case 128:
  if (!(VAR_3->active & VAR_0))
   return 0;
  VAR_3->active &= ~VAR_0;

                FUNC_2(VAR_3, 0x78, 0x00);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
