
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlv320dac33_priv {int fifo_mode; unsigned int alarm_threshold; unsigned int fifo_size; unsigned int nsample; unsigned int burst_rate; unsigned int uthr; int t_stamp1; void* mode7_us_to_lthr; int t_stamp2; void* mode1_us_burst; int mode1_latency; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {unsigned int period_size; unsigned int rate; } ;




 unsigned int VAR_0 ;
 void* FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_1,
      struct snd_soc_component *VAR_2)
{
 struct tlv320dac33_priv *VAR_3 = FUNC_3(VAR_2);
 unsigned int VAR_4 = VAR_1->runtime->period_size;
 unsigned int VAR_5 = VAR_1->runtime->rate;
 unsigned int VAR_6;


 if (!VAR_3->fifo_mode)
  return;

 switch (VAR_3->fifo_mode) {
 case 129:

  VAR_3->alarm_threshold = FUNC_1(VAR_5,
      VAR_3->mode1_latency);
  VAR_6 = VAR_3->fifo_size - VAR_3->alarm_threshold;

  if (VAR_4 <= VAR_3->alarm_threshold)




   VAR_3->nsample = VAR_4 *
    ((VAR_3->alarm_threshold / VAR_4) +
    (VAR_3->alarm_threshold % VAR_4 ?
    1 : 0));
  else if (VAR_4 > VAR_6)
   VAR_3->nsample = VAR_6;
  else
   VAR_3->nsample = VAR_4;

  VAR_3->mode1_us_burst = FUNC_0(VAR_3->burst_rate,
            VAR_3->nsample);
  VAR_3->t_stamp1 = 0;
  VAR_3->t_stamp2 = 0;
  break;
 case 128:
  VAR_3->uthr = FUNC_2(VAR_4, VAR_5,
          VAR_3->burst_rate) + 9;
  if (VAR_3->uthr > (VAR_3->fifo_size - VAR_0))
   VAR_3->uthr = VAR_3->fifo_size - VAR_0;
  if (VAR_3->uthr < (VAR_0 + 10))
   VAR_3->uthr = (VAR_0 + 10);

  VAR_3->mode7_us_to_lthr =
    FUNC_0(VAR_1->runtime->rate,
     VAR_3->uthr - VAR_0 + 1);
  VAR_3->t_stamp1 = 0;
  break;
 default:
  break;
 }

}
