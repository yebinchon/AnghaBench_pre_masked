
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ua101 {int packets_per_second; int rate; int format_bit; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_4__ {int info; unsigned int channels_min; unsigned int channels_max; int buffer_bytes_max; int period_bytes_min; int periods_min; void* periods_max; void* period_bytes_max; int rate_max; int rate_min; int rates; int formats; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int,void*) ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ua101 *VAR_8, struct snd_pcm_substream *VAR_9,
    unsigned int VAR_10)
{
 int VAR_11;

 VAR_9->runtime->hw.info =
  VAR_5 |
  VAR_6 |
  VAR_1 |
  VAR_4 |
  VAR_2 |
  VAR_3;
 VAR_9->runtime->hw.formats = VAR_8->format_bit;
 VAR_9->runtime->hw.rates = FUNC_2(VAR_8->rate);
 VAR_9->runtime->hw.rate_min = VAR_8->rate;
 VAR_9->runtime->hw.rate_max = VAR_8->rate;
 VAR_9->runtime->hw.channels_min = VAR_10;
 VAR_9->runtime->hw.channels_max = VAR_10;
 VAR_9->runtime->hw.buffer_bytes_max = 45000 * 1024;
 VAR_9->runtime->hw.period_bytes_min = 1;
 VAR_9->runtime->hw.period_bytes_max = VAR_7;
 VAR_9->runtime->hw.periods_min = 2;
 VAR_9->runtime->hw.periods_max = VAR_7;
 VAR_11 = FUNC_0(VAR_9->runtime,
        VAR_0,
        1500000 / VAR_8->packets_per_second,
        VAR_7);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_1(VAR_9->runtime, 0, 32, 24);
 return VAR_11;
}
