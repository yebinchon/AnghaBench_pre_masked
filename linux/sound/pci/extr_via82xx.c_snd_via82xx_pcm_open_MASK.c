
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viadev {size_t direction; int reg_offset; struct snd_pcm_substream* substream; } ;
struct via_rate_lock {int rate; int lock; int used; } ;
struct via82xx {TYPE_1__* ac97; scalar_t__ dxs_src; scalar_t__ dxs_fixed; scalar_t__ spdif_on; struct via_rate_lock* rates; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rates; int rate_min; int rate_max; } ;
struct snd_pcm_runtime {struct viadev* private_data; TYPE_2__ hw; } ;
struct TYPE_3__ {int* rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;
 TYPE_2__ VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct via82xx *VAR_9, struct viadev *VAR_10,
    struct snd_pcm_substream *VAR_11)
{
 struct snd_pcm_runtime *VAR_12 = VAR_11->runtime;
 int VAR_13;
 struct via_rate_lock *VAR_14;
 bool VAR_15 = 0;

 VAR_12->hw = VAR_8;


 VAR_14 = &VAR_9->rates[VAR_10->direction];
 FUNC_3(&VAR_14->lock);
 VAR_14->used++;
 if (VAR_9->spdif_on && VAR_10->reg_offset == 0x30) {

  VAR_12->hw.rates = VAR_9->ac97->rates[VAR_2];
  FUNC_2(VAR_12);
 } else if (VAR_9->dxs_fixed && VAR_10->reg_offset < 0x40) {

  VAR_12->hw.rates = VAR_4;
  VAR_12->hw.rate_min = VAR_12->hw.rate_max = 48000;
 } else if (VAR_9->dxs_src && VAR_10->reg_offset < 0x40) {

  VAR_12->hw.rates = (VAR_6 |
         VAR_5);
  VAR_12->hw.rate_min = 8000;
  VAR_12->hw.rate_max = 48000;
  VAR_15 = 1;
 } else if (! VAR_14->rate) {
  int VAR_16 = VAR_10->direction ? VAR_0 : VAR_1;
  VAR_12->hw.rates = VAR_9->ac97->rates[VAR_16];
  FUNC_2(VAR_12);
 } else {

  VAR_12->hw.rates = VAR_7;
  VAR_12->hw.rate_max = VAR_12->hw.rate_min = VAR_14->rate;
 }
 FUNC_4(&VAR_14->lock);



 if ((VAR_13 = FUNC_0(VAR_12, VAR_3)) < 0)
  return VAR_13;

 if (VAR_15) {
  VAR_13 = FUNC_1(VAR_12, 48000);
  if (VAR_13 < 0)
   return VAR_13;
 }

 VAR_12->private_data = VAR_10;
 VAR_10->substream = VAR_11;

 return 0;
}
