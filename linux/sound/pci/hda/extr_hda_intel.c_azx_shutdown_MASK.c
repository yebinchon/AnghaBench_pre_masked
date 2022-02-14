
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct azx* private_data; } ;
struct pci_dev {int dummy; } ;
struct azx {scalar_t__ running; } ;


 int FUNC_0 (struct azx*) ;
 struct snd_card* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct snd_card *VAR_1 = FUNC_1(VAR_0);
 struct azx *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = VAR_1->private_data;
 if (VAR_2 && VAR_2->running)
  FUNC_0(VAR_2);
}
