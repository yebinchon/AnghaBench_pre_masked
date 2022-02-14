
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ff {scalar_t__ substreams_counter; TYPE_2__* spec; int rx_stream; int tx_stream; int rx_resources; int tx_resources; int domain; } ;
typedef enum snd_ff_stream_mode { ____Placeholder_snd_ff_stream_mode } snd_ff_stream_mode ;
typedef enum snd_ff_clock_src { ____Placeholder_snd_ff_clock_src } snd_ff_clock_src ;
struct TYPE_4__ {TYPE_1__* protocol; int * pcm_playback_channels; int * pcm_capture_channels; } ;
struct TYPE_3__ {int (* get_clock ) (struct snd_ff*,unsigned int*,int*) ;int (* allocate_resources ) (struct snd_ff*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 unsigned int* VAR_2 ;
 int FUNC_2 (struct snd_ff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (struct snd_ff*,unsigned int*,int*) ;
 int FUNC_6 (struct snd_ff*,unsigned int) ;

int FUNC_7(struct snd_ff *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 enum snd_ff_clock_src VAR_6;
 int VAR_7;

 VAR_7 = VAR_3->spec->protocol->get_clock(VAR_3, &VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_3->substreams_counter == 0 || VAR_5 != VAR_4) {
  enum snd_ff_stream_mode VAR_8;
  int VAR_9;

  FUNC_0(&VAR_3->domain);
  FUNC_2(VAR_3);

  FUNC_3(&VAR_3->tx_resources);
  FUNC_3(&VAR_3->rx_resources);

  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
   if (VAR_2[VAR_9] == VAR_4)
    break;
  }
  if (VAR_9 >= VAR_0)
   return -VAR_1;

  VAR_7 = FUNC_4(VAR_9, &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_1(&VAR_3->tx_stream, VAR_4,
     VAR_3->spec->pcm_capture_channels[VAR_8]);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_1(&VAR_3->rx_stream, VAR_4,
     VAR_3->spec->pcm_playback_channels[VAR_8]);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = VAR_3->spec->protocol->allocate_resources(VAR_3, VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
