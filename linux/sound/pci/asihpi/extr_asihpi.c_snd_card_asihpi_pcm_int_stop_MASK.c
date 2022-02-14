
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_card_asihpi {int t; int * llmode_streampriv; TYPE_2__* hpi; } ;
struct TYPE_4__ {TYPE_1__* adapter; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 struct snd_card_asihpi* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_card_asihpi *VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_1(FUNC_0(VAR_2->hpi->adapter->index,
  VAR_0, 0, 0));

 if (FUNC_2())
  VAR_2->llmode_streampriv = ((void*)0);
 else {
  FUNC_4(&VAR_2->t);
  VAR_2->llmode_streampriv = ((void*)0);
  FUNC_5(&VAR_2->t);
 }
}
