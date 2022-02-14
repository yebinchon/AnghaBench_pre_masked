
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_substream {unsigned int hwptr_done; int lock; TYPE_3__* stream; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef unsigned int snd_pcm_uframes_t ;
struct TYPE_6__ {TYPE_2__* chip; } ;
struct TYPE_5__ {int shutdown; } ;
struct TYPE_4__ {int frame_bits; int rate; int delay; struct snd_usb_substream* private_data; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_usb_substream*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_usb_substream *VAR_2 = VAR_1->runtime->private_data;
 unsigned int VAR_3;

 if (FUNC_0(&VAR_2->stream->chip->shutdown))
  return VAR_0;
 FUNC_2(&VAR_2->lock);
 VAR_3 = VAR_2->hwptr_done;
 VAR_1->runtime->delay = FUNC_1(VAR_2,
      VAR_1->runtime->rate);
 FUNC_3(&VAR_2->lock);
 return VAR_3 / (VAR_1->runtime->frame_bits >> 3);
}
