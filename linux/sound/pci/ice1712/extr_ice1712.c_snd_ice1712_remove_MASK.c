
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* card_info; } ;
struct snd_card {struct snd_ice1712* private_data; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* chip_exit ) (struct snd_ice1712*) ;} ;


 struct snd_card* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct snd_card *VAR_1 = FUNC_0(VAR_0);
 struct snd_ice1712 *VAR_2 = VAR_1->private_data;

 if (VAR_2->card_info && VAR_2->card_info->chip_exit)
  VAR_2->card_info->chip_exit(VAR_2);
 FUNC_1(VAR_1);
}
