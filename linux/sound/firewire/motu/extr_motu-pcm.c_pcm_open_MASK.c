
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* runtime; struct snd_motu* private_data; } ;
struct snd_motu_protocol {int (* get_clock_source ) (struct snd_motu*,int*) ;int (* get_clock_rate ) (struct snd_motu*,unsigned int*) ;} ;
struct snd_motu {int mutex; int rx_stream; int tx_stream; TYPE_1__* spec; } ;
typedef enum snd_motu_clock_source { ____Placeholder_snd_motu_clock_source } snd_motu_clock_source ;
struct TYPE_5__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;
struct TYPE_4__ {struct snd_motu_protocol* protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_motu*,struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_motu*) ;
 int FUNC_5 (struct snd_motu*) ;
 int FUNC_6 (struct snd_motu*) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_motu*,int*) ;
 int FUNC_9 (struct snd_motu*,unsigned int*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_1)
{
 struct snd_motu *VAR_2 = VAR_1->private_data;
 const struct snd_motu_protocol *const VAR_3 = VAR_2->spec->protocol;
 enum snd_motu_clock_source VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(&VAR_2->mutex);

 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6 < 0)
  goto err_locked;

 VAR_6 = FUNC_1(VAR_2, VAR_1);
 if (VAR_6 < 0)
  goto err_locked;





 VAR_6 = VAR_3->get_clock_source(VAR_2, &VAR_4);
 if (VAR_6 < 0)
  goto err_locked;
 if (VAR_4 != VAR_0 ||
     FUNC_0(&VAR_2->tx_stream) ||
     FUNC_0(&VAR_2->rx_stream)) {
  VAR_6 = VAR_3->get_clock_rate(VAR_2, &VAR_5);
  if (VAR_6 < 0)
   goto err_locked;
  VAR_1->runtime->hw.rate_min = VAR_5;
  VAR_1->runtime->hw.rate_max = VAR_5;
 }

 FUNC_7(VAR_1);

 FUNC_3(&VAR_2->mutex);

 return VAR_6;
err_locked:
 FUNC_3(&VAR_2->mutex);
 FUNC_5(VAR_2);
 return VAR_6;
}
