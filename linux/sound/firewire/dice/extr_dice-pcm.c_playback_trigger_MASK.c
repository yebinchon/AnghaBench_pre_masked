
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_dice* private_data; } ;
struct snd_dice {struct amdtp_stream* rx_stream; } ;
struct amdtp_stream {int dummy; } ;
struct TYPE_2__ {size_t device; } ;


 int VAR_0 ;


 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_dice *VAR_3 = VAR_1->private_data;
 struct amdtp_stream *VAR_4 = &VAR_3->rx_stream[VAR_1->pcm->device];

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_4, VAR_1);
  break;
 case 128:
  FUNC_0(VAR_4, ((void*)0));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
