
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card_asihpi {int t; } ;
struct hpi_adapter {TYPE_1__* snd_card; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hpi_adapter *VAR_0)
{
 struct snd_card_asihpi *VAR_1;

 FUNC_0(!VAR_0 || !VAR_0->snd_card || !VAR_0->snd_card->private_data);
 VAR_1 = (struct snd_card_asihpi *)VAR_0->snd_card->private_data;
 FUNC_1(&VAR_1->t);
}
