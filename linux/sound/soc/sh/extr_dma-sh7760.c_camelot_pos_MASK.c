
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct camelot_pcm {unsigned long rx_period_size; unsigned long tx_period_size; scalar_t__ tx_period; scalar_t__ rx_period; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {size_t id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 struct camelot_pcm* VAR_1 ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct camelot_pcm *VAR_5 = &VAR_1[VAR_4->cpu_dai->id];
 int VAR_6 = VAR_2->stream == VAR_0 ? 0:1;
 unsigned long VAR_7;







 if (VAR_6)
  VAR_7 = VAR_5->rx_period ? VAR_5->rx_period_size : 0;
 else
  VAR_7 = VAR_5->tx_period ? VAR_5->tx_period_size : 0;

 return FUNC_0(VAR_3, VAR_7);
}
