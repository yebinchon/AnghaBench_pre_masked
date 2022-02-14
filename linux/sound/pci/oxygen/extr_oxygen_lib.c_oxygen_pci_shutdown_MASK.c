
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {struct oxygen* private_data; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* cleanup ) (struct oxygen*) ;} ;
struct oxygen {TYPE_1__ model; } ;


 int FUNC_0 (struct oxygen*) ;
 struct snd_card* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct oxygen*) ;

void FUNC_3(struct pci_dev *VAR_0)
{
 struct snd_card *VAR_1 = FUNC_1(VAR_0);
 struct oxygen *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 VAR_2->model.cleanup(VAR_2);
}
