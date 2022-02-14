
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_dice* private_data; } ;
struct snd_dice {struct amdtp_stream* tx_stream; } ;
struct amdtp_stream {int dummy; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {size_t device; } ;


 int FUNC_0 (struct amdtp_stream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_dice *VAR_1 = VAR_0->private_data;
 struct amdtp_stream *VAR_2 = &VAR_1->tx_stream[VAR_0->pcm->device];

 return FUNC_0(VAR_2);
}
