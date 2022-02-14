
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_card_asihpi {int t; } ;
struct pci_dev {int dummy; } ;
struct hpi_adapter {TYPE_2__* snd_card; TYPE_1__* adapter; int * interrupt_callback; scalar_t__ interrupt_mode; } ;
struct TYPE_4__ {struct snd_card_asihpi* private_data; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct hpi_adapter* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct hpi_adapter *VAR_2 = FUNC_3(VAR_1);
 struct snd_card_asihpi *VAR_3 = VAR_2->snd_card->private_data;


 if (VAR_2->interrupt_mode) {
  VAR_2->interrupt_callback = ((void*)0);
  FUNC_2(FUNC_1(VAR_2->adapter->index,
   VAR_0, 0, 0));
  FUNC_5(&VAR_3->t);
 }

 FUNC_4(VAR_2->snd_card);
 VAR_2->snd_card = ((void*)0);
 FUNC_0(VAR_1);
}
