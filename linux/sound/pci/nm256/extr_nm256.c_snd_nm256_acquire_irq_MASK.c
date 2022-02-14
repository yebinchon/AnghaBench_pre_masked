
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nm256 {scalar_t__ irq; int irq_mutex; int irq_acks; TYPE_2__* pci; TYPE_1__* card; int interrupt; } ;
struct TYPE_4__ {scalar_t__ irq; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int ,struct nm256*) ;

__attribute__((used)) static int FUNC_4(struct nm256 *VAR_3)
{
 FUNC_1(&VAR_3->irq_mutex);
 if (VAR_3->irq < 0) {
  if (FUNC_3(VAR_3->pci->irq, VAR_3->interrupt, VAR_1,
    VAR_2, VAR_3)) {
   FUNC_0(VAR_3->card->dev,
    "unable to grab IRQ %d\n", VAR_3->pci->irq);
   FUNC_2(&VAR_3->irq_mutex);
   return -VAR_0;
  }
  VAR_3->irq = VAR_3->pci->irq;
 }
 VAR_3->irq_acks++;
 FUNC_2(&VAR_3->irq_mutex);
 return 0;
}
