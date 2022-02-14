
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_4__* runtime; struct snd_ff* private_data; } ;
struct TYPE_10__ {size_t sfc; } ;
struct snd_ff {TYPE_5__ rx_stream; TYPE_5__ tx_stream; TYPE_2__* spec; } ;
typedef enum snd_ff_clock_src { ____Placeholder_snd_ff_clock_src } snd_ff_clock_src ;
struct TYPE_8__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_9__ {TYPE_3__ hw; } ;
struct TYPE_7__ {TYPE_1__* protocol; } ;
struct TYPE_6__ {int (* get_clock ) (struct snd_ff*,unsigned int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct snd_ff*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_ff*) ;
 int FUNC_3 (struct snd_ff*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_ff*,unsigned int*,int*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4)
{
 struct snd_ff *VAR_5 = VAR_4->private_data;
 unsigned int VAR_6;
 enum snd_ff_clock_src VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_4);
 if (VAR_9 < 0)
  goto release_lock;

 VAR_9 = VAR_5->spec->protocol->get_clock(VAR_5, &VAR_6, &VAR_7);
 if (VAR_9 < 0)
  goto release_lock;

 if (VAR_7 != VAR_2) {
  for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
   if (VAR_3[VAR_8] == VAR_6)
    break;
  }




  if (VAR_8 >= VAR_0) {
   VAR_9 = -VAR_1;
   goto release_lock;
  }

  VAR_4->runtime->hw.rate_min = VAR_6;
  VAR_4->runtime->hw.rate_max = VAR_6;
 } else {
  if (FUNC_0(&VAR_5->rx_stream) ||
      FUNC_0(&VAR_5->tx_stream)) {
   VAR_6 = VAR_3[VAR_5->rx_stream.sfc];
   VAR_4->runtime->hw.rate_min = VAR_6;
   VAR_4->runtime->hw.rate_max = VAR_6;
  }
 }

 FUNC_4(VAR_4);

 return 0;

release_lock:
 FUNC_2(VAR_5);
 return VAR_9;
}
