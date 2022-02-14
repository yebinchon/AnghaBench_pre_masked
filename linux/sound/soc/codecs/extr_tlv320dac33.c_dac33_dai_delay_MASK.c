
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlv320dac33_priv {int fifo_mode; unsigned long long t_stamp1; unsigned long long t_stamp2; int alarm_threshold; unsigned long long mode1_us_burst; int nsample; int fifo_size; unsigned int uthr; unsigned int mode7_us_to_lthr; int burst_rate; int lock; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef unsigned int snd_pcm_sframes_t ;
struct TYPE_2__ {int rate; } ;





 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 unsigned long long FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct tlv320dac33_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_9(
   struct snd_pcm_substream *VAR_1,
   struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct tlv320dac33_priv *VAR_4 = FUNC_5(VAR_3);
 unsigned long long VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 snd_pcm_sframes_t VAR_13 = 0;
 unsigned long VAR_14;

 switch (VAR_4->fifo_mode) {
 case 130:
  break;
 case 129:
  FUNC_6(&VAR_4->lock, VAR_14);
  VAR_5 = VAR_4->t_stamp1;
  VAR_6 = VAR_4->t_stamp2;
  FUNC_7(&VAR_4->lock, VAR_14);
  VAR_7 = FUNC_3(FUNC_2());


  if (!VAR_6)
   goto out;

  if (VAR_5 > VAR_6) {




   VAR_8 = VAR_7 - VAR_5;
   VAR_10 = VAR_8 ? FUNC_0(
      VAR_1->runtime->rate,
      VAR_8) : 0;

   if (FUNC_4(VAR_4->alarm_threshold > VAR_10))
    VAR_13 = VAR_4->alarm_threshold - VAR_10;
   else
    VAR_13 = 0;
  } else if ((VAR_7 - VAR_6) <= VAR_4->mode1_us_burst) {




   VAR_8 = VAR_7 - VAR_5;
   VAR_10 = VAR_8 ? FUNC_0(
      VAR_1->runtime->rate,
      VAR_8) : 0;

   VAR_8 = VAR_7 - VAR_6;
   VAR_11 = VAR_8 ? FUNC_0(
      VAR_4->burst_rate,
      VAR_8) : 0;

   VAR_12 = VAR_4->alarm_threshold;
   VAR_12 += (VAR_11 - VAR_10);

   if (FUNC_4(VAR_12 > 0))
    VAR_13 = VAR_12;
   else
    VAR_13 = 0;
  } else {




   VAR_8 = VAR_7 - VAR_5;
   VAR_10 = VAR_8 ? FUNC_0(
      VAR_1->runtime->rate,
      VAR_8) : 0;

   VAR_11 = VAR_4->nsample;
   VAR_12 = VAR_4->alarm_threshold;
   VAR_12 += (VAR_11 - VAR_10);

   if (FUNC_4(VAR_12 > 0))
    VAR_13 = VAR_12 > VAR_4->fifo_size ?
     VAR_4->fifo_size : VAR_12;
   else
    VAR_13 = 0;
  }
  break;
 case 128:
  FUNC_6(&VAR_4->lock, VAR_14);
  VAR_5 = VAR_4->t_stamp1;
  VAR_9 = VAR_4->uthr;
  FUNC_7(&VAR_4->lock, VAR_14);
  VAR_7 = FUNC_3(FUNC_2());


  if (!VAR_5)
   goto out;

  if (VAR_7 <= VAR_5) {




   VAR_13 = VAR_9;
   goto out;
  }

  VAR_8 = VAR_7 - VAR_5;
  if (VAR_8 <= VAR_4->mode7_us_to_lthr) {




   VAR_10 = FUNC_0(
     VAR_1->runtime->rate,
     VAR_8);

   if (FUNC_4(VAR_9 > VAR_10))
    VAR_13 = VAR_9 - VAR_10;
   else
    VAR_13 = 0;
  } else {




   VAR_8 = VAR_8 - VAR_4->mode7_us_to_lthr;

   VAR_10 = FUNC_0(
     VAR_1->runtime->rate,
     VAR_8);
   VAR_11 = FUNC_0(
     VAR_4->burst_rate,
     VAR_8);
   VAR_13 = VAR_0 + VAR_11 - VAR_10;

   if (FUNC_8(VAR_13 > VAR_9))
    VAR_13 = VAR_9;
  }
  break;
 default:
  FUNC_1(VAR_3->dev, "Unhandled FIFO mode: %d\n",
       VAR_4->fifo_mode);
  break;
 }
out:
 return VAR_13;
}
