
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb {int open; int hardware; int dma16; int dma8; struct snd_pcm_substream* capture_substream; struct snd_pcm_substream* playback_substream; int open_lock; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rate_min; int rate_max; int channels_max; int buffer_bytes_max; int period_bytes_max; int rates; int formats; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int,...) ;
 struct snd_sb* FUNC_3 (struct snd_pcm_substream*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_14)
{
 struct snd_sb *VAR_15 = FUNC_3(VAR_14);
 struct snd_pcm_runtime *VAR_16 = VAR_14->runtime;
 unsigned long VAR_17;

 FUNC_4(&VAR_15->open_lock, VAR_17);
 if (VAR_15->open) {
  FUNC_5(&VAR_15->open_lock, VAR_17);
  return -VAR_0;
 }
 VAR_15->open |= VAR_1;
 FUNC_5(&VAR_15->open_lock, VAR_17);
 if (VAR_14->stream == VAR_8) {
  VAR_15->playback_substream = VAR_14;
  VAR_16->hw = VAR_13;
 } else {
  VAR_15->capture_substream = VAR_14;
  VAR_16->hw = VAR_10;
 }
 switch (VAR_15->hardware) {
 case 129:
  if (VAR_15->dma16 == 5 || VAR_15->dma16 == 7)
   VAR_16->hw.formats |= VAR_2;
  VAR_16->hw.rates |= VAR_7;
  VAR_16->hw.rate_min = 4000;
  VAR_16->hw.rate_max = 50000;
  VAR_16->hw.channels_max = 2;
  break;
 case 128:
  VAR_16->hw.rate_max = 44100;
  VAR_16->hw.channels_max = 2;
  FUNC_2(VAR_16, 0, VAR_6,
        VAR_12, ((void*)0),
        VAR_4,
        VAR_6, -1);
  FUNC_2(VAR_16, 0, VAR_4,
         VAR_11, ((void*)0),
         VAR_6, -1);
  break;
 case 130:
  if (VAR_14->stream == VAR_8) {
   VAR_16->hw.rate_max = 44100;
  } else {
   VAR_16->hw.rate_max = 15000;
  }
 default:
  break;
 }
 FUNC_0(VAR_16, 0, VAR_6,
          &VAR_9);
 if (VAR_15->dma8 > 3 || VAR_15->dma16 >= 0) {
  FUNC_1(VAR_16, 0,
        VAR_3, 2);
  FUNC_1(VAR_16, 0,
        VAR_5, 2);
  VAR_16->hw.buffer_bytes_max = 128 * 1024 * 1024;
  VAR_16->hw.period_bytes_max = 128 * 1024 * 1024;
 }
 return 0;
}
