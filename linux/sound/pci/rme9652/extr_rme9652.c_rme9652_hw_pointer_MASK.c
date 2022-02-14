
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rme9652 {int period_bytes; unsigned int prev_hw_offset; unsigned int max_jitter; unsigned int hw_offsetmask; TYPE_1__* card; int precise_ptr; } ;
typedef unsigned int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (struct snd_rme9652*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_rme9652 *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6;
 snd_pcm_uframes_t VAR_7 = VAR_3->period_bytes / 4;
 snd_pcm_sframes_t VAR_8;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_3->precise_ptr)
  return (VAR_4 & VAR_1) ? VAR_7 : 0;
 VAR_5 = VAR_4 & VAR_0;





 VAR_8 = VAR_3->prev_hw_offset - VAR_5;
 VAR_8 &= 0xffff;
 if (VAR_8 <= (snd_pcm_sframes_t)VAR_3->max_jitter * 4)
  VAR_5 = VAR_3->prev_hw_offset;
 else
  VAR_3->prev_hw_offset = VAR_5;
 VAR_5 &= VAR_3->hw_offsetmask;
 VAR_5 /= 4;
 VAR_6 = VAR_4 & VAR_1;

 if (VAR_5 < VAR_7) {
  if (VAR_5 > VAR_3->max_jitter) {
   if (VAR_6)
    FUNC_0(VAR_3->card->dev,
     "Unexpected hw_pointer position (bufid == 0): status: %x offset: %d\n",
     VAR_4, VAR_5);
  } else if (!VAR_6)
   return 0;
  VAR_5 -= VAR_3->max_jitter;
  if ((int)VAR_5 < 0)
   VAR_5 += VAR_7 * 2;
 } else {
  if (VAR_5 > VAR_7 + VAR_3->max_jitter) {
   if (!VAR_6)
    FUNC_0(VAR_3->card->dev,
     "Unexpected hw_pointer position (bufid == 1): status: %x offset: %d\n",
     VAR_4, VAR_5);
  } else if (VAR_6)
   return VAR_7;
  VAR_5 -= VAR_3->max_jitter;
 }

 return VAR_5;
}
