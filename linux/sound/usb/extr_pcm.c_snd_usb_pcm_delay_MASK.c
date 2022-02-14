
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int last_delay; int last_frame_number; scalar_t__ direction; int dev; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

snd_pcm_uframes_t FUNC_1(struct snd_usb_substream *VAR_1,
        unsigned int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 if (!VAR_1->last_delay)
  return 0;

 VAR_3 = FUNC_0(VAR_1->dev);





 VAR_4 = (VAR_3 - VAR_1->last_frame_number) & 0xff;



 VAR_5 = VAR_4 * VAR_2 / 1000;
 if (VAR_1->direction == VAR_0)
  VAR_5 = VAR_1->last_delay - VAR_5;
 else
  VAR_5 = VAR_1->last_delay + VAR_5;

 if (VAR_5 < 0)
  VAR_5 = 0;
 return VAR_5;
}
