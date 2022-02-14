
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_card_asihpi {TYPE_2__* llmode_streampriv; } ;
struct hpi_adapter {TYPE_1__* snd_card; } ;
struct TYPE_4__ {int timer; } ;
struct TYPE_3__ {scalar_t__ private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct hpi_adapter *VAR_1 = (struct hpi_adapter *)VAR_0;
 struct snd_card_asihpi *VAR_2;

 FUNC_0(!VAR_1 || !VAR_1->snd_card || !VAR_1->snd_card->private_data);
 VAR_2 = (struct snd_card_asihpi *)VAR_1->snd_card->private_data;
 if (VAR_2->llmode_streampriv)
  FUNC_1(
   &VAR_2->llmode_streampriv->timer);
}
