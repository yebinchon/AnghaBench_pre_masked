
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* runtime; } ;
struct snd_card_asihpi_pcm {int dummy; } ;
struct snd_card_asihpi {int update_interval_frames; TYPE_2__* hpi; int t; struct snd_card_asihpi_pcm* llmode_streampriv; } ;
struct TYPE_6__ {scalar_t__ private_data; } ;
struct TYPE_5__ {TYPE_1__* adapter; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct snd_card_asihpi* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_card_asihpi_pcm *VAR_2;
 struct snd_card_asihpi *VAR_3;

 VAR_2 = (struct snd_card_asihpi_pcm *)VAR_1->runtime->private_data;
 VAR_3 = FUNC_4(VAR_1);

 FUNC_0(FUNC_3());
 FUNC_5(&VAR_3->t);
 VAR_3->llmode_streampriv = VAR_2;
 FUNC_6(&VAR_3->t);

 FUNC_2(FUNC_1(VAR_3->hpi->adapter->index,
  VAR_0,
  VAR_3->update_interval_frames, 0));
}
