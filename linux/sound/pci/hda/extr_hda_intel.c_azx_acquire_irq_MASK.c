
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdac_bus {int irq; } ;
struct azx {scalar_t__ msi; TYPE_2__* pci; TYPE_1__* card; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int dev; int irq_descr; } ;


 int VAR_0 ;
 struct hdac_bus* FUNC_0 (struct azx*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,struct azx*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct azx *VAR_2, int VAR_3)
{
 struct hdac_bus *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_3(VAR_2->pci->irq, VAR_1,
   VAR_2->msi ? 0 : VAR_0,
   VAR_2->card->irq_descr, VAR_2)) {
  FUNC_1(VAR_2->card->dev,
   "unable to grab IRQ %d, disabling device\n",
   VAR_2->pci->irq);
  if (VAR_3)
   FUNC_4(VAR_2->card);
  return -1;
 }
 VAR_4->irq = VAR_2->pci->irq;
 FUNC_2(VAR_2->pci, !VAR_2->msi);
 return 0;
}
